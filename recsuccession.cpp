#include "recsuccession.h"
#include "ui_recsuccession.h"
#include <QPixmap>
#include <QFont>


Recsuccession::Recsuccession(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Recsuccession)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    QPixmap pix,pix2;
    pix.load("pic/ok.jpg");
    pix2=pix.scaled(80,80);
    ui->label_2->setPixmap(pix2);
}

Recsuccession::~Recsuccession()
{
    delete ui;
}
void Recsuccession::loadimage(QString imagepath)
{
    ui->imagelabel->setPixmap(imagepath);
}
void Recsuccession::setname(QString name)
{
    ui->namelabel->setText("姓名： "+name);
}
void Recsuccession::settime(QString timestr)
{
    ui->mytimelabel->setText(timestr);
}
