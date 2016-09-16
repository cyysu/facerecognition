#include "version.h"
#include "ui_version.h"
#include <QTimer>
#include "common.h"

Version::Version(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Version)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    connect(&globaltimer,SIGNAL(timeout()),this,SLOT(hide()));
}

Version::~Version()
{
    delete ui;
}

void Version::on_versionreturnbnz_clicked()
{
    hide();
    emit toversion2system();
}
