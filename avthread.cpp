#include "common.h"
#include "avthread.h"
#include <QSqlRelationalTableModel>
#include <QByteArray>
#include <QSqlQuery>
#include <assert.h>
#include <QSqlRecord>
#include <QSound>
#include <QString>
#include "data.h"

CvRect facerect=cvRect(0,0,0,0);;
float dist;
int alfc;

Avthread::Avthread()
{
    avwidth=640;
    avheight=480;
    far=new QSound("wav/far.wav");
    near=new QSound("wav/near.wav");
    loadfacetemplates();
    qDebug()<<"this is avthread";
}
Avthread::~Avthread()
{
    free(avbuffers);
    cvReleaseImage(&rgb16IplImage);
    cvReleaseMat(&feature);
    for(int n=0; n<(commrownum * 10); n++)
        free((void *)Data::getinstance()->commfacetemplates[n]);
    free((void *)Data::getinstance()->commfacetemplates);
    for(int n=0; n<(commrownum * 10); n++)
        free((void *)Data::getinstance()->adminfacetemplates[n]);
    free((void *)Data::getinstance()->adminfacetemplates);
}

void Avthread::run()
{
    mainloop();
}
///**************************xioctl***************************************/
int Avthread::xioctl(int  fd, int  request, void *arg)
{
        int r;
        do r = ioctl (fd, request, arg);
        while (-1 == r && EINTR == errno);
        return r;
}

/***********************************mainloop**********************************************/
void Avthread::mainloop()
{
    while(1)
    {
        //qDebug()<<"两秒钟检测一次AV线程";
        msleep(2000);
        while(!avisstop) {
            fd_set fds;
            struct timeval tv;
            int r;
            FD_ZERO (&fds);
            FD_SET (avfd, &fds);
            /* Timeout. */
            tv.tv_sec = 2;
            tv.tv_usec = 0;
            r = select(avfd + 1, &fds, NULL, NULL, &tv);
            if (-1 == r) {
                if (EINTR == errno)
                    continue;
                errno_exit("select");
            }
            if (0 == r) {
                fprintf (stderr, "select timeout\n");
                exit (EXIT_FAILURE);
            }
            if (!read_frame ())
                break;
            /* EAGAIN - continue select loop. */


        }
    }
}

/******************************************mainloop***************************************************/
int Avthread::read_frame(void)
{
    struct v4l2_buffer buf;
    unsigned int i;
    CLEAR (buf);
    buf.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    buf.memory = V4L2_MEMORY_MMAP;
    if (-1 == xioctl (avfd, VIDIOC_DQBUF, &buf)) {
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
    assert(buf.index < /*avn_buffers*/4);//这边预留一个bug
    process_image(avbuffers[buf.index].start,avbuffers[buf.index].length);

    if (-1 == xioctl(avfd, VIDIOC_QBUF, &buf))
          errno_exit ("VIDIOC_QBUF");
    return 1;

}
//
/****************************stop_capturing************************************/
void Avthread::stop_capturing(void)
{
        enum v4l2_buf_type type;
        type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
        if (-1 == xioctl (avfd, VIDIOC_STREAMOFF, &type))
                        errno_exit ("VIDIOC_STREAMOFF");
      \

}
/*****************************************************************************/
void Avthread::uninit_device(void)
{
        unsigned int i;
        for(i = 0; i < avn_buffers; ++i)
             if(-1 == munmap (avbuffers[i].start, avbuffers[i].length))
                  errno_exit ("munmap");
        free(avbuffers);
}
/*************************************************************************/
void Avthread::close_device(void)
{
    if (-1==close(avfd))
            errno_exit("close");
    avfd = -1;
}

void Avthread::errno_exit (const char *s)
{
    fprintf (stderr, "%s error %d, %s\n",
             s, errno, strerror (errno));
    exit (EXIT_FAILURE);
}

/*****************************process_image****************************************************/
void Avthread::process_image(const void *p,int len)
{
    int n;
    if(memcpy(rgb16IplImage->imageData,(unsigned char*)p,len)==NULL)
    {
        printf("memcpy  rgb16 error\n");
        exit(0);
    }

//    QImage rgbimage=new QImage(rgb16IplImage->imageData,600,480,QImage::Format_RGB16);
//    bool xxk=rgbimage.save("xxxx.png",0);
//    qDebug()<<xxk<<"xxxxxxxxxxxxxxxxxxxxxxxxxx";
//    cvSaveImage("11111.bmp",rgb16IplImage);

    alfc=ArmFaceLocated(rgb16IplImage,normFace,feature,facerect,dist);
    if(alfc == 0)
    {
        //cvSaveImage("xxx.bmp",normFace);
        if(dist>160)
        {
            far->play();
            sleep(4);
        }
        if(dist<70)
        {
            near->play();
            sleep(4);
        }
        //don't  reconginze face,detect face when there is object moving or usb camra stoping work
        if(isdetecting||(usbisstop))
        {
            haveface=true;
            msleep(2000);
            return;
        }
        //don't show screensaver when reconginizing or collecting
        isusbrunning=true;
        if(beginfacerequire==true)
        {
            int i,j;

            for(j=0;j<facefeature_length;j++)
            {
                 Data::getinstance()->facedata[numframe][j] = (char)feature->data.ptr[j];
            }
            //test
            //for(j=0;j<facefeature_length;j++)
            //{
            //   Data::getinstance()->facedata_i[numframe][j] = feature->data.i[j];
            //}
            numframe++;
            //cvSaveImage("templatefaces/"+QString::number(numframe,10).toAscii()+"xxx.bmp",normFace);

         }
        else
         {
            for(int i=0;i<1000;i++)
            {
                similar[i]=0;
                adminsimilar[i]=0;
            }
            //save data that is used for recongnizing
            for(int m=0;m<facefeature_length;m++)
            {
                 Data::getinstance()->reco_updata[0][m] = (char )feature->data.ptr[m];
             }
            if(adminflag==false)
            {
                //cvSaveImage("recogfaces/"+QString::number(numframe,10).toAscii()+"xxx.bmp",normFace);
                for(n = 0; n < (commrownum  * 10) ; n++)
                {
                    double distancei= ArmHJCalcDisK((uchar *)Data::getinstance()->reco_updata[0],(uchar *)Data::getinstance()->commfacetemplates[n]);
                    //double distancei=0;
                    assert(n<1000);
                    similar[n] = distancei;
                    //printf("distancei[%d] = %f\n", n, distancei);
                }
                if(n!=0)
                {
                    int re=this->facesort(similar, commrownum);
                    if(re!=9999)
                    {
                        emit recognitionresult(re);
                        msleep(3000);
                    }
                }
                else
                {
                    emit recognitionresult(-1);
                    msleep(1000);
                }
            }
            else
            {
                for(n = 0; n < (adminrownum  * 10); n++)
                {
                    double distancei= ArmHJCalcDisK(feature->data.ptr,(uchar *)Data::getinstance()->adminfacetemplates[n]);
                    assert(n<1000);
                    adminsimilar[n] = distancei;
                    printf("distancei[%d] = %f\n", n, distancei);
                }
                if(n!=0)
                    emit recognitionresult(this->adminfacesort(adminsimilar, adminrownum));
                else
                    emit recognitionresult(-1);

            }
            msleep(500);
         }
       }
}
void Avthread::loadfacetemplates()
{
    rgb16IplImage=0;
    normFace=0;
    for(int i=0;i<1000;i++)
    {
        similar[i]=0;
        adminsimilar[i]=0;
    }
    if((rgb16IplImage =cvCreateImage( cvSize( avwidth, avheight ), 8, 2 ))==NULL)
        if (!rgb16IplImage){
            printf("rgb16IplImage error\n");
            cvReleaseImage( &rgb16IplImage );
        }
    normFace = cvCreateImage(cvSize( 128, 128 ), 8, 1);
        if (!normFace){
            printf("normFace error\n");
            cvReleaseImage( &normFace );
            exit(0);
        }
    feature = cvCreateMat(facefeature_length, 1, CV_8UC1);
    if((ArmInitializeFaceAlgorithm())!=0)
        printf("lagorithm fail\n");
}

int Avthread::facesort(double array[],int num)
{
    int i, k = 0,number=0;
    int idmax[5];
    double max;
    QSqlQuery query;
    struct temp tmp_select[num*10];
    for (int j=0; j<num*10; j++)
    {
        tmp_select[j].number = array[j];
        tmp_select[j].index = j;
    }
    for (int k=0; k<num*10;k++)
    {
        for (int m=num*10-2; m>=k; m--)
            if (array[m] < array[m+1])
            {
                double t = array[m];
                array[m] = array[m+1];
                array[m+1] = t;

                temp tt;
                tt.index = tmp_select[m].index;
                tmp_select[m].index = tmp_select[m+1].index;
                tmp_select[m+1].index = tt.index;
            }
    }
//    for(int n=0;n<num*10-2;n++)
//    {
//        qDebug()<<array[n]<<tmp_select[n].index<<endl;

//    }
    for(int q=0;q<5;q++)
    {
        idmax[q]=idArray[tmp_select[q].index/10];
        //qDebug()<<idmax[q]<<array[q]<<endl;
    }
    max = array[0];
    double xx=(double)threshold/100;
    if((idmax[0]==idmax[1])&&(idmax[1]==idmax[2])&&(idmax[2]==idmax[3])&&(idmax[3]==idmax[4]))
    {
        //max=idArray[0];
        if((max > xx) && (max < 1))
        {
            int id = idmax[0];
            UPNUM=0;
            QSqlTableModel model;
            model.setTable("hjcommon");
            model.setFilter(tr("id = '%1'").arg(id));
            model.select();
            if(model.rowCount()==1)
            {
                QSqlRecord record = model.record(0);
                int result = record.value(0).toInt();

                query.exec("select * from hjcommon");
                while(query.next())
                {
                    UPNUM++;
                    if(query.value(0).toInt()==id)
                        break;
                }
                for(int r=1;r<11;r++)
                {
                    char *ch;
                    QByteArray qbyte;
                    qbyte=record.value(r+1).toByteArray();
                    ch = qbyte.data();
                    for(int f=0; f<facefeature_length; f++)
                    {
                        Data::getinstance()->reco_updata[r][f]  = ch[f];
                    }
                }
                getOkfaces_2();
                Data::getinstance()->updata_data();
                return result;
            }
        }
    }
    reco_nums++;
    if(reco_nums==10)
         return -1;
    else
        return 9999;
}


int Avthread::adminfacesort(double array[],int num)
{
    int i, k = 0;
    double max;
    max = array[0];
    for(i = 1; i<(num * 10); i++)
    {
        if(max < array[i]) {
            max = array[i];
            k=i;
        }
    }
    double xx=(double)threshold/100;
    if((max > xx) && (max <= 1))
    {
       int id = adminidArray[k/10];
        QSqlTableModel model;
        model.setTable("hjadmin");
        if(issupper&&(commadminid==1))
        {
            if(id==1)
            {
                issupper=false;
                model.setFilter(tr("id = '%1'and permisson='%3'").arg(id).arg(1));
            }
        }else{
           if(commadminid==id)
                model.setFilter(tr("id = '%1'and permisson='%3'").arg(id).arg(0));
        }
        model.select();
        if(model.rowCount()==1) {
            QSqlRecord record = model.record(0);
            int result = record.value(0).toInt();
            return result;
        }
    }
    reco_nums++;
    if(reco_nums==10)
         return -1;
    else
        return 9999;
}
void Avthread::getOkfaces_2()
{
    for (int i = 0; i < 11; i++)
    {
        double result_sum = 0.0;
        for (int j = 0; j < 11; j++)
        {
            result_sum += ArmHJCalcDisK((uchar *)Data::getinstance()->reco_updata[i], (uchar *)Data::getinstance()->reco_updata[j]);
        }
        sums[i]=result_sum;
    }
    for (int j=0; j<11; j++)
    {
        tmp_up[j].number = sums[j];
        tmp_up[j].index = j;
    }
    for (int k=0; k<11;k++)
    {
        for (int m=11-2; m>=k; m--)
            if (sums[m] < sums[m+1])
            {
                double t = sums[m];
                sums[m] = sums[m+1];
                sums[m+1] = t;

                temp tt;
                tt.index = tmp_up[m].index;
                tmp_up[m].index = tmp_up[m+1].index;
                tmp_up[m+1].index = tt.index;
            }
    }

}

