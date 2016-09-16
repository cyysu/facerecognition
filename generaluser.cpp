#include "generaluser.h"
#include "ui_generaluser.h"
#include "user.h"
#include "data.h"

extern bool generaladmin;

Generaluser::Generaluser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Generaluser)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    user=new User();
    connect(user,SIGNAL(returngeneral()),this,SLOT(show()));
}

Generaluser::~Generaluser()
{
    delete ui;
}
//
void Generaluser::on_generalbnz_clicked()
{
    hide();
    user->show();
    user->inituser();
}

void Generaluser::on_returnhomebnz_clicked()
{
    hide();
    generaladmin=false;
    emit tologin2home();
}
