#include "baseset.h"
#include "ui_baseset.h"
#include <QStringList>
#include <QCompleter>
#include "numkeyboard.h"
#include <QString>
#include <QDebug>
#include <QFile>
#include "common.h"

Baseset::Baseset(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Baseset)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    ui->threshold_input->setText(QString::number(threshold,10));
    strings_lang << "简体中文" << "English";
    strings_recong << "一对一" << "一对多";
    completer_lang = new QCompleter(strings_lang, this);
    completer_recong = new QCompleter(strings_recong, this);
    numkeyboard=new Numkeyboard();

    ui->langcombox->clear();
    ui->langcombox->addItems(strings_lang);
    ui->langcombox->setEditable(true);
    ui->langcombox->setCompleter(completer_lang);

    ui->recogcombox->clear();
    ui->recogcombox->addItems(strings_recong);
    ui->recogcombox->setEditable(true);
    ui->recogcombox->setCompleter(completer_recong);

    connect(numkeyboard,SIGNAL(tobase(QString)),this,SLOT(setthreshold(QString )));
}
//
Baseset::~Baseset()
{
    delete ui;
}
//
void Baseset::on_basesetreturnbnz_clicked()
{
    hide();
    emit tobaseset2advice();
}
//
void Baseset::on_threshold_input_clicked()
{
    isthreshold=true;
    numkeyboard->show();
}
//
void Baseset::setthreshold(QString str)
{
    ui->threshold_input->setText(str);
    threshold=str.toInt();
    float realthreshold=(float)threshold/100;
    QFile file("config/threathold.txt");
    if(!file.open(QFile::WriteOnly)){
        perror("open configuer file error\n");
        exit(0);
    }
    QTextStream fs(&file);
    fs<<threshold<<"\n";
    file.close();
}
