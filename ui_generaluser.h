/********************************************************************************
** Form generated from reading UI file 'generaluser.ui'
**
** Created: Wed Apr 10 10:56:11 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALUSER_H
#define UI_GENERALUSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Generaluser
{
public:
    QPushButton *generalbnz;
    QPushButton *returnhomebnz;

    void setupUi(QWidget *Generaluser)
    {
        if (Generaluser->objectName().isEmpty())
            Generaluser->setObjectName(QString::fromUtf8("Generaluser"));
        Generaluser->resize(320, 240);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(91, 91, 91, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Generaluser->setPalette(palette);
        generalbnz = new QPushButton(Generaluser);
        generalbnz->setObjectName(QString::fromUtf8("generalbnz"));
        generalbnz->setGeometry(QRect(50, 50, 91, 31));
        QPalette palette1;
        QBrush brush2(QColor(174, 179, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        generalbnz->setPalette(palette1);
        returnhomebnz = new QPushButton(Generaluser);
        returnhomebnz->setObjectName(QString::fromUtf8("returnhomebnz"));
        returnhomebnz->setGeometry(QRect(214, 172, 81, 41));
        QPalette palette2;
        QBrush brush4(QColor(111, 111, 111, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        returnhomebnz->setPalette(palette2);

        retranslateUi(Generaluser);

        QMetaObject::connectSlotsByName(Generaluser);
    } // setupUi

    void retranslateUi(QWidget *Generaluser)
    {
        Generaluser->setWindowTitle(QApplication::translate("Generaluser", "Form", 0, QApplication::UnicodeUTF8));
        generalbnz->setText(QApplication::translate("Generaluser", "\347\224\250\346\210\267\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        returnhomebnz->setText(QApplication::translate("Generaluser", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Generaluser: public Ui_Generaluser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALUSER_H
