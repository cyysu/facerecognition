#include "login.h"
#include "ui_login.h"
#include "numkeylogin.h"
#include "home.h"
#include <recognition.h>
#include "generaluser.h"
#include "data.h"
#include "common.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    data=Data::getinstance();
    numkeylogin =new Numkeylogin(this);
    numkeylogin->setGeometry(10,10,210,230);
    recognition=Recognition::getinstance();
    connect(&hometimer,SIGNAL(timeout()),this,SLOT(hidelogin()));
    connect(numkeylogin,SIGNAL(tologin2recog()),this,SLOT(login2recog()));
    connect(recognition,SIGNAL(tolong2input()),this,SIGNAL(tohome2input()));
    connect(recognition,SIGNAL(torecog2home()),this,SIGNAL(tologin2home()));
}

Login::~Login()
{
    delete ui;
}
//
void Login::on_pushButton_clicked()
{
    hide();
    emit tologin2home();
}
void Login::login2recog()
{
    barflag=false;
    adminflag=true;
    usbisstop=false;
    avisstop=false;
    beginfacerequire=false;
    hide();
    recognition->show();
    //远程调用产生的问题//强烈高度关注
    //recognition->startavthread();
    data->sleep(50);
    recognition->mainloop();
}
void Login::longinputxx()
{

}
void Login::hidelogin()
{
    this->hide();
    qDebug()<<"隐藏掉LOGIN窗口";
}
