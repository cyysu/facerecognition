#include "pingb.h"
#include "ui_pingb.h"
#include <QTimer>
#include <QDateTime>
#include <QFont>
#include <QPalette>

Pingb::Pingb(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pingb)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    setAutoFillBackground(true);
    QPalette palette = this->palette();
    palette.setBrush(QPalette::Window,QBrush(QPixmap("pic/00.jpg").scaled( size(), Qt::IgnoreAspectRatio,Qt::SmoothTransformation))); // 使用平滑的缩放方式
    setPalette(palette);

    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpDate()));
    timer->start(1000);

}
Pingb::~Pingb()
{
    delete ui;
}
void Pingb::timerUpDate()
{
        QDateTime time = QDateTime::currentDateTime();
        QString strTime = time.toString("hh:mm:ss  ");
        ui->labelTime->setText(strTime);

        QString strDate = time.toString("yyyy-MM-dd ");
        ui->labelDate->setText(strDate);

        QString strWeek = time.toString("dddd");
        if ("Monday" == strWeek)
            ui->labelWeek->setText(tr("星期一"));
        if ("Tuesday" == strWeek)
            ui->labelWeek->setText(tr("星期二"));
        if ("Wednesday" == strWeek)
            ui->labelWeek->setText(tr("星期三"));
        if ("Thursday" == strWeek)
            ui->labelWeek->setText(tr("星期四"));
        if ("Friday" == strWeek)
            ui->labelWeek->setText(tr("星期五"));
        if ("Saturday" == strWeek)
            ui->labelWeek->setText(tr("星期六"));
        if ("Sunday" == strWeek)
            ui->labelWeek->setText(tr("星期日"));
}
