/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created: Wed Apr 10 10:56:10 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mainmenu
{
public:
    QPushButton *systemsetbnz;
    QPushButton *pushButton_2;
    QPushButton *security_bnz;
    QPushButton *advicesetbnz;
    QPushButton *menureturn;

    void setupUi(QWidget *Mainmenu)
    {
        if (Mainmenu->objectName().isEmpty())
            Mainmenu->setObjectName(QString::fromUtf8("Mainmenu"));
        Mainmenu->resize(320, 240);
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
        Mainmenu->setPalette(palette);
        systemsetbnz = new QPushButton(Mainmenu);
        systemsetbnz->setObjectName(QString::fromUtf8("systemsetbnz"));
        systemsetbnz->setGeometry(QRect(160, 140, 151, 41));
        QPalette palette1;
        QBrush brush2(QColor(129, 135, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        systemsetbnz->setPalette(palette1);
        pushButton_2 = new QPushButton(Mainmenu);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 70, 151, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        pushButton_2->setPalette(palette2);
        security_bnz = new QPushButton(Mainmenu);
        security_bnz->setObjectName(QString::fromUtf8("security_bnz"));
        security_bnz->setGeometry(QRect(10, 140, 131, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        security_bnz->setPalette(palette3);
        advicesetbnz = new QPushButton(Mainmenu);
        advicesetbnz->setObjectName(QString::fromUtf8("advicesetbnz"));
        advicesetbnz->setGeometry(QRect(10, 70, 131, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        advicesetbnz->setPalette(palette4);
        menureturn = new QPushButton(Mainmenu);
        menureturn->setObjectName(QString::fromUtf8("menureturn"));
        menureturn->setGeometry(QRect(230, 10, 81, 41));
        QPalette palette5;
        QBrush brush4(QColor(111, 111, 111, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        menureturn->setPalette(palette5);

        retranslateUi(Mainmenu);

        QMetaObject::connectSlotsByName(Mainmenu);
    } // setupUi

    void retranslateUi(QWidget *Mainmenu)
    {
        Mainmenu->setWindowTitle(QApplication::translate("Mainmenu", "Form", 0, QApplication::UnicodeUTF8));
        systemsetbnz->setText(QApplication::translate("Mainmenu", "\351\253\230\347\272\247\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Mainmenu", "\347\224\250\346\210\267\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        security_bnz->setText(QApplication::translate("Mainmenu", "\345\256\211\345\205\250\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        advicesetbnz->setText(QApplication::translate("Mainmenu", "\347\263\273\347\273\237\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        menureturn->setText(QApplication::translate("Mainmenu", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Mainmenu: public Ui_Mainmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
