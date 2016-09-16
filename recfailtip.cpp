#include "recfailtip.h"
#include "ui_recfailtip.h"
#include "recognition.h"
#include "login.h"
#include <QPixmap>
#include <QFont>


Recfailtip::Recfailtip(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Recfailtip)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    QFont ft;
    ft.setPixelSize(14);

    ui->label_2->setFont(ft);

    ui->label_2->setText("    不好意思，识别失败\n    请重新识别或与管理员联系");
    QPixmap pix,pix2;

    pix.load("pic/sbsb.jpg");
    pix2=pix.scaled(101,131);
    ui->label_3->setPixmap(pix2);
}
Recfailtip::~Recfailtip()
{
    delete ui;
}
