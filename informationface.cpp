#include "informationface.h"
#include "ui_informationface.h"

Informationface::Informationface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Informationface)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

Informationface::~Informationface()
{
    delete ui;
}
