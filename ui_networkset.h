/********************************************************************************
** Form generated from reading UI file 'networkset.ui'
**
** Created: Wed Apr 10 10:56:11 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKSET_H
#define UI_NETWORKSET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Networkset
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *networkreturnbnz;
    QPushButton *ip_input;
    QPushButton *mask_input;
    QPushButton *rout_input;
    QPushButton *dns_input;

    void setupUi(QWidget *Networkset)
    {
        if (Networkset->objectName().isEmpty())
            Networkset->setObjectName(QString::fromUtf8("Networkset"));
        Networkset->resize(320, 240);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(91, 91, 91, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Networkset->setPalette(palette);
        label = new QLabel(Networkset);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 10, 51, 16));
        label_2 = new QLabel(Networkset);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 50, 51, 16));
        label_3 = new QLabel(Networkset);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 90, 51, 16));
        label_4 = new QLabel(Networkset);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 130, 51, 16));
        label_5 = new QLabel(Networkset);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(55, 170, 51, 16));
        networkreturnbnz = new QPushButton(Networkset);
        networkreturnbnz->setObjectName(QString::fromUtf8("networkreturnbnz"));
        networkreturnbnz->setGeometry(QRect(230, 200, 81, 41));
        QPalette palette1;
        QBrush brush3(QColor(111, 111, 111, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        networkreturnbnz->setPalette(palette1);
        ip_input = new QPushButton(Networkset);
        ip_input->setObjectName(QString::fromUtf8("ip_input"));
        ip_input->setGeometry(QRect(120, 50, 151, 21));
        mask_input = new QPushButton(Networkset);
        mask_input->setObjectName(QString::fromUtf8("mask_input"));
        mask_input->setGeometry(QRect(120, 90, 151, 21));
        rout_input = new QPushButton(Networkset);
        rout_input->setObjectName(QString::fromUtf8("rout_input"));
        rout_input->setGeometry(QRect(120, 130, 151, 21));
        dns_input = new QPushButton(Networkset);
        dns_input->setObjectName(QString::fromUtf8("dns_input"));
        dns_input->setGeometry(QRect(120, 170, 151, 21));

        retranslateUi(Networkset);

        QMetaObject::connectSlotsByName(Networkset);
    } // setupUi

    void retranslateUi(QWidget *Networkset)
    {
        Networkset->setWindowTitle(QApplication::translate("Networkset", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Networkset", "\347\275\221\347\273\234\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Networkset", "IP\345\234\260\345\235\200:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Networkset", "\345\255\220\347\275\221\346\216\251\347\240\201:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Networkset", "\347\275\221\345\205\263\345\234\260\345\235\200:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Networkset", "DNS\345\234\260\345\235\200:", 0, QApplication::UnicodeUTF8));
        networkreturnbnz->setText(QApplication::translate("Networkset", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        ip_input->setText(QString());
        mask_input->setText(QString());
        rout_input->setText(QString());
        dns_input->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Networkset: public Ui_Networkset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKSET_H
