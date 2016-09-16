#include "administrator.h"
#include "ui_administrator.h"
#include "addadminisrator.h"
#include <QSqlRelationalTableModel>
#include "common.h"
#include "recognition.h"
#include <QModelIndex>
#include <QSqlError>
#include <QSqlQuery>
#include <QByteArray>
#include "data.h"

int adminmodifyrownum;
char *adminfiled;
int adminid;
Administrator::Administrator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Administrator)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    data=Data::getinstance();
    addadminisrator=new Addadminisrator();
    recognition=Recognition::getinstance();
    modeladmin=new QSqlRelationalTableModel(ui->tableView);
    connect(addadminisrator,SIGNAL(toaddadmin2admin()),this,SLOT(dealaddadmin()));
    connect(addadminisrator,SIGNAL(requirefaceshow()),this,SLOT(showrecog()));
    connect(recognition,SIGNAL(informationshow()),this,SLOT(showinformation()));
}

Administrator::~Administrator()
{
    delete ui;
}

void Administrator::on_addadministratorbnz_clicked()
{
    hide();
    addadminisrator->show();
    data->sleep(10);
    addadminisrator->autoadminfill();
}

void Administrator::showrecog()
{
    beginfacerequire=true;
    issaveimage=false;
    numframe=0;
    usbisstop=false;
    avisstop=false;
    //recognition->startavthread();//强烈谴责高度注意
    recognition->show();
    data->sleep(200);
    recognition->mainloop();
}

void Administrator::showinformation()
{
    addadminisrator->fillinformation();
}

void Administrator::writetodata()
{
    if(id==1)
        permission=1;
    else
        permission=0;
    int rownum;
    if(!ismodifyadmin)
    {
        rownum=modeladmin->rowCount();
        modeladmin->insertRow(rownum);
    }else{
        rownum=adminmodifyrownum;
        ismodifyadmin=false;
    }
    qDebug()<<id<<name;
    modeladmin->setData(modeladmin->index(rownum,0),id);
    modeladmin->setData(modeladmin->index(rownum,1),name);
    modeladmin->setData(modeladmin->index(rownum,2),permission);
    for(int i=0,col=3;i<10,col<13;i++,col++)
    {
        modeladmin->setData(modeladmin->index(rownum,col),QByteArray::fromRawData(Data::getinstance()->facedata[i],sizeof(Data::getinstance()->facedata[i])));
        //test
        //modeladmin->setData(modeladmin->index(rownum,col),Data::getinstance()->facedata_i[i]);

    }
    if (modeladmin->submitAll()){
        if(!modeladmin->database().commit())
        {
            qDebug()<<modeladmin->lastError();
        }
    }
    updatadb=true;
    qDebug()<<"数据清零";
    for(int a=0;a<FACENUM;a++)
        for(int b=0; b<facefeature_length; b++){
            Data::getinstance()->facedata[a][b] = (uchar )0;

    }
}

void Administrator::on_adminreturnbnz_clicked()
{
    hide();
    emit toadminstrotomenu();
    data->sleep(10);
    if(updatadb)
    {
        updatadb=false;
        readadminface();
    }
}

void Administrator::on_deleteadminbnz_clicked()
{
    int curRow = ui->tableView->currentIndex().row();
    modeladmin->removeRow(curRow);
    int ok = QMessageBox::warning(this,tr("删除当前行!"),tr("你确定删除当前行吗？"),
    QMessageBox::Yes,QMessageBox::No);

    if(ok == QMessageBox::No){
        modeladmin->revertAll();
    }else{
       updatadb=true;
        modeladmin->submitAll();
    }
}
void Administrator::on_modifyadminbnz_clicked()
{
    hide();
    ismodifyadmin=true;
    QModelIndex index = ui->tableView->currentIndex();
    adminmodifyrownum=index.row();
    addadminisrator->modiadmininfo(index);
}

void Administrator::dealaddadmin()
{
    qDebug()<<"isfacereq*"<<isfacereq<<"ismodifyadmin"<<ismodifyadmin;
    this->show();
    data->sleep(10);
    if(ismodifyadmin&&(!isfacereq))
    {
        ismodifyadmin=false;
        savemodiadmin();
    }
    else
    {
        isfacereq=false;
        writetodata();
    }
}
void Administrator::savemodiadmin()
{
    if(id==1)
        permission=1;
    else
        permission=0;
    modeladmin->setData(modeladmin->index(adminmodifyrownum,0),id);
    modeladmin->setData(modeladmin->index(adminmodifyrownum,1),name);
    modeladmin->setData(modeladmin->index(adminmodifyrownum,2),permission);
    for(int i=0;i<10;i++)
        modeladmin->setData(modeladmin->index(adminmodifyrownum,3+i),QByteArray::fromRawData(Data::getinstance()->qbyte[0],4*facefeature_length));
    if (modeladmin->submitAll()){
        if(!modeladmin->database().commit())
         {
           qDebug()<<modeladmin->lastError();
         }
      }
     updatadb=true;
     for(int i=0;i<10;i++)
         Data::getinstance()->qbyte[i]=0;
}
void Administrator::initadmin()
{
    modeladmin->setEditStrategy(QSqlTableModel::OnManualSubmit);
    modeladmin->setTable("hjadmin");
    if (!modeladmin->select())
    {
        qDebug()<<modeladmin->lastError();
        return;
    }
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //使其不可编辑
    ui->tableView->setModel(modeladmin);
    ui->tableView->setColumnHidden(modeladmin->fieldIndex("permission"), true);
    ui->tableView->setColumnHidden(modeladmin->fieldIndex("password"), true);
    ui->tableView->setColumnHidden(modeladmin->fieldIndex("imagepath"), true);
    ui->tableView->setColumnHidden(modeladmin->fieldIndex("facedata0"), true);
    ui->tableView->setColumnHidden(modeladmin->fieldIndex("facedata1"), true);
    ui->tableView->setColumnHidden(modeladmin->fieldIndex("facedata2"), true);
    ui->tableView->setColumnHidden(modeladmin->fieldIndex("facedata3"), true);
    ui->tableView->setColumnHidden(modeladmin->fieldIndex("facedata4"), true);
    ui->tableView->setColumnHidden(modeladmin->fieldIndex("facedata5"), true);
    ui->tableView->setColumnHidden(modeladmin->fieldIndex("facedata6"), true);
    ui->tableView->setColumnHidden(modeladmin->fieldIndex("facedata7"), true);
    ui->tableView->setColumnHidden(modeladmin->fieldIndex("facedata8"), true);
    ui->tableView->setColumnHidden(modeladmin->fieldIndex("facedata9"), true);
    ui->tableView->show();
}

void Administrator::readadminface()
{
    int i, j;
    int num=0;
    int id;
    char *ch;
    QByteArray qbyte;
    QSqlQuery query;
    QSqlQuery adminquery;

   //adminstrotor
    QSqlRelationalTableModel modeladmin;
    modeladmin.setTable("hjadmin");
    modeladmin.select();
    adminrownum  = modeladmin.rowCount();
    adminquery.exec("select * from hjadmin");
    while(adminquery.next())
    {
       assert(num<100);
       adminidArray[num]=adminquery.value(0).toInt();
       for(i=0; i<10; i++){
           qbyte = adminquery.value(3 + i).toByteArray();
           ch = qbyte.data();
           for(j=0; j<facefeature_length; j++)
           {
               Data::getinstance()->adminfacetemplates[num*10 + i][j]  = ch[j] ;
           }
       }
       qDebug()<<num++;
   }
}
