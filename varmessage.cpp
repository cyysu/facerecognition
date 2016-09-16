#include "varmessage.h"
#include "ui_varmessage.h"
#include <QFile>
#include <QTextStream>
#include <QtGui>
#include <QTimer>
#include "common.h"

Varmessage::Varmessage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Varmessage)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

Varmessage::~Varmessage()
{
    delete ui;
}

void Varmessage::on_pushButton_clicked()
{
    hide();
    emit tovar2system();
}
void Varmessage::writevar()
{
    QFile file("/message.txt");
    if(file.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&file);
        QString line;
        QString::fromUtf8(line.toLocal8Bit());
        int n = 0;
        while ( !stream.atEnd() ) {
            line = stream.readLine();
            n++;
            if(n>=50)
                break;
            ui->textBrowser->setFontPointSize(10);
            ui->textBrowser->append(QString::fromUtf8(line.toLocal8Bit()));
        }
        file.close();
   }
}

