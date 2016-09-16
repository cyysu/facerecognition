#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "user.h"
#include "security.h"
#include "advancedsetup.h"
#include "systemset.h"
#include <QTime>
#include <QTimer>
#include <QDebug>
#include "common.h"
#include "data.h"

Mainmenu::Mainmenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Mainmenu)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    usrlist=Data::getinstance();

    user=new User();
    security=new Security();
    advancedsetup=new Advancedsetup();
    systemset=new Systemset();
    connect(&hometimer,SIGNAL(timeout()),this,SLOT(hide()));
    connect(advancedsetup,SIGNAL(toadviceset2menu()),this,SLOT(show()));
    connect(security,SIGNAL(tosecurity2menu()),this,SLOT(show()));
    connect(user,SIGNAL(returnmenu()),this,SLOT(show()));
    connect(systemset,SIGNAL(tosystem2menu()),this,SLOT(show()));
}
Mainmenu::~Mainmenu()
{
    delete ui;
}

void Mainmenu::on_pushButton_2_clicked()
{
    hide();
    user->show();
    usrlist->sleep(50);
    user->inituser();
}

void Mainmenu::on_menureturn_clicked()
{
    hide();
    emit tomenu2login();
}

void Mainmenu::on_security_bnz_clicked()
{
    hide();
    security->show();
}

void Mainmenu::on_advicesetbnz_clicked()
{
    hide();
    advancedsetup->show();
}

void Mainmenu::on_systemsetbnz_clicked()
{
     hide();
     systemset->show();

}
