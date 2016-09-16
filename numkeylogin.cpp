#include "numkeylogin.h"
#include "ui_numkeylogin.h"
#include <QMessageBox>
#include <QSqlTableModel>
#include <QSound>
#include <QTimer>
#include "data.h"
#include "common.h"

Numkeylogin::Numkeylogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Numkeylogin)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    data=Data::getinstance();
    ui->numlineEdit->setText(tr("请输入密码进行登陆"));
    noid=new QSound("wav/noidx.wav");
    pwderror=new QSound("wav/pwderror.wav");
}
Numkeylogin::~Numkeylogin()
{
    delete ui;
}
void Numkeylogin::on_numButton1_clicked()
{
    int digitValue =ui->numButton1->text().toInt();
     ui->numlineEdit->setText(ui->numlineEdit->text() + QString::number(digitValue));
}

void Numkeylogin::on_numButton2_clicked()
{
    int digitValue =ui->numButton2->text().toInt();
    ui->numlineEdit->setText(ui->numlineEdit->text() + QString::number(digitValue));
}

void Numkeylogin::on_numButton3_clicked()
{
    int digitValue =ui->numButton3->text().toInt();
    ui->numlineEdit->setText(ui->numlineEdit->text() + QString::number(digitValue));
}

void Numkeylogin::on_numButtonx_clicked()
{
    QString text = ui->numlineEdit->text();
    text.chop(1);
    ui->numlineEdit->setText(text);
}

void Numkeylogin::on_numButton4_clicked()
{
    int digitValue =ui->numButton4->text().toInt();
    ui->numlineEdit->setText(ui->numlineEdit->text() + QString::number(digitValue));
}

void Numkeylogin::on_numButton5_clicked()
{
    int digitValue =ui->numButton5->text().toInt();
    ui->numlineEdit->setText(ui->numlineEdit->text() + QString::number(digitValue));
}

void Numkeylogin::on_numButton6_clicked()
{
    int digitValue =ui->numButton6->text().toInt();
    ui->numlineEdit->setText(ui->numlineEdit->text() + QString::number(digitValue));
}

void Numkeylogin::on_numButton0_clicked()
{
    int digitValue =ui->numButton0->text().toInt();
    ui->numlineEdit->setText(ui->numlineEdit->text() + QString::number(digitValue));
}

void Numkeylogin::on_numButton7_clicked()
{
    int digitValue =ui->numButton7->text().toInt();
    ui->numlineEdit->setText(ui->numlineEdit->text() + QString::number(digitValue));
}

void Numkeylogin::on_numButton8_clicked()
{
    int digitValue =ui->numButton8->text().toInt();
    ui->numlineEdit->setText(ui->numlineEdit->text() + QString::number(digitValue));
}

void Numkeylogin::on_numButton9_clicked()
{
    int digitValue =ui->numButton9->text().toInt();
    ui->numlineEdit->setText(ui->numlineEdit->text() + QString::number(digitValue));
}
void Numkeylogin::on_numButtonj_clicked()
{
    if(ispwdinput)
    {
        if(ui->numlineEdit->text()=="1234")
        {
            issupper=true;
            emit tologin2menu();
        }
        else
        {
            pwderror->play();
            data->sleep(1500);
            emit tologin2home();
        }
    }
    else
    {//
        isdetecting=false;
        if(ui->numlineEdit->text()=="1")
        {
            commadminid=ui->numlineEdit->text().toInt();
            issupper=true;
            generaladmin=false;
            emit tologin2recog();
        }else{
             commadminid=ui->numlineEdit->text().toInt();
             issupper=false;
             QSqlTableModel adminmodel;
             adminmodel.setTable("hjadmin");
             adminmodel.setFilter(tr("id = '%1'").arg(ui->numlineEdit->text()));
             adminmodel.select();
             if(adminmodel.rowCount()==1) {
                 generaladmin=true;
                 emit tologin2recog();
             }else{
                 noid->play();
                 qDebug()<<"没有这个id号"<<ui->numlineEdit->text();
             }
        }
    }
}
