#include "doorpwd.h"
#include "ui_doorpwd.h"
#include "numkeyboard.h"

extern bool isdoorpwd;

Doorpwd::Doorpwd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Doorpwd)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    numkeyboard=new Numkeyboard();
    connect(numkeyboard,SIGNAL(todoorpwd()),this,SLOT(show()));
}
Doorpwd::~Doorpwd()
{
    delete ui;
}

void Doorpwd::on_lineEdit_selectionChanged()
{
    numkeyboard->show();
}

void Doorpwd::on_dooretunbnz_clicked()
{
    isdoorpwd=false;
    hide();
    emit todoorpwd2secr();
}
