/********************************************************************************
** Form generated from reading UI file 'advancedsetup.ui'
**
** Created: Wed Apr 10 10:56:11 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCEDSETUP_H
#define UI_ADVANCEDSETUP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Advancedsetup
{
public:
    QPushButton *basesetbnz;
    QPushButton *systemtimebnz;
    QPushButton *networkbnz;
    QPushButton *advicesetreturnbnz;

    void setupUi(QWidget *Advancedsetup)
    {
        if (Advancedsetup->objectName().isEmpty())
            Advancedsetup->setObjectName(QString::fromUtf8("Advancedsetup"));
        Advancedsetup->resize(320, 240);
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
        Advancedsetup->setPalette(palette);
        basesetbnz = new QPushButton(Advancedsetup);
        basesetbnz->setObjectName(QString::fromUtf8("basesetbnz"));
        basesetbnz->setGeometry(QRect(20, 50, 131, 41));
        QPalette palette1;
        QBrush brush2(QColor(154, 156, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        basesetbnz->setPalette(palette1);
        systemtimebnz = new QPushButton(Advancedsetup);
        systemtimebnz->setObjectName(QString::fromUtf8("systemtimebnz"));
        systemtimebnz->setGeometry(QRect(170, 50, 131, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        systemtimebnz->setPalette(palette2);
        networkbnz = new QPushButton(Advancedsetup);
        networkbnz->setObjectName(QString::fromUtf8("networkbnz"));
        networkbnz->setGeometry(QRect(20, 130, 131, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        networkbnz->setPalette(palette3);
        advicesetreturnbnz = new QPushButton(Advancedsetup);
        advicesetreturnbnz->setObjectName(QString::fromUtf8("advicesetreturnbnz"));
        advicesetreturnbnz->setGeometry(QRect(210, 190, 81, 41));
        QPalette palette4;
        QBrush brush4(QColor(111, 111, 111, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        advicesetreturnbnz->setPalette(palette4);

        retranslateUi(Advancedsetup);

        QMetaObject::connectSlotsByName(Advancedsetup);
    } // setupUi

    void retranslateUi(QWidget *Advancedsetup)
    {
        Advancedsetup->setWindowTitle(QApplication::translate("Advancedsetup", "Form", 0, QApplication::UnicodeUTF8));
        basesetbnz->setText(QApplication::translate("Advancedsetup", "\345\237\272\346\234\254\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        systemtimebnz->setText(QApplication::translate("Advancedsetup", "\347\263\273\347\273\237\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        networkbnz->setText(QApplication::translate("Advancedsetup", "\347\275\221\347\273\234\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        advicesetreturnbnz->setText(QApplication::translate("Advancedsetup", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Advancedsetup: public Ui_Advancedsetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCEDSETUP_H
