#include "dealdata.h"
#include <QDebug>
#include "data.h"
#include "common.h"
#include <QSqlRelationalTableModel>
#include <QSqlError>
#include <QSqlQuery>
#include <QByteArray>
#include "assert.h"

extern int numframe;
extern int modifyrownum;
extern bool ISSAVE;
extern bool ISREAD;
extern bool ISMODY;

Dealdata::Dealdata()
{
    usrmodel=new QSqlRelationalTableModel();

    dd=Data::getinstance();
    usrmodel=dd->getusermodel();

}
void Dealdata::run()
{
    {

        if(ISSAVE)
        {
            ISSAVE=false;
            writetodata();
        }
        if(ISREAD)
        {
            ISREAD=false;
            readuserface();
        }
        if(ISMODY)
        {
            ISMODY=false;
            //savemodify();
        }
    }
}
/*******************dave face data************************************/
void Dealdata::writetodata()
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
    //usrmodel->setEditStrategy(QSqlTableModel::OnFieldChange); //属性变化时写入数据库
    usrmodel->setData(usrmodel->index(rownum,0),id);
    usrmodel->setData(usrmodel->index(rownum,1),name);
    for(int i=0,col=2;i<10,col<12;i++,col++)
    {
        //test
        //usrmodel->setData(usrmodel->index(rownum,col),Data::getinstance()->facedata_i[i]);
        usrmodel->setData(usrmodel->index(rownum,col),/*QByteArray::fromRawData(*/Data::getinstance()->facedata[i],sizeof(Data::getinstance()->facedata[i]))/*)*/;
    }
    if(usrmodel->submitAll())
    {
        if(!usrmodel->database().commit())
        {
            qDebug()<<usrmodel->lastError();
        }
    }
    updatadb=true;
}
/********************read user faces******************************/
void Dealdata::readuserface()
{
    int i, j;
    int num=0;
    int id;
    char *ch;
    QByteArray qbyte;
    QSqlQuery query;
    QSqlQuery adminquery;
    //common user
    usrmodel->setTable("hjcommon");
    usrmodel->select();
    commrownum  = usrmodel->rowCount();
    query.exec("select * from hjcommon");
    while(query.next())
    {
        assert(num<100);
        idArray[num]=query.value(0).toInt();
        for(i=0; i<10; i++)
        {
            qbyte = query.value(2 + i).toByteArray();
            ch = qbyte.data();
            for(j=0; j<facefeature_length; j++){
                Data::getinstance()->commfacetemplates[num*10 + i][j]  = ch[j];
            }
        }
        num++;
    }
}

