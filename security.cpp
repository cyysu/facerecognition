#include "security.h"
#include "ui_security.h"
#include "administrator.h"
#include "doorpwd.h"
#include <QTime>

extern bool isdoorpwd;
extern bool adminflag;

Security::Security(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Security)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    administrator=new Administrator();
    doorpwd=new Doorpwd();
    connect(doorpwd,SIGNAL(todoorpwd2secr()),this,SLOT(show()));
    connect(administrator,SIGNAL(toadminstrotomenu()),this,SLOT(show()));
}

Security::~Security()
{
    delete ui;
}
void Security::on_adminbnz_clicked()
{
  adminflag=true;
  hide();
  administrator->show();

  QTime dieTime = QTime::currentTime().addMSecs(10);
    while( QTime::currentTime() < dieTime )
          QCoreApplication::processEvents(QEventLoop::AllEvents, 10);
  administrator->initadmin();
}
void Security::on_securityreturnbnz_clicked()
{
    adminflag=false;
    hide();
    emit tosecurity2menu();
}
void Security::on_secritypwd_clicked()
{
    hide();
    isdoorpwd=true;
    doorpwd->show();
}
