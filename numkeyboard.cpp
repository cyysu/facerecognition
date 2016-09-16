#include "numkeyboard.h"
#include "ui_numkeyboard.h"
#include "recognition.h"
#include "avthread.h"
#include <QRegExp>
#include <QRegExpValidator>
#include <QString>
#include "common.h"

QString str;
int count;
Numkeyboard::Numkeyboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Numkeyboard)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    if(isuserfind)
        ui->numlineEdit->setText(tr("请输入要查找的ID号"));
    ui->numlineEdit->setText(tr("按#开始识别"));
}

Numkeyboard::~Numkeyboard()
{
    delete ui;
}

void Numkeyboard::on_numButton1_clicked()
{
    int digitValue =ui->numButton1->text().toInt();
     ui->numlineEdit->setText(ui->numlineEdit->text() + QString::number(digitValue));
     if(isip||ismask||ismask||isdns)
     {
         str+=ui->numButton1->text();
         ui->numlineEdit->setText(str);
     }
}

void Numkeyboard::on_numButton2_clicked()
{
    int digitValue =ui->numButton2->text().toInt();

     ui->numlineEdit->setText(ui->numlineEdit->text() + QString::number(digitValue));
     if(isip||ismask||isrout||isdns)
    {
        str+=ui->numButton2->text();
        ui->numlineEdit->setText(str);
    }

}

void Numkeyboard::on_numButton3_clicked()
{
    int digitValue =ui->numButton3->text().toInt();
     ui->numlineEdit->setText(ui->numlineEdit->text() + QString::number(digitValue));
     if(isip||ismask||isrout||isdns)
     {
         str+=ui->numButton3->text();
         ui->numlineEdit->setText(str);
     }
}

void Numkeyboard::on_numButton4_clicked()
{
    int digitValue =ui->numButton4->text().toInt();
     ui->numlineEdit->setText(ui->numlineEdit->text() + QString::number(digitValue));
     if(isip||ismask||isrout||isdns)
     {
         str+=ui->numButton4->text();
         ui->numlineEdit->setText(str);
     }
}

void Numkeyboard::on_numButton5_clicked()
{
    int digitValue =ui->numButton5->text().toInt();
     ui->numlineEdit->setText(ui->numlineEdit->text() + QString::number(digitValue));
     if(isip||ismask||isrout||isdns)
     {
         str+=ui->numButton5->text();
         ui->numlineEdit->setText(str);
     }
}

void Numkeyboard::on_numButton6_clicked()
{
    int digitValue =ui->numButton6->text().toInt();
     ui->numlineEdit->setText(ui->numlineEdit->text() + QString::number(digitValue));
     if(isip||ismask||isrout||isdns)
     {
         str+=ui->numButton6->text();
         ui->numlineEdit->setText(str);
     }
}

void Numkeyboard::on_numButton7_clicked()
{
    int digitValue =ui->numButton7->text().toInt();
     ui->numlineEdit->setText(ui->numlineEdit->text() + QString::number(digitValue));
     if(isip||ismask||isrout||isdns)
     {
         str+=ui->numButton7->text();
         ui->numlineEdit->setText(str);
     }
}
void Numkeyboard::on_numButton8_clicked()
{
    int digitValue =ui->numButton8->text().toInt();
     ui->numlineEdit->setText(ui->numlineEdit->text() + QString::number(digitValue));
     if(isip||ismask||isrout||isdns)
     {
         str+=ui->numButton8->text();
         ui->numlineEdit->setText(str);
     }
}

void Numkeyboard::on_numButton9_clicked()
{
    int digitValue =ui->numButton9->text().toInt();
     ui->numlineEdit->setText(ui->numlineEdit->text() + QString::number(digitValue));
     if(isip||ismask||isrout||isdns)
     {
         qDebug()<<str;
         str+=ui->numButton9->text();
         ui->numlineEdit->setText(str);
     }
}

void Numkeyboard::on_numButtonx_clicked()
{
      //ui->numlineEdit->clear();
      ui->numlineEdit->backspace();
        str.chop(1);
      count=ui->numlineEdit->text().count()-3;
      qDebug()<<count<<str.count();
//      if(count+1==str.count())
//      {
//          str.chop(1);
//          qDebug()<<str;
//      }
}
void Numkeyboard::on_numButton0_clicked()
{
    int digitValue =ui->numButton0->text().toInt();
     ui->numlineEdit->setText(ui->numlineEdit->text() + QString::number(digitValue));
     if(isip||ismask||isrout||isdns)
     {
         str+=ui->numButton0->text();
         ui->numlineEdit->setText(str);
     }
}

void Numkeyboard::on_numButtonj_clicked()
{
    //adminflag=false;
//    qDebug()<<"isuserfind"<<isuserfind<<"isdoorpwd"<<isdoorpwd<<"isthreshold"<<isthreshold<<endl;
//    qDebug()<<"isyearinput"<<isyearinput<<"ishourinput"<<ishourinput<<"isdayinput"<<isdayinput<<endl;
//    qDebug()<<"ishourinput"<<ishourinput<<"ismininput"<<ismininput<<endl;
//    qDebug()<<"isip"<<isip<<endl;

    if(isuserfind)
    {
        hide();
        emit tofind(ui->numlineEdit->text());//填充要搜索的ID号
    }else if(isdoorpwd)
    {
        hide();
        emit todoorpwd();//输入门禁密码
    }else if(isthreshold)//isthreshold什么时候赋假呢
    {
        isthreshold=false;
        hide();
        emit tobase(ui->numlineEdit->text());
    }else if(isyearinput)
    {
        isyearinput=false;
        hide();
        emit tosysyearset(ui->numlineEdit->text());
    }else if(ismoninput)
    {
        ismoninput=false;
        hide();
        emit tosysmonset(ui->numlineEdit->text());
    }
    else if(isdayinput)
    {
        isdayinput=false;
        hide();
        emit tosysdayset(ui->numlineEdit->text());
    }
    else if(ishourinput)
    {
        ishourinput=false;
        hide();
        emit tosyshourset(ui->numlineEdit->text());
    }else if(ismininput)
    {
        ismininput=false;
        hide();
        emit tosysminset(ui->numlineEdit->text());
    }else if(isip)
    {
        //isip=false;
        hide();
        emit tonetworkip(ui->numlineEdit->text());
    }else if(ismask)
    {
        //ismask=false;
        hide();
        emit tonetworkmask(ui->numlineEdit->text());
    }else if(isrout)
    {
        //ismask=false;
        hide();
        emit tonetworkrout(ui->numlineEdit->text());
    }else if(isdns)
    {
        //ismask=false;
        hide();
        emit tonetworkdns(ui->numlineEdit->text());
    }
    else
    {
       emit toclosehome();
    }
}
void Numkeyboard::setnetmask()
{
       ui->numlineEdit->setCursorPosition(0);
       ui->numlineEdit->setInputMask("000.000.000.000;");
}
