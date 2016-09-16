#include "recognition.h"
#include "ui_recognition.h"
#include "recfailtip.h"
#include "common.h"
#include <QFileInfo>
#include "recsuccession.h"
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QDateTime>
#include <QMatrix>
#include <QSound>
#include <QPainter>
#include <QPixmap>
#include "data.h"


int FDFLAG;
extern CvRect facerect;
\
Recognition *Recognition::recognition=0;


Recognition::Recognition(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Recognition)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    ui->progressBar->hide();
    //data=Data::getinstance();

    QRect re(70,30,130,135);
    QPixmap pixmap(320,240);
    pixmap.fill(Qt::transparent);
    QPainter painter(&pixmap);
    painter.setPen(Qt::yellow);
    painter.drawRect(re);
    ui->label_3->setPixmap(pixmap);

    rgb_buf = (unsigned char*)malloc(uwidth * uwidth * 24 / 8);
    if(rgb_buf==NULL)
    {
        printf("malloc rgb_buf error!");
        exit(0);
    }
    memset(rgb_buf,0,uwidth * uheight  * 24 / 8);
    image=new QImage(rgb_buf,uwidth,uheight,QImage::Format_RGB888);
    imgScaled = new QImage();
    reqfinished=new QSound("wav/reqfinished.wav");
    hello=new QSound("wav/nihao.wav");
    reconfail=new QSound("wav/reconfail.wav");
    shibiefail=new QSound("wav/shibiefail.wav");
    enterpwd=new QSound("wav/enterpwd.wav");

    recsuccession=new Recsuccession();
    recfailtip=new Recfailtip();
    sharetimer=new QTimer();
    standingtime=new QTimer();
    recfailtiptimer=new QTimer();//认证失败计时
    shibietimer=new QTimer();//识别失败计时
    paintre=new QTimer();
       paintre->start(100);
    avthread=new Avthread();

//    this->setStyleSheet(
//                "background-color: qlineargradient(spread:reflect, x1:0, y1:1, x2:0, y2:0, stop:0.0113636 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"
//                );
//    this->setStyleSheet(
//                "color: blue;"
//                "background-color: yellow;"
//                "selection-color: yellow;"
//                "selection-background-color: blue;"
//                );

//    QPainter painter(this);
//    QLinearGradient linearGradient(0,0,0,240);
//    linearGradient.setColorAt(0,/*Qt::red*/QColor(0,0,0,0));
//    linearGradient.setColorAt(0.2,Qt::black);
//    linearGradient.setColorAt(0.4,Qt::yellow);
//    linearGradient.setColorAt(0.6,Qt::white);
//    linearGradient.setColorAt(0.8,Qt::green);
//    linearGradient.setColorAt(1,Qt::blue);
//    //将直线开始点设为0，终点设为1，然后分段设置颜色
//    painter.setBrush(linearGradient);
//    painter.drawRect(100,100,200,100);


    connect(paintre, SIGNAL(timeout()), this, SLOT(paintrect()));
    connect(recfailtiptimer, SIGNAL(timeout()), this, SLOT(recfaildeal()));
    connect(shibietimer, SIGNAL(timeout()), this, SLOT(shibdeal()));
    connect(standingtime, SIGNAL(timeout()), this->recsuccession, SLOT(hide()));
    connect(avthread,SIGNAL(recognitionresult(int)),this,SLOT(recsuccessfunc(int)));
    printf("this is Recognition\n");
}
//
Recognition::~Recognition()
{
    delete ui;
    free(rgb_buf);
    delete image;
}

/*****************get instance************************************/
Recognition* Recognition::getinstance()
{
    if(recognition==0)
    {
        recognition=new Recognition();
    }
    return recognition;
}

/**************************ioctl***************************************/
int Recognition::xioctl(int  fd, int  request, void *arg)
{
        int r;
        do r = ioctl (fd, request, arg);
        //destination
        while (-1 == r && EINTR == errno);
        return r;
}

void  Recognition::start_capturing(void)
{
     enum v4l2_buf_type type;
     type = V4L2_BUF_TYPE_VIDEO_CAPTURE;

     if (-1 == xioctl (usbfd, VIDIOC_STREAMON, &type))
             errno_exit ("VIDIOC_STREAMON");

}
/**************************************mainloop************************************************/
void Recognition::mainloop()
{
        while(!usbisstop)
        {
            fd_set fds;
            struct timeval tv;
            int r;
            FD_ZERO (&fds);
            FD_SET (usbfd, &fds);
            /* Timeout. */
            tv.tv_sec = 2;
            tv.tv_usec = 0;
            r = select(usbfd + 1, &fds, NULL, NULL, &tv);
            if (-1 == r) {
                if (EINTR == errno)
                    continue;
                errno_exit("select");
            }
            if (0 == r) {
                fprintf (stderr, "select timeout\n");
                printf("stop usbcam\n");
                //exit (EXIT_FAILURE);
                break;
            }
            if (!read_frame ())
                break;
            /* EAGAIN - continue select loop. */
        }

}
/**************************************read_frame************************************************/
int Recognition::read_frame(void)
{
    struct v4l2_buffer buf;
    unsigned int i;

    CLEAR (buf);
    buf.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    buf.memory = V4L2_MEMORY_MMAP;
    if (-1 == xioctl (usbfd, VIDIOC_DQBUF, &buf)) {
            switch (errno) {
            case EAGAIN:
                    return 0;
            case EIO:
                    /* Could ignore EIO, see spec. */
                    /* fall through */
            default:
                    errno_exit ("VIDIOC_DQBUF");
            }
    }
    assert(buf.index < 4/*n_buffers*/);//n_buffers为什么没过来呢？
    process_image(usbbuffers[buf.index].start,usbbuffers[buf.index].length);
    if (-1 == xioctl(usbfd, VIDIOC_QBUF, &buf))
          errno_exit ("VIDIOC_QBUF");
    return 1;
}
/****************************stop_capturing************************************/
void Recognition::stop_capturing(void)
{
        enum v4l2_buf_type type;
        type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
        if (-1 == xioctl (usbfd, VIDIOC_STREAMOFF, &type))
                        errno_exit ("VIDIOC_STREAMOFF");
      \

}
/*****************************************************************************/
void Recognition::uninit_device(void)
{
        unsigned int i;
        for(i = 0; i < usbn_buffers; ++i)
             if(-1 == munmap (usbbuffers[i].start, usbbuffers[i].length))
                  errno_exit ("munmap");
        free(usbbuffers);
}
/*************************************************************************/
void Recognition::close_device(void)
{
    //close have no fd
    if (-1==close())
           errno_exit("close");
    usbfd = -1;
}
void Recognition::errno_exit (const char *s)
{
    fprintf (stderr, "%s error %d, %s\n",
             s, errno, strerror (errno));
    exit (EXIT_FAILURE);
}

/*****************************process_image*****************************************/
void Recognition::process_image(const void *p,int len)
{
    //qDebug()<<"process_imageprocess_imageprocess_image";
    if(Data::getinstance()->convert_yuv_to_rgb_buffer((unsigned char*)p, rgb_buf, uwidth, uheight)!=0)
    {
        printf("convert error\n");
        exit(0);
    }
    *imgScaled=image->scaled(131,141,Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    if(beginfacerequire==true)
    {  
        if(issaveimage==false)
        {
            if(!adminflag)
            {
                if(!imgScaled->save("faceimages/2013"+QString::number(id,10)+".jpg","JPG"))
                    printf("save fail");
                QFile file("faceimages/2013"+QString::number(id,10)+".jpg");
                if (!file.open(QIODevice::ReadOnly))
                {
                     printf("open file error\n");
                     exit(0);
                }
                if(file.size()>5000)
                     issaveimage=true;
            }else{
                if(imgScaled->save("faceimages/admin2013"+QString::number(id,10)+".jpg","JPG")==true)
                    printf("save success\n");
                QFile file("faceimages/admin2013"+QString::number(id,10)+".jpg");
                if (!file.open(QIODevice::ReadOnly))
                {
                     printf("open file error\n");
                     exit(0);
                }
                if(file.size()>5000)
                     issaveimage=true;
            }
       }
    }
    Data::getinstance()->sleep(5);
    *imgScaled=image->scaled(190,210,/*Qt::KeepAspectRatio*/Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    this->ui->label->setPixmap(QPixmap::fromImage(*imgScaled, Qt::AutoColor));
    if(!barflag)
       ui->progressBar->hide();
    if(isfacereq)
        ui->progressBar->show();
    ui->progressBar->setRange(0,FACENUM);
    ui->progressBar->setValue(numframe);
    if(numframe==FACENUM)
    {
        avisstop=true;
        usbisstop=true;
        isusbrunning=false;
        this->hide();
        ui->progressBar->hide();
        numframe=-1;
        getOkfaces();
        reqfinished->play();
        emit informationshow();
    }

    memset(rgb_buf,0,uwidth * uheight  * 24 / 8);
}
\
void Recognition::recsuccessfunc(int result )
{
    if(result==9999)
    {
        ;
    }else{
        reco_nums=0;
        QDateTime time = QDateTime::currentDateTime();
        QString timestr = time.toString("yyyy-MM-dd hh:mm:ss ddd");

        if(result==-1)
        {
            if(adminflag)
            {
                isdetecting=true;
                issupper=false;
                hide();
                usbisstop=true;
                avisstop=true;
                isusbrunning=false;
                reconfail->play();

                recfailtip->show();
                Data::getinstance()->sleep(1000);

                recfailtiptimer->start(3000);
            }else{
                recfailtip->show();
                shibiefail->play();
                Data::getinstance()->sleep(2000);
                shibietimer->start(2000);
            }
        }
        else
        {
            if(adminflag==false)
            {
                QSqlTableModel model;
                model.setTable("hjcommon");
                model.setFilter(tr("id = '%1'").arg(result));
                model.select();
                QSqlRecord record = model.record(0);
                QString namestr=record.value("name").toString();
                recsuccession->setname(namestr);
                recsuccession->settime(timestr);
                recsuccession->loadimage("faceimages/2013"+QString::number(result,10)+".jpg");
                hello->play();
                recordvar("识别成功",namestr);
                recsuccession->show();
                standingtime->start(3000);
            }
            else
            {
                issupper=false;
                usbisstop=true;
                avisstop=true;
                isusbrunning=false;
                hide();
                emit tohome2menu();
            }
        }
    }
}

void Recognition::on_recog2homebtn_clicked()
{
    isdetecting=true;//开始人脸存在检测
    avisstop=true;
    usbisstop=true;
    isusbrunning=false;
    hide();
    ui->progressBar->hide();
    if(!isfacereq)
    {
        if(!adminflag||generaladmin)
        {
            emit torecog2home();
        }
        else
        {
            emit tolong2input();
            enterpwd->play();
        }
    }else{
        isfacereq=false;
    }
}

void Recognition::startavthread()
{
    Data::getinstance()->sleep(2000);
    avthread->start(/*QThread::LowestPriority*/);
}

void Recognition::recfaildeal()
{
    recfailtiptimer->stop();
    this->recfailtip->hide();
    if(generaladmin)
    {
      emit torecog2home();
    }
    else
    {
        emit tohome2input();
    }
}

void Recognition::shibdeal()
{
    shibietimer->stop();
    recfailtip->hide();

}

void Recognition::recordvar(QString name,QString str)
{
    QDateTime dt;
    QTime time;
    QDate date;
    QString space = tr("  ");
    dt.setTime(time.currentTime());
    dt.setDate(date.currentDate());
    QString currentDate = dt.toString("yyyy:MM:dd:hh:mm:ss");
    QFile *file=new QFile("/message.txt");
    bool flag=file->open(QIODevice::WriteOnly|QIODevice::Append);
    if(!flag){
        return ;
    }
    file->write(currentDate.toAscii() + space.toAscii() + name.toAscii() + space.toAscii() + str.toAscii() +"\r\n");
    file->flush();
}
//paint rect
void Recognition::paintrect(/*vRect facerect*/)
{
    if(alfc==0)
    {

        QRect re(facerect.x/3+40,facerect.y/3-20,facerect.width/2-25,facerect.height/2-25);
        QPixmap pixmap(320,240);
        pixmap.fill(Qt::transparent);
        QPainter painter(&pixmap);
        painter.setPen(Qt::red);
        painter.drawRect(re);
        ui->label_4->setPixmap(pixmap);
    }else{
        ui->label_4->clear();
    }
}

void Recognition::getOkfaces()
{
    for (int i = 0; i < FACENUM; i++)
    {
        double result_sum = 0.0;
        for (int j = 0; j < FACENUM; j++)
        {
            result_sum += ArmHJCalcDisK((uchar*)Data::getinstance()->facedata[i], (uchar*)Data::getinstance()->facedata[j]);
        }
        sums[i]=result_sum;
    }
    for (int j=0; j<FACENUM; j++)
    {

        tmp[j].number = sums[j];
        tmp[j].index = j;
    }
    for (int k=0; k<FACENUM;k++)
    {
        for (int m=FACENUM-2; m>=k; m--)
            if (sums[m] < sums[m+1])
            {
                double t = sums[m];
                sums[m] = sums[m+1];
                sums[m+1] = t;

                temp tt;
                tt.index = tmp[m].index;
                tmp[m].index = tmp[m+1].index;
                tmp[m+1].index = tt.index;
            }
    }
    //for(int n=0;n<10;n++)
    //{
    //    qDebug()<<sums[n]<<tmp[n].index<<endl;

    //}
}



