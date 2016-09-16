#include "inputpwd.h"
#include "ui_inputpwd.h"
#include "numkeylogin.h"
#include "common.h"

Inputpwd::Inputpwd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inputpwd)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    numkeylogin=new Numkeylogin(this);
    numkeylogin->move((320 - 210)/2, (240 - 230)/2);
    connect(&hometimer,SIGNAL(timeout()),this,SLOT(hide()));
    connect(numkeylogin,SIGNAL(tologin2home()),this,SLOT(hide()));
    connect(numkeylogin,SIGNAL(tologin2home()),this,SIGNAL(toinputpwdhome()));
    connect(numkeylogin,SIGNAL(tologin2menu()),this,SLOT(hide()));//跳转的
    connect(numkeylogin,SIGNAL(tologin2menu()),this,SIGNAL(toinputpwdmenu()));
}

Inputpwd::~Inputpwd()
{
    delete ui;
}
