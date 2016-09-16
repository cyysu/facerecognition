#include "advancedsetup.h"
#include "ui_advancedsetup.h"
#include "baseset.h"
#include"systemtime.h"
#include "networkset.h"

Advancedsetup::Advancedsetup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Advancedsetup)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    baseset=new Baseset();
    systemtime=new Systemtime();
    networkset=new Networkset();

    connect(baseset,SIGNAL(tobaseset2advice()),this,SLOT(show()));
    connect(systemtime,SIGNAL(tosystem2advice()),this,SLOT(show()));
    connect(networkset,SIGNAL(tonetwork2advice()),this,SLOT(show()));
}

Advancedsetup::~Advancedsetup()
{
    delete ui;
}

void Advancedsetup::on_advicesetreturnbnz_clicked()
{
    hide();
    emit toadviceset2menu();
}

void Advancedsetup::on_basesetbnz_clicked()
{
    hide();
    baseset->show();
}

void Advancedsetup::on_systemtimebnz_clicked()
{
    hide();
    systemtime->show();
}

void Advancedsetup::on_networkbnz_clicked()
{
    hide();
    networkset->show();
}
