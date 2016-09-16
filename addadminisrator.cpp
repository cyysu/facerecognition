#include "addadminisrator.h"
#include "ui_addadminisrator.h"
#include "mainkeyboard.h"
#include <QSqlRelationalTableModel>
#include <QDataWidgetMapper>
#include <QSqlRecord>
#include <QDebug>
#include <QSqlQuery>
#include <QTime>
#include <QSound>
#include "common.h"
#include "data.h"

int adminlineeditflag;

Addadminisrator::Addadminisrator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Addadminisrator)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    reqface=new QSound("recoging.wav");
    mainkeyboard=new Mainkeyboard();
    connect(mainkeyboard,SIGNAL(adminsendid(const QString &)),this->ui->admincardline,SLOT(setText(const QString &)));
    connect(mainkeyboard,SIGNAL(adminsendname(const QString &)),this->ui->adminnameline,SLOT(setText(const QString &)));
}

Addadminisrator::~Addadminisrator()
{
    delete ui;
}

void Addadminisrator::on_adminnameline_selectionChanged()
{
    adminlineeditflag=1;
    mainkeyboard->show();
}
void Addadminisrator::on_admincardline_selectionChanged()
{
    adminlineeditflag=2;
    mainkeyboard->show();
}

void Addadminisrator::on_adminrequirefacebnz_clicked()
{
    reqface->play();
    QTime dieTime = QTime::currentTime().addMSecs(3000);
    while( QTime::currentTime() < dieTime )
        QCoreApplication::processEvents(QEventLoop::AllEvents, 3000);
    isdetecting=false;
    isfacereq=true;
    name=this->ui->adminnameline->text();
    id=this->ui->admincardline->text().toInt();
    permission=0;
    barflag=true;
    adminflag=true;
    emit requirefaceshow();
}
void Addadminisrator::fillinformation()
{
    if(adminflag)
    {
        this->show();
        ui->adminnameline->setText(name);
        ui->admincardline->setText(QString::number(id, 10));
        ui->label->setPixmap("faceimages/admin2013"+QString::number(id,10)+".jpg");
    }
}
void Addadminisrator::on_addadminbnz_clicked()
{
    QSqlQuery query;
    query.exec("select * from hjadmin");
    int adminid=query.value(0).toInt()+1;
    if(adminid==1)
        permission=1;

    name=ui->adminnameline->text();
    id=ui->admincardline->text().toInt();
    hide();
    emit toaddadmin2admin();

}
void Addadminisrator::modiadmininfo(QModelIndex index)
{
    show();
    QTime dieTime = QTime::currentTime().addMSecs(10);
    while( QTime::currentTime() < dieTime )
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    QSqlRelationalTableModel modeladmin;
    modeladmin.setTable("hjadmin");
    modeladmin.select();
    QSqlRecord record = modeladmin.record(index.row());
    ui->adminnameline->setText(record.value(1).toString());
    ui->admincardline->setText(record.value(0).toString());
    ui->label->setPixmap("faceimages/admin2013"+QString::number(record.value(0).toInt(),10)+".jpg");

    //save current face data
    for(int i=0;i<10;i++)
    {
        Data::getinstance()->qbyte[i]=record.value(i+3).toByteArray();
    }
}
void Addadminisrator::autoadminfill()
{
    QSqlQuery query;
    query.exec("select * from hjadmin");
    query.last();
    int adminid=query.value(0).toInt()+1;
    ui->adminnameline->setText("admin"+QString::number(adminid,10));
    ui->admincardline->setText(QString::number(adminid,10));
    ui->label->clear();
}
