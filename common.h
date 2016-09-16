#ifndef COMMON_H
#define COMMON_H

#include <QString>
#include <stdio.h>
#include <QTimer>
#include <QByteArray>

#define facefeature_length 2891/*7552*/
#define FACENUM  15

struct buffer{
    void *start;
    size_t   length;
};
struct temp
{
    double number;
    int index;
};
//#ifndef HJZN
extern struct buffer *usbbuffers;
extern struct buffer *avbuffers;

extern struct temp tmp[FACENUM];
extern struct temp tmp_up[11];
//extern struct temp tmp_select[commrownum*10];

extern int UPNUM;
extern int avfd;
extern int usbfd;
extern int uwidth;
extern int uheight;
extern int avwidth;
extern int avheight;
extern int id;
extern int permission;
extern int numframe;
extern int reco_nums;
extern int  alfc;
extern int idArray[100];
extern int commrownum;
extern int threshold;
extern int commadminid;
extern int adminrownum;
extern int adminidArray[100];//这边先定义500

extern unsigned int avn_buffers;
extern unsigned int usbn_buffers;

extern float dist;
extern double similar[1000];
extern double adminsimilar[1000];
extern double sums[20];
extern char  *usbdevname;
extern char  *avdevname;

extern  QTimer recogtimer;
extern  QTimer globaltimer;
extern  QTimer hometimer;

extern QString name;
extern QString pwd;
extern QString imagepath;

extern bool beginfacerequire;
extern bool updatadb;
extern bool barflag;
extern bool adminflag;
extern bool usbisstop;
extern bool avisstop;
extern bool generaladmin;
extern bool haveface;

extern bool isip;
extern bool ismask;
extern bool isrout;
extern bool isdns;
extern bool ispwdinput;
extern bool ishoming;
extern bool issupper;
extern bool isdetecting;
extern bool isusbrunning;
extern bool isfacereq;
extern bool issaveimage;
extern bool isstop;
extern bool isuserfind;
extern bool ismodify;
extern bool ismodifyadmin;
extern bool isthreshold;

extern bool isuserfind;
extern bool isdoorpwd;
extern bool isthreshold;

extern bool isyearinput;
extern bool ismoninput;
extern bool isdayinput;
extern bool ishourinput;
extern bool ismininput;
//#else
//float dis;
//int idArray[100];//这边先定义500
//int adminidArray[100];//这边先定义500
//double similar[1000];
//double adminsimilar[1000];
//double sums[20];

//int commrownum;
//int adminrownum;
//int UPNUM;

//unsigned int usbn_buffers;
//unsigned int avn_buffers;
//struct buffer *usbbuffers;
//struct buffer *avbuffers;

//struct temp tmp[FACENUM];
//struct temp tmp_up[11];
////struct temp tmp_select[commrownum*10];

//char *usbdevname;
//int avfd;
//char *avdevname;
//int usbfd;
//int  permission;
//int uwidth;
//int uheight;
//int avwidth;
//int avheight;
//int reco_nums;
//int threshold;
//int commadminid;

//bool updatadb;
//bool issaveimage;
//bool isstop;
//bool ismodify;
//bool ismodifyadmin;
//bool adminflag;
//bool usbisstop;
//bool avisstop;
//bool barflag;
//bool isuserfind;
//bool generaladmin;
//bool isdoorpwd;
//bool issupper;
//bool ispwdinput;
//bool isthreshold;
//bool beginfacerequire;

//bool ishoming;

//bool isyearinput;
//bool ismoninput;
//bool isdayinput;
//bool ishourinput;
//bool ismininput;

//bool isip;
//bool ismask;
//bool isrout;
//bool isdns;

//bool ismouseEvent;

//bool isfacereq;
//bool isusbrunning;

//bool isdetecting;
//bool haveface;

//QTimer globaltimer;
//QTimer hometimer;
//QTimer recogtimer;


//#endif

#endif // COMMON_H
