#include "networkset.h"
#include "ui_networkset.h"
#include "numkeyboard.h"
#include <QDebug>
#include "common.h"

Networkset::Networkset(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Networkset)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    numkeyboard=new Numkeyboard();
    numkeyboard->setnetmask();
    connect(numkeyboard,SIGNAL(tonetworkip(QString)),this,SLOT(setip(QString)));
    connect(numkeyboard,SIGNAL(tonetworkmask(QString)),this,SLOT(setip(QString)));
    connect(numkeyboard,SIGNAL(tonetworkrout(QString)),this,SLOT(setip(QString)));
    connect(numkeyboard,SIGNAL(tonetworkdns(QString)),this,SLOT(setip(QString)));
}

Networkset::~Networkset()
{
    delete ui;
}

void Networkset::on_networkreturnbnz_clicked()
{
    hide();
    emit tonetwork2advice();
}

void Networkset::on_ip_input_clicked()
{
    isip=true;
    numkeyboard->show();
}

void Networkset::on_mask_input_clicked()
{
    ismask=true;
    numkeyboard->show();
}

void Networkset::on_rout_input_clicked()
{
    isrout=true;
    numkeyboard->show();
}
void Networkset::on_dns_input_clicked()
{
    isdns=true;
    numkeyboard->show();
}

void Networkset::setip(QString str)
{
    //qDebug()<<"isip"<<isip<<"ismask"<<ismask<<"isrout"<<isrout<<"isdns"<<isdns;
    if(isip)
    {
        isip=false;
        ui->ip_input->setText(str);
    }
    else if(ismask)
    {
        ismask=false;
        ui->mask_input->setText(str);
    }
    else if(isrout)
    {
        isrout=false;
        ui->rout_input->setText(str);
    }
    else if(isdns)
    {
        isdns=false;
        ui->dns_input->setText(str);
    }

}

