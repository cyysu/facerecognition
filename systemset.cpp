#include "systemset.h"
#include "ui_systemset.h"
#include "version.h"
#include "capacity.h"
#include "varmessage.h"
#include <QFile>
#include <QTime>
#include <QCoreApplication>

Systemset::Systemset(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Systemset)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    version=new Version();
    capacity=new Capacity();
    varmessage=new Varmessage();

    connect(varmessage,SIGNAL(tovar2system()),this,SLOT(show()));
    connect(version,SIGNAL(toversion2system()),this,SLOT(show()));
    connect(capacity,SIGNAL(tocapac2system()),this,SLOT(show()));
}

Systemset::~Systemset()
{
    delete ui;
}

void Systemset::on_systemreturnbnz_clicked()
{
    hide();
    emit tosystem2menu();
}

void Systemset::on_versionbnz_clicked()
{
    hide();
    version->show();
}

void Systemset::on_volumebnz_clicked()
{
    hide();
    capacity->show();
    QTime dieTime = QTime::currentTime().addMSecs(1000);
    while( QTime::currentTime() < dieTime )
        QCoreApplication::processEvents(QEventLoop::AllEvents, 1000);
    capacity->volumecheck();
}

void Systemset::on_varbnz_clicked()
{
    hide();
    varmessage->writevar();
    varmessage->show();

}
