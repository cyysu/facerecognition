#include "adduser.h"
#include "ui_adduser.h"
#include "mainkeyboard.h"
#include "common.h"
#include <QLineEdit>
#include <QDebug>
#include <QSqlRelationalTableModel>
#include <QDataWidgetMapper>
#include <QSqlRecord>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSound>
#include <QTime>
#include "data.h"
#include "common.h"
#include <QSqlRecord>
#include <QModelIndex>

int lineeditflag;
int id;
QString name;

Adduser::Adduser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Adduser)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    usrlist=Data::getinstance();
    model=usrlist->getusermodel();
    mainkeyboard=new Mainkeyboard();
    reqface=new QSound("recoging.wav");
    connect(&hometimer,SIGNAL(timeout()),this,SLOT(hide()));
    connect(mainkeyboard,SIGNAL(sendid(const QString &)),this->ui->lineEdit_4,SLOT(setText(const QString &)));
    connect(mainkeyboard,SIGNAL(sendname(const QString &)),this->ui->lineEdit,SLOT(setText(const QString &)));
}

Adduser::~Adduser()
{
    delete ui;
}

void Adduser::on_lineEdit_selectionChanged()
{
     lineeditflag=1;
     mainkeyboard->show();
}

void Adduser::on_lineEdit_4_selectionChanged()
{
    lineeditflag=2;
    mainkeyboard->show();
}

void Adduser::on_requireface_clicked()
{
    isdetecting=false;
    isfacereq=true;
    reqface->play();
    name=this->ui->lineEdit->text();
    id=this->ui->lineEdit_4->text().toInt();
    barflag=true;
    QTime dieTime = QTime::currentTime().addMSecs(3000);
    while( QTime::currentTime() < dieTime )
        QCoreApplication::processEvents(QEventLoop::AllEvents, 3000);
    emit requirefaceshow();//注意，这个信号发出去后后面的就没机会执行了，高度重视强烈谴责
}

void Adduser::on_returnbutton_clicked()
{
    name=this->ui->lineEdit->text();
    id=this->ui->lineEdit_4->text().toInt();
    hide();
    emit returnuser();
}
void Adduser::fillinformation()
{
    ui->lineEdit->setText(name);
    ui->lineEdit_2->setText("研发部");
    ui->lineEdit_3->setText("暂无");
    ui->lineEdit_4->setText(QString::number(id, 10));
    ui->lineEdit_5->setText(QString::number(2013, 10));
    ui->label->setPixmap("faceimages/2013"+QString::number(id,10)+".jpg");
}
void Adduser::modiuserinfo(QModelIndex index)
{
    show();
    usrlist->sleep(10);
    QSqlRecord record = model->record(index.row());
    ui->lineEdit_4->setText(record.value(0).toString());
    ui->lineEdit->setText(record.value(1).toString());
    ui->lineEdit_4->setText(record.value(0).toString());
    ui->label->setPixmap("faceimages/2013"+QString::number(record.value(0).toInt(),10)+".jpg");
    //save face data
    for(int i=0;i<10;i++)
    {
        Data::getinstance()->qbyte[i]=record.value(i+2).toByteArray();
    }
}
void Adduser::automaticfill()
{
    lastid=usrlist->getlastid();
    ui->lineEdit->setText("usr"+QString::number(lastid,10));
    ui->lineEdit_4->setText(QString::number(lastid,10));
    ui->label->clear();
}
int Adduser::IDcheck()
{
    if((ui->lineEdit_4->text()=="")||(ui->lineEdit->text()==""))
        return QMessageBox::warning(this,tr("错误提示"),tr("ID或姓名不能空"),tr("知道了"));
    QSqlTableModel model;
    model.setTable("hjcommon");
    model.setFilter(tr("id = '%1'").arg(ui->lineEdit_4->text()));
    model.select();
    if(model.rowCount()==1) {
        return  QMessageBox::warning(this,tr("错误提示"),tr("请输入有效ID"),tr("知道了"));
    }
    return 1;
}
