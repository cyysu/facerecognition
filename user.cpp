#include "user.h"
#include "ui_user.h"
#include "adduser.h"
#include <QSqlRelationalTableModel>
#include <QSqlError>
#include <QDebug>
#include <QSqlRecord>
#include <QModelIndex>
#include "common.h"
#include "recognition.h"
#include "informationface.h"
#include <QByteArray>
#include <QSqlRelationalDelegate>
#include "finduser.h"
#include <QSqlQuery>
#include <QByteArray>
#include <QTimer>
#include "data.h"
#include "dealdata.h"

extern int modifyrownum;
bool ISSAVE;
bool ISREAD;
bool ISMODY;

User::User(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::User)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    usrlist=Data::getinstance();
    modelcommon=usrlist->getusermodel();

    updatamodel= new QSqlRelationalTableModel();

    ui->tableView->setModel(usrlist->getusermodel());
    //ui->tableView->setModel(usrlist->getusermodel2());

    recognition=Recognition::getinstance();
    adduser=new Adduser();
    finduser=new Finduser();
    dealdata=new Dealdata();

    connect(&hometimer,SIGNAL(timeout()),this,SLOT(hideuser()));
    connect(adduser,SIGNAL(requirefaceshow()),this,SLOT(showrecog()));
    connect(recognition,SIGNAL(informationshow()),this,SLOT(showinformation()));
    connect(adduser,SIGNAL(returnuser()),this,SLOT(dealadduser()));
    connect(finduser,SIGNAL(tofinduser(int)),this,SLOT(updatauser(int)));
    connect(finduser,SIGNAL(toreturnusr()),this,SLOT(show()));
    for(int i=2;i<12;i++)
      ui->tableView->hideColumn(i);
}

User::~User()
{
    delete ui;
}

void User::on_pushButton_clicked()
{
    hide();
    adduser->show();
    usrlist->sleep(5);
    adduser->automaticfill();
}
/**********************start recognize*************************/
void User::showrecog()
{
    beginfacerequire=true;
    issaveimage=false;
    numframe=0;
    usbisstop=false;
    avisstop=false;
    recognition->show();
    usrlist->sleep(200);
    recognition->mainloop();

}
void User::showinformation()
{
      adduser->fillinformation();
}
void User::on_pushButton_5_clicked()
{
     hide();
     if(generaladmin)
     {
         emit returngeneral();
     }else{
         emit returnmenu();
     }
     usrlist->sleep(10);//为了及时显示页面
     if(updatadb)
     {
         updatadb=false;
         ISREAD=true;
         dealdata->start();

     }
}

void User::on_deleteuserbutton_clicked()
{
    int curRow = ui->tableView->currentIndex().row();
    int ok = QMessageBox::warning(this,tr("删除当前行!"),tr("你确定删除当前行吗？"),QMessageBox::Yes,QMessageBox::No);
    if(ok == QMessageBox::No){
        modelcommon->revertAll();
    }else{
        updatadb=true;//提示更新数据
        //modelcommon->database().transaction(); //开始事务操作
        modelcommon->removeRow(curRow);
        modelcommon->submitAll();
#if 0
        ui->tableView->setModel(modelcommon);
        ui->tableView->setModel(usrlist->getusermodel2());
        ui->tableView->show();
        usrlist->getusermodel2();
#endif

    }
}

void User::on_modifyuserbutton_clicked()
{
    hide();
    ismodify=true;//标志进入修改窗口
    QModelIndex index = ui->tableView->currentIndex();
    modifyrownum=index.row();
    //qDebug()<<"这里进入更改窗口，ismodify的值是"<<ismodify<<"行数是"<<modifyrownum;
    adduser->modiuserinfo(index);
}

void User::on_userfindbnz_clicked()
{
    isuserfind=true;
    //hide();
    finduser->show();
}

void User::updatauser(int findid)
{
    QString findfiled="hjcommon.id="+QString::number(findid,10);
    //usrlist->getusermodel2()->setQuery("select * from hjcommon where id=findfiled");
    updatamodel=modelcommon;
    updatamodel->setFilter(findfiled);
    updatamodel->select();
    ui->tableView->setModel(updatamodel);
    //ui->tableView->setModel(usrlist->getusermodel2());
}
void User::dealadduser()
{
    //qDebug()<<"ismodify"<<ismodify<<"isfacereq"<<isfacereq<<"xxxxxxxxxxxxxxxxxxxxxxx";

    this->show();

    usrlist->sleep(10);//为了消除显示延时
    if(ismodify&&(!isfacereq))
     {
        ismodify=false;
        //ISMODY=true;
        usrlist->savemodify();
           //dealdata->start();
     }
     else
     {
        isfacereq=false;
        //ISSAVE=true;
        //usrlist->sleep(5000);
        usrlist->writetodata();
        //dealdata->start();
     }
      //usrlist->getusermodel2();
      ui->tableView->setModel(modelcommon);
}

void User::inituser()
{
    usrlist->getusermodel();
}

void User::hideuser()
{
    this->hide();
    qDebug()<<"隐藏掉user窗口";
}
