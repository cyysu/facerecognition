#include "application.h"
#include "home.h"
#include<QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QTextCodec>
#include <QSqlError>
#include <QSqlRecord>
#include "recognition.h"
#include <QFile>
#include<QTextStream>
#include <QTimer>
#include <QSqlRelationalTableModel>
#include "dealdata.h"
#include "data.h"
#include <QSplashScreen>
#include <QLabel>
#include <QMovie>

QSqlDatabase db;
QSqlQuery query;
QString pwd;
QString imagepath;

float dis;
int idArray[100];//这边先定义500
int adminidArray[100];//这边先定义500
double similar[1000];
double adminsimilar[1000];
double sums[20];

int commrownum;
int adminrownum;
int UPNUM;

unsigned int usbn_buffers;
unsigned int avn_buffers;
struct buffer *usbbuffers;
struct buffer *avbuffers;

struct temp tmp[FACENUM];
struct temp tmp_up[11];

char *usbdevname;
int avfd;
char *avdevname;
int usbfd;
int  permission;
int uwidth;
int uheight;
int avwidth;
int avheight;
int reco_nums;
int threshold;
int commadminid;

bool updatadb;
bool issaveimage;
bool isstop;
bool ismodify;
bool ismodifyadmin;
bool adminflag;
bool usbisstop;
bool avisstop;
bool barflag;
bool isuserfind;
bool generaladmin;
bool isdoorpwd;
bool issupper;
bool ispwdinput;
bool isthreshold;
bool beginfacerequire;

bool ishoming;

bool isyearinput;
bool ismoninput;
bool isdayinput;
bool ishourinput;
bool ismininput;

bool isip;
bool ismask;
bool isrout;
bool isdns;

bool ismouseEvent;

bool isfacereq;
bool isusbrunning;

bool isdetecting;
bool haveface;

QTimer globaltimer;
QTimer hometimer;
QTimer recogtimer;
//
void readfacefeature()
{
    int i, j;
    int num=0;
    int id;
    char *ch;
    QByteArray qbyte;
    QSqlQuery query;
    QSqlQuery adminquery;

    //common user
    QSqlRelationalTableModel modelcommom;
    modelcommom.setTable("hjcommon");
    modelcommom.select();
    commrownum  = modelcommom.rowCount();
    query.exec("select * from hjcommon");
    while(query.next())
    {
        assert(num<100);
        idArray[num]=query.value(0).toInt();
        for(i=0; i<10; i++)
        {
            qbyte = query.value(2 + i).toByteArray();
            ch = qbyte.data();
            for(j=0; j<facefeature_length; j++)
            {
                Data::getinstance()->commfacetemplates[num*10 + i][j]  = ch[j];
            }
        }
        num++;
    }

    //adminstritor
    QSqlRelationalTableModel modeladmin;
    modeladmin.setTable("hjadmin");
    modeladmin.select();
    adminrownum  = modeladmin.rowCount();
    num=0;

    adminquery.exec("select * from hjadmin");
    while(adminquery.next())
    {
        assert(num<100);
        adminidArray[num]=adminquery.value(0).toInt();

        qDebug() << "ID =" << adminidArray[num] <<endl;

        for(i=0; i<10; i++){
            qbyte = adminquery.value(3 + i).toByteArray();
            ch = qbyte.data();
            for(j=0; j<facefeature_length; j++)
            {
                Data::getinstance()->adminfacetemplates[num*10 + i][j]  = ch[j];
            }
        }
        num++;
    }
}
void errno_exit (const char *s)
{
    fprintf (stderr, "%s error %d, %s\n",
             s, errno, strerror (errno));
    exit (EXIT_FAILURE);
}
int xioctl(int  fd, int  request, void *arg)
{
        int r;
        do r = ioctl (fd, request, arg);
        //destination
        while (-1 == r && EINTR == errno);
        return r;
}
void  start_capturing(void)
{
    unsigned int i;
    enum v4l2_buf_type type;
    for (i = 0; i < usbn_buffers; ++i) {
             struct v4l2_buffer buf;
             CLEAR (buf);
             buf.type        = V4L2_BUF_TYPE_VIDEO_CAPTURE;
             buf.memory      = V4L2_MEMORY_MMAP;
             buf.index       = i;
             if (-1 == xioctl(usbfd, VIDIOC_QBUF, &buf))
                     errno_exit ("VIDIOC_QBUF");
     }

     type = V4L2_BUF_TYPE_VIDEO_CAPTURE;

     if (-1 == xioctl (usbfd, VIDIOC_STREAMON, &type))
             errno_exit ("VIDIOC_STREAMON");
}
 void usbinit_mmap()
 {
     struct v4l2_requestbuffers req;
     CLEAR (req);
     req.count               = 4;
     req.type                = V4L2_BUF_TYPE_VIDEO_CAPTURE;
     req.memory              = V4L2_MEMORY_MMAP;
     if (-1 == xioctl (usbfd, VIDIOC_REQBUFS, &req)) {
             if (EINVAL == errno) {
                     fprintf (stderr, "%s does not support "
                              "memory mapping\n", usbdevname);
                     exit (EXIT_FAILURE);
             } else {
                     errno_exit ("VIDIOC_REQBUFS");
             }
     }
     if (req.count < 2) {
             fprintf (stderr, "Insufficient buffer memory on %s\n",usbdevname);
             exit (EXIT_FAILURE);
     }
     //waste my time
     usbbuffers = (buffer *)calloc(req.count,sizeof(*usbbuffers));
     if (!usbbuffers) {
             fprintf(stderr,"Out of memory\n");
             exit(EXIT_FAILURE);
     }
     for (usbn_buffers = 0; usbn_buffers < req.count; ++usbn_buffers)
     {
             struct v4l2_buffer buf;
             CLEAR (buf);
             buf.type        = V4L2_BUF_TYPE_VIDEO_CAPTURE;
             buf.memory      = V4L2_MEMORY_MMAP;
             buf.index       = usbn_buffers;

             if (-1 == xioctl(usbfd, VIDIOC_QUERYBUF, &buf))
                     errno_exit("VIDIOC_QUERYBUF");

             //printf("buf.length:%d\n",buf.length);
             usbbuffers[usbn_buffers].length = buf.length;
             usbbuffers[usbn_buffers].start =
                     mmap(NULL /* start anywhere */,
                           buf.length,
                           PROT_READ | PROT_WRITE /* required */,
                           MAP_SHARED /* recommended */,
                           usbfd, buf.m.offset);
             if (MAP_FAILED == usbbuffers[usbn_buffers].start)
                     errno_exit ("mmap");
     }
 }
 /*******************init usbdevice**********************************/
 void init_usbdevice(void)
 {
     struct v4l2_capability cap;
     struct v4l2_cropcap cropcap;
     struct v4l2_crop crop;
     struct v4l2_format fmt;
     struct v4l2_streamparm  parm;
     //?
     unsigned int min;

     if (-1 == xioctl(usbfd, VIDIOC_QUERYCAP, &cap)) {
              if (EINVAL == errno) {
                      fprintf (stderr, "%s is no V4L2 device\n",usbdevname);
                      exit (EXIT_FAILURE);
              } else {
                      errno_exit ("VIDIOC_QUERYCAP");
              }
      }
     if (!(cap.capabilities & V4L2_CAP_VIDEO_CAPTURE)) {
             fprintf (stderr, "%s is no video capture device\n",
                      usbdevname);
             exit (EXIT_FAILURE);
     }
     if (!(cap.capabilities & V4L2_CAP_STREAMING)) {
             fprintf (stderr, "%s does not support streaming i/o\n",
                      usbdevname);
             exit (EXIT_FAILURE);
     }
     //cropcap
     CLEAR (cropcap);
     cropcap.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
     if (0 == xioctl (usbfd, VIDIOC_CROPCAP, &cropcap)) {
             crop.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
             crop.c = cropcap.defrect; /* reset to default */
             if (-1 == xioctl (usbfd, VIDIOC_S_CROP, &crop)) {
                     switch (errno) {
                     case EINVAL:
                             /* Cropping not supported. */
                             break;
                     default:
                             /* Errors ignored. */
                             break;
                     }
             }
     } else {
             /* Errors ignored. */
     }
     //set format
     CLEAR (fmt);
     fmt.type                = V4L2_BUF_TYPE_VIDEO_CAPTURE;
     fmt.fmt.pix.width       = uwidth;
     fmt.fmt.pix.height      = uheight;
     fmt.fmt.pix.pixelformat = V4L2_PIX_FMT_YUYV;
     fmt.fmt.pix.field       = V4L2_FIELD_INTERLACED;

     if (-1 == xioctl (usbfd, VIDIOC_S_FMT, &fmt))
             errno_exit ("VIDIOC_S_FMT");
     if (-1 == xioctl (usbfd, VIDIOC_G_FMT, &fmt))
             errno_exit ("VIDIOC_G_FMT");
       qDebug()<<fmt.fmt.pix.pixelformat;

     /* Note VIDIOC_S_FMT may change width and height. */
     /* Buggy driver paranoia. */
     min = fmt.fmt.pix.width * 2;
     if (fmt.fmt.pix.bytesperline < min)
             fmt.fmt.pix.bytesperline = min;
     min = fmt.fmt.pix.bytesperline * fmt.fmt.pix.height;
     if (fmt.fmt.pix.sizeimage < min)
             fmt.fmt.pix.sizeimage = min;

     //query para
     CLEAR(parm);
     parm.type = V4L2_BUF_TYPE_VIDEO_CAPTURE/*V4L2_BUF_TYPE_VIDEO_OUTPUT*/;
     if(xioctl(usbfd, VIDIOC_G_PARM, &parm)==-1)
         errno_exit ("VIDIOC_G_PARM");
     //mmap
     usbinit_mmap();
     printf("this is usbinit_mmap");

     unsigned int i;
     for (i = 0; i < usbn_buffers; ++i) {
              struct v4l2_buffer buf;
              CLEAR (buf);
              buf.type        = V4L2_BUF_TYPE_VIDEO_CAPTURE;
              buf.memory      = V4L2_MEMORY_MMAP;
              buf.index       = i;
              if (-1 == xioctl(usbfd, VIDIOC_QBUF, &buf))
                      errno_exit ("VIDIOC_QBUF");
      }

     enum v4l2_buf_type type;
     type = V4L2_BUF_TYPE_VIDEO_CAPTURE;

     if (-1 == xioctl (usbfd, VIDIOC_STREAMON, &type))
             errno_exit ("VIDIOC_STREAMON");
 }
 /**************************ioctl***************************************/
 int open_cam(char *dev)
 {
     struct stat st;
     int fd;
     if (-1 == stat (/*avdevname*/dev, &st)) {
             fprintf (stderr, "Cannot identify '%s': %d, %s\n",
                      /*avdevname*/dev, errno, strerror (errno));
             exit (EXIT_FAILURE);
     }
     if (!S_ISCHR (st.st_mode)) {
             fprintf (stderr, "%s is no device\n", dev);
             exit(EXIT_FAILURE);
     }
     fd = open(/*avdevname*/dev, O_RDWR /* required */ | O_NONBLOCK, 0);
     if (-1 == fd) {
             fprintf (stderr, "Cannot open '%s': %d, %s\n",
                          /*avdevname*/dev, errno, strerror (errno));
             exit (EXIT_FAILURE);
         }
     qDebug()<<"this is open_avdevice";
     return fd;
 }
 void avinit_mmap()
 {
     struct v4l2_requestbuffers req;
     CLEAR (req);
     req.count               = 4;
     req.type                = V4L2_BUF_TYPE_VIDEO_CAPTURE;
     req.memory              = V4L2_MEMORY_MMAP;
     if (-1 == xioctl (avfd, VIDIOC_REQBUFS, &req)) {
             if (EINVAL == errno) {
                     fprintf (stderr, "%s does not support "
                              "memory mapping\n", avdevname);
                     exit (EXIT_FAILURE);
             } else {
                     errno_exit ("VIDIOC_REQBUFS");
             }
     }
     //
     if (req.count < 2) {
             fprintf (stderr, "Insufficient buffer memory on %s\n",avdevname);
             exit (EXIT_FAILURE);
     }
     //waste my time
     avbuffers = (buffer *)calloc(req.count,sizeof(*avbuffers));
     if (!avbuffers) {
             fprintf(stderr,"Out of memory\n");
             exit(EXIT_FAILURE);
     }
     for (avn_buffers = 0; avn_buffers < req.count; ++avn_buffers) {
             struct v4l2_buffer buf;
             CLEAR (buf);
             buf.type        = V4L2_BUF_TYPE_VIDEO_CAPTURE;
             buf.memory      = V4L2_MEMORY_MMAP;
             buf.index       = avn_buffers;

             if (-1 == xioctl(avfd, VIDIOC_QUERYBUF, &buf))
                     errno_exit("VIDIOC_QUERYBUF");
             avbuffers[avn_buffers].length = buf.length;
             avbuffers[avn_buffers].start =
                           mmap(NULL /* start anywhere */,
                           buf.length,
                           PROT_READ | PROT_WRITE /* required */,
                           MAP_SHARED /* recommended */,
                           avfd, buf.m.offset);
             if (MAP_FAILED == avbuffers[avn_buffers].start)
                     errno_exit ("mmap");
     }

 }
 /*******************init avdevice**********************************/
 void init_avdevice(void)
 {
     //设备能力查看
     struct v4l2_capability cap;
     //?
     struct v4l2_cropcap cropcap;
     struct v4l2_crop crop;
     struct v4l2_format fmt;
     struct v4l2_streamparm  parm;
     //?
     unsigned int min;

     int input = 0;
     if (xioctl(avfd, VIDIOC_S_INPUT, &input) == -1)
     {
         printf("Failed to set video input to %d\n", input);
         exit(0);
     }
     printf("success in VIDIOC_S_INPUT\n");

     if (-1 == xioctl(avfd, VIDIOC_QUERYCAP, &cap)) {
              if (EINVAL == errno) {
                      fprintf (stderr, "%s is no V4L2 device\n",avdevname);
                      exit (EXIT_FAILURE);
              } else {
                      errno_exit ("VIDIOC_QUERYCAP");
              }
      }//
     if (!(cap.capabilities & V4L2_CAP_VIDEO_CAPTURE)) {
             fprintf (stderr, "%s is no video capture device\n",
                      avdevname);
             exit (EXIT_FAILURE);
     }
     if (!(cap.capabilities & V4L2_CAP_STREAMING)) {
             fprintf (stderr, "%s does not support streaming i/o\n",
                      avdevname);
             exit (EXIT_FAILURE);
     }
    // printf("success\n");

     //cropcap
     CLEAR (cropcap);
     cropcap.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
     if (0 == xioctl(avfd, VIDIOC_CROPCAP, &cropcap)) {
             crop.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
             crop.c = cropcap.defrect; /* reset to default */
             if (-1 == xioctl (avfd, VIDIOC_S_CROP, &crop)) {
                     switch (errno) {
                     case EINVAL:
                             /* Cropping not supported. */
                             break;
                     default:
                             /* Errors ignored. */
                             break;
                     }
             }
     } else {
             /* Errors ignored. */
     }

     //set format
     CLEAR (fmt);
     fmt.type                = V4L2_BUF_TYPE_VIDEO_CAPTURE;
     fmt.fmt.pix.width       = avwidth;
     fmt.fmt.pix.height      = avheight;
     fmt.fmt.pix.pixelformat = V4L2_PIX_FMT_RGB565;
     fmt.fmt.pix.field       = V4L2_FIELD_NONE;
     if (-1 == xioctl (avfd, VIDIOC_S_FMT, &fmt))
         errno_exit ("VIDIOC_S_FMT");

     if (-1 == xioctl (avfd, VIDIOC_G_FMT, &fmt))
         errno_exit ("VIDIOC_G_FMT");
     if(fmt.fmt.pix.pixelformat!= V4L2_PIX_FMT_RGB565)
         printf("error,no support format\n");
     else
         printf("support the fmt\n");


     /* Note VIDIOC_S_FMT may change width and height. */
     /* Buggy driver paranoia. */
     min = fmt.fmt.pix.width * 2;
     if (fmt.fmt.pix.bytesperline < min)
             fmt.fmt.pix.bytesperline = min;
     min = fmt.fmt.pix.bytesperline * fmt.fmt.pix.height;
     if (fmt.fmt.pix.sizeimage < min)
             fmt.fmt.pix.sizeimage = min;

     //query para
     //================================
     CLEAR(parm);
     parm.type = V4L2_BUF_TYPE_VIDEO_CAPTURE/*V4L2_BUF_TYPE_VIDEO_OUTPUT*/;
     parm.parm.capture.timeperframe.denominator=15;
     if(xioctl(avfd, VIDIOC_S_PARM, &parm)==-1)

     if(xioctl(avfd, VIDIOC_G_PARM, &parm)==-1)
         errno_exit ("av VIDIOC_S_PARM");
     avinit_mmap();
     unsigned int i;
     //enum v4l2_buf_type type;
     for (i = 0; i < avn_buffers; ++i) {
              struct v4l2_buffer buf;
              CLEAR (buf);
              buf.type        = V4L2_BUF_TYPE_VIDEO_CAPTURE;
              buf.memory      = V4L2_MEMORY_MMAP;
              buf.index       = i;
              if (-1 == xioctl(avfd, VIDIOC_QBUF, &buf))
                      errno_exit ("VIDIOC_QBUF");
      }
     enum v4l2_buf_type type;
     type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
     //what do it do?
     if (-1 == xioctl (avfd, VIDIOC_STREAMON, &type))
             errno_exit ("VIDIOC_STREAMON");
     qDebug()<<"this is start_capturing";
 }

int main(int argc, char *argv[])
{
    Application a(argc, argv);

    QSplashScreen splash(QPixmap("22.gif"));
    QLabel lbl(&splash);
    QMovie mv("22.gif");
    lbl.setMovie (&mv);
    mv.start();
    splash.setGeometry(0,0,320,240);
    splash.show ();
    splash.setCursor(Qt::BlankCursor);


//    qDebug()<<"sssssssssssssss";

//    QLabel *label=new QLabel();
//    QMovie *movie=new QMovie("22.gif");
//    label->setMovie(movie);
//    movie->start();


//    QSplashScreen *splash = new QSplashScreen();

//    splash->move(-400,-400);
//    qDebug()<<"我是中国人，我爱中国";
//    splash->setPixmap(QPixmap("q.jpg"));
//    splash->setGeometry(0,0,320,240);
//    splash->show();
//    Qt::Alignment topRight = Qt::AlignLeft | Qt::AlignTop;

//   splash->showMessage(QObject::tr("Setting up the main window..."),topRight, Qt::white);//显示信息

//    for(int i=0;i<200;i++)
//    {
//        splash->repaint();
//    }

    //GB2312;UTF-8;GBK;GB18030;System
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForTr(codec);

    //open camera
    avdevname="/dev/video0";
    usbdevname="/dev/video3";
    uwidth=320;
    uheight=240;
    avwidth=640;
    avheight=480;
    usbisstop=true;
    avfd=open_cam(avdevname);
    init_avdevice();
    usbfd=open_cam(usbdevname);
    init_usbdevice();
    QFile file("config/threathold.txt");
    if(!file.open(QFile::ReadOnly)){
        printf("open config file fail\n");
        exit(0);
    }
    QTextStream fs(&file);
    QString fileContent(fs.readLine());
    qDebug()<<"The content of file is \n"<<fileContent;
    threshold=fileContent.toInt();
    file.close();
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./hjdata.sqlite");
    if(db.open()==false)
    {
        qDebug()<<"xxx";
    }
    query=QSqlQuery::QSqlQuery(db);
    //common user
    if(query.exec("create table hjcommon(id int primary key,name varchar(50),facedata0 blob,facedata1 blob,facedata2 blob,facedata3 blob,facedata4 blob,facedata5 blob,facedata6 blob,facedata7 blob,facedata8 blob,facedata9 blob)" )==true)
        qDebug()<<"create table success!\n";
    //administitor
    if(query.exec("create table hjadmin(id int primary key,name varchar(50),permisson int ,facedata0 blob,facedata1 blob,facedata2 blob,facedata3 blob,facedata4 blob,facedata5 blob,facedata6 blob,facedata7 blob,facedata8 blob,facedata9 blob)" )==true)
        qDebug()<<"create table success!\n";
    readfacefeature();

    Home w;
    w.show();
    //w.move ((QApplication::desktop()->width() - w.width())/2,(QApplication::desktop()->height() - w.height())/2);

    splash.finish(&w);

//    delete splash;


    //Data::getinstance()->sleep(100);
    return a.exec();
}
