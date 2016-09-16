#include "home.h"
#include "ui_home.h"
#include "numkeyboard.h"
#include "login.h"
#include <recognition.h>
#include <avthread.h>
#include "application.h"
#include "inputpwd.h"
#include "mainmenu.h"
#include "generaluser.h"
#include <QTime>
#include "data.h"
#include "dealdata.h"
#include "common.h"


Home::Home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    settime();
    numkeyboard=new Numkeyboard(this);
    numkeyboard->setGeometry(10,10,210,230);
    login=new Login();

    recognition=Recognition::getinstance();
    inputpwd=new Inputpwd();
    mainmenu=new Mainmenu();
    generaluser=new Generaluser();
    findedface=new QTimer(this);
    findedface->start(500);

    isdetecting=true;
    connect(&hometimer,SIGNAL(timeout()),this,SLOT(pbshow()));
    connect(findedface,SIGNAL(timeout()),this,SLOT(checkface()));
    connect(numkeyboard,SIGNAL(toclosehome()),this,SLOT(closehome()));

    connect(login,SIGNAL(tologin2home()),this,SLOT(login2home()));
    connect(login,SIGNAL(tohome2input()),this,SLOT(home2input()));

    connect(recognition,SIGNAL(tohome2menu()),this,SLOT(home2menu()));
    connect(recognition,SIGNAL(torecog2home()),this,SLOT(showthis()));
    connect(recognition,SIGNAL(tohome2input()),this,SLOT(home2input()));

    connect(inputpwd,SIGNAL(toinputpwdhome()),this,SLOT(login2home()));
    connect(inputpwd,SIGNAL(toinputpwdmenu()),this,SLOT(home2menu()));
    connect(mainmenu,SIGNAL(tomenu2login()),this,SLOT(login2home()));

    connect(generaluser,SIGNAL(tologin2home()),this,SLOT(login2home()));

    hometimer.start(1000*30);
    globaltimer.start(1000*30);
    recognition->startavthread();
}

Home::~Home()
{
    delete ui;
}

void Home::on_pushButton_clicked()
{
    this->hide();
    login->show();
}


void Home::closehome()
{
    adminflag=false;
    this->hide();
    startrecog();
}
void Home::startrecog()
{
    barflag=false;
    usbisstop=false;
    avisstop=false;
    isdetecting=false;
    beginfacerequire=false;
    recognition->show();
    Data::getinstance()->sleep(100);
    recognition->mainloop();
}
void Home::login2home()
{
    login->hide();
    this->show();
    avisstop=false;
    isdetecting=true;
    ispwdinput=false;
    generaladmin=false;
}
void Home::checkface()
{
    settime();
    if(isdetecting)
    {
        findedface->stop();
        findedface->start(500);
        if(haveface)
        {
            haveface=false;
            isdetecting=false;
            adminflag=false;
            startrecog();
        }
    }
}
void Home::pbshow()
{
    if(!isusbrunning)
    {
        if(usbisstop)
        {
            ishoming=true;
            qDebug()<<"离开识别界面:isusbrunning:"<<isusbrunning;
            isdetecting=true;

            ispwdinput=false;
            this->show();
            avisstop=false;
        }
    }

}

void Home::showthis()
{
    this->show();
    avisstop=false;
}
void Home::home2input()
{
    inputpwd->show();
    Data::getinstance()->sleep(100);
    ispwdinput=true;

}
void Home::home2menu()
{
    ispwdinput=false;
    if(generaladmin)
    {
       generaluser->show();
    }else{
        mainmenu->show();
    }
    adminflag=false;
}
void Home::settime()
{
    QDateTime time = QDateTime::currentDateTime();
    QString strTime = time.toString("hh:mm");
    //ui->labelTime->setText(strTime);
    QString strDate = time.toString("yyyy-MM-dd ");
    //ui->labelDate->setText(strDate);
    ui->label->setText(strDate+"\n"+strTime);
}

