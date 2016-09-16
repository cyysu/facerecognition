#include "data.h"
#include <QSqlRelationalTableModel>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <assert.h>
#include <QTime>
#include <QCoreApplication>
#include <QSqlRecord>
#include <QString>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlQueryModel>

Data *Data::data=0;
int numframe;
int modifyrownum;

Data::Data()
{
    usrmodel=new QSqlRelationalTableModel();
    usrmodel2 = new QSqlQueryModel();
    //Allocates space for face recognition
    reco_updata = (char**)calloc(11*10 , sizeof(char*));
    for(int n = 0; n < (11 * 10); n++){
        reco_updata[n] = (char*)calloc(facefeature_length , sizeof(char));
    }
    if(reco_updata== NULL)
    {
        perror("malloc error");
        exit(0);
    }
    //Allocates space for the domestic consumer
    commfacetemplates = (char**)calloc(60* 10 , sizeof(char*));
    for(int i = 0; i < (/*commrownum*/60 * 10); i++){
        commfacetemplates[i] = (char*)calloc(facefeature_length , sizeof(char));
    }
    if(commfacetemplates== NULL)
    {
        perror("malloc error");
        exit(0);
    }
    //Allocates space for the admin consumer
    adminfacetemplates = (char**)calloc(/*adminrownum*/12 * 10 , sizeof(char*));
    for(int j = 0; j < (/*a+dminrownum*/12 * 10); j++)
    {
        adminfacetemplates[j] = (char*)calloc(facefeature_length ,sizeof(char));
    }
    if( adminfacetemplates== NULL)
    {
        perror("malloc error");
        exit(0);
    }
}
/*****************get instance************************************/
Data* Data::getinstance()
{
    if(data==0)
    {
        data=new Data();
    }
    return data;
}

/*********************get user model*******************************/
QSqlRelationalTableModel* Data::getusermodel()
{
    usrmodel->setTable("hjcommon");
    //usrmodel->setQuery(QSqlQuery("select id ,name from hjcommon"));
    usrmodel->select();
    return usrmodel;
}

/*********************get user model*******************************/
QSqlQueryModel* Data::getusermodel2()
{
    usrmodel2->setQuery("select id,name from hjcommon");
    //usrmodel2->setHeaderData(0, Qt::Horizontal, "id");
    //usrmodel2->setHeaderData(1, Qt::Horizontal, "name");
    //QSqlQuery query("select id,name from hjcommon");
    //usrmodel2->setTable("hjcommon");
    //usrmodel2->setQuery(query);
    //QSqlQueryModel::setQuery("select id,name from hjcommon");
    //usrmodel2->select();
    return usrmodel2;
}
/************************get last id of user***********************/
int Data::getlastid()
{
    int lastid;
    QSqlQuery query;
    query.exec("select id from hjcommon");
    query.last();
    lastid=query.value(0).toInt()+1;
    return lastid;
}
/*******************save face data****************************/
void Data::writetodata()
{
    int rownum;
    if(!ismodify)
    {
        rownum=usrmodel->rowCount();
        usrmodel->insertRow(rownum);
    }else{
        rownum=modifyrownum;
        ismodify=false;
    }
    usrmodel->setData(usrmodel->index(rownum,0),id);
    usrmodel->setData(usrmodel->index(rownum,1),name);
    for(int i=0,col=2 ;i<10,col<12;i++,col++)
    {
        usrmodel->setData(usrmodel->index(rownum,col),QByteArray::fromRawData(facedata[tmp[i].index],sizeof(facedata[tmp[i].index])));
    }
    if(usrmodel->submitAll())
    {
        if(!usrmodel->database().commit())
        {
            qDebug()<<usrmodel->lastError();
        }
    }
    updatadb=true;
    for(int a=0;a<FACENUM;a++)
        for(int b=0; b<facefeature_length; b++){
            facedata[a][b] = (uchar )0;
    }
}

void Data::sleep(unsigned int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
        QCoreApplication::processEvents(QEventLoop::AllEvents, 3000);
}
int Data::convert_yuv_to_rgb_buffer(unsigned char *yuv, unsigned char *rgb, unsigned int width, unsigned int height)
{
    unsigned int in, out = 0;
    unsigned int pixel_16;
    unsigned char pixel_24[3];
    unsigned int pixel32;
    int y0, u, y1, v;

    for(in = 0; in < width * height * 2; in += 4) {
        pixel_16 =  yuv[in + 3] << 24 |  yuv[in + 2] << 16 |  yuv[in + 1] <<  8 |  yuv[in + 0];
        y0 = (pixel_16 & 0x000000ff);
        u  = (pixel_16 & 0x0000ff00) >>  8;
        y1 = (pixel_16 & 0x00ff0000) >> 16;
        v  = (pixel_16 & 0xff000000) >> 24;
        pixel32 = convert_yuv_to_rgb_pixel(y0, u, v);
        pixel_24[0] = (pixel32 & 0x000000ff);
        pixel_24[1] = (pixel32 & 0x0000ff00) >> 8;
        pixel_24[2] = (pixel32 & 0x00ff0000) >> 16;
        rgb[out++] = pixel_24[0];
        rgb[out++] = pixel_24[1];
        rgb[out++] = pixel_24[2];
        pixel32 = convert_yuv_to_rgb_pixel(y1, u, v);
        pixel_24[0] = (pixel32 & 0x000000ff);
        pixel_24[1] = (pixel32 & 0x0000ff00) >> 8;
        pixel_24[2] = (pixel32 & 0x00ff0000) >> 16;
        rgb[out++] = pixel_24[0];
        rgb[out++] = pixel_24[1];
        rgb[out++] = pixel_24[2];
    }
    return 0;
}
/******************************convert format*********************************/
int Data::convert_yuv_to_rgb_pixel(int y, int u, int v)
{
    unsigned int pixel32 = 0;
    unsigned char *pixel = (unsigned char*)&pixel32;
    int r, g, b;

    r = y + (1.370705 * (v-128));
    g = y - (0.698001 * (v-128)) - (0.337633 * (u-128));
    b = y + (1.732446 * (u-128));
    if(r > 255) r = 255;
    if(g > 255) g = 255;
    if(b > 255) b = 255;
    if(r < 0) r = 0;
    if(g < 0) g = 0;
    if(b < 0) b = 0;
    pixel[0] = r * 220 / 256;
    pixel[1] = g * 220 / 256;
    pixel[2] = b * 220 / 256;
    return pixel32;
}
/*******************dave face data************************************/
void Data::updata_data()
{
    for(int i=0,col=2 ;i<10,col<12;i++,col++)
    {
        //堆上二维数组，和栈上二维数组在这里不一样，强烈关注，高度注意
        usrmodel->setData(usrmodel->index(UPNUM-1,col),/*QByteArray::fromRawData(*/reco_updata[tmp_up[i].index],sizeof(reco_updata[tmp_up[i].index]/*)*/));
    }
    if(usrmodel->submitAll())
    {
        if(!usrmodel->database().commit())
        {
            qDebug()<<usrmodel->lastError();
        }
    }
}
void Data::savemodify()
{
    usrmodel->setData(usrmodel->index(modifyrownum,0),id);
    usrmodel->setData(usrmodel->index(modifyrownum,1),name);
    for(int i=0;i<10;i++)
        usrmodel->setData(usrmodel->index(modifyrownum,i+2),QByteArray::fromRawData(Data::getinstance()->qbyte[i],4*facefeature_length));
    if(usrmodel->submitAll())
    {
        if(!usrmodel->database().commit())
         {
           qDebug()<<usrmodel->lastError();
         }
      }
     updatadb=true;
     for(int j=0;j<10;j++)
        Data::getinstance()->qbyte[j]=0;
}
