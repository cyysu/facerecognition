#include "capacity.h"
#include "ui_capacity.h"
#include <QSqlQueryModel>
#include <QDebug>

Capacity::Capacity(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Capacity)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}
Capacity::~Capacity()
{
    delete ui;
}
void Capacity::on_volumereturnbnz_clicked()
{
    hide();
    emit tocapac2system();
}
void Capacity::volumecheck()
{
    //QSqlQuery query;
    QSqlQueryModel model;
    model.setQuery("select*from hjcommon");
    int userrow=model.rowCount();
    //qDebug()<<"现有普通用户个数:"<<userrow;
    model.setQuery("select*from hjadmin");
    int adminrow=model.rowCount();
    //qDebug()<<"现有管理员个数:"<<adminrow;
    ui->label->setText("超级管理员个数:     1   人");
    ui->label_2->setText("普通管理员个数:    "+QString::number(adminrow-1,10)+"人");
    ui->label_3->setText("普通用户个数:    "+QString::number(userrow,10)+"人");
}
