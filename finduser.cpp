#include "finduser.h"
#include "ui_finduser.h"
#include "numkeyboard.h"

extern bool isuserfind;

Finduser::Finduser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Finduser)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    numkeyboard=new Numkeyboard();
    connect(numkeyboard,SIGNAL(tofind(const QString &)),this->ui->lineEdit,SLOT(setText(const QString &)));
}

Finduser::~Finduser()
{
    delete ui;
}

void Finduser::on_findconfisebnz_clicked()
{
    isuserfind=false;
    hide();
    emit tofinduser(ui->lineEdit->text().toInt());
}

void Finduser::on_lineEdit_selectionChanged()
{
    numkeyboard->show();
}

void Finduser::on_findreturnbnz_clicked()
{
    isuserfind=false;
    hide();
    emit toreturnusr();
}
