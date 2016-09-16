#include "systemtime.h"
#include "ui_systemtime.h"
#include <QStringList>
#include <QCompleter>
#include "numkeyboard.h"
#include <stdio.h>
#include <errno.h>
#include <time.h>
#include <sys/types.h>
#include <sys/time.h>
#include "common.h"
#include <QDebug>

Systemtime::Systemtime(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Systemtime)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    strings_timezone << "EAST +08:00" << "EAST +08:00"<<"EAST +09:00"<<"EAST +10:00"<<"EAST +11:00";
    timezonecombox=new QCompleter(strings_timezone,this);
    numkeyboard=new Numkeyboard();
    ui->timgzone_combox->clear();
    ui->timgzone_combox->addItems(strings_timezone);
    ui->timgzone_combox->setEditable(true);
    ui->timgzone_combox->setCompleter(timezonecombox);

    connect(numkeyboard,SIGNAL(tosysyearset(QString)),this,SLOT(dealyear(QString)));
    connect(numkeyboard,SIGNAL(tosysmonset(QString)),this,SLOT(dealmon(QString)));
    connect(numkeyboard,SIGNAL(tosysdayset(QString)),this,SLOT(dealday(QString)));
    connect(numkeyboard,SIGNAL(tosyshourset(QString)),this,SLOT(dealhour(QString)));
    connect(numkeyboard,SIGNAL(tosysminset(QString)),this,SLOT(dealmin(QString)));
}

Systemtime::~Systemtime()
{
    delete ui;
}

void Systemtime::on_systemreturnbnz_clicked()
{
    hide();
    tosystem2advice();
    if(setRealTime()==0)
        qDebug()<<"******设置时间成功*****";
}

void Systemtime::on_year_intput_clicked()
{
    isyearinput=true;
    numkeyboard->show();
}

void Systemtime::on_month_intput_clicked()
{
    ismoninput=true;
    numkeyboard->show();
}

void Systemtime::on_day_intput_clicked()
{
    isdayinput=true;
    numkeyboard->show();
}
void Systemtime::on_hour_intput_clicked()
{
    ishourinput=true;
    numkeyboard->show();
}
void Systemtime::on_min_intput_clicked()
{
    ismininput=true;
    numkeyboard->show();
}


void Systemtime::dealyear(QString str)
{
    ui->year_intput->setText(str);
}
void Systemtime::dealmon(QString str)
{
    ui->month_intput->setText(str);
}
void Systemtime::dealday(QString str)
{
    ui->day_intput->setText(str);
}
void Systemtime::dealhour(QString str)
{
    ui->hour_intput->setText(str);
}
void Systemtime::dealmin(QString str)
{
    ui->min_intput->setText(str);
}
int Systemtime::setRealTime()
{
    struct   tm   tm;
    memset(&tm, 0, sizeof(tm));
    QString minute = ui->min_intput->text();
    QString hour = ui->hour_intput->text();
    QString date = ui->day_intput->text();
    QString month = ui->month_intput->text();
    QString years = ui->year_intput->text();

    tm.tm_sec = 0;
    tm.tm_min = minute.toInt();
    tm.tm_hour = hour.toInt();
    tm.tm_mday = date.toInt();
    tm.tm_mon = month.toInt() - 1;
    tm.tm_year = years.toInt() - 1900;
    system("hwclock -w");
    if(set_date(&tm)==-1)
        perror( "set_date ");
    return   0;
}

int Systemtime::set_date(struct tm   *p_tm)
{
    time_t   when;
    struct   timeval   tv;
    when   =   mktime(p_tm);
    if   (when   ==   -1)
    return   -1;
    tv.tv_sec   =   when;
    tv.tv_usec   =   0;
    return   settimeofday(&tv,   (struct   timezone   *)0);
}
