/********************************************************************************
** Form generated from reading UI file 'systemset.ui'
**
** Created: Wed Apr 10 10:56:11 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMSET_H
#define UI_SYSTEMSET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Systemset
{
public:
    QPushButton *pushButton;
    QPushButton *volumebnz;
    QPushButton *versionbnz;
    QPushButton *systemreturnbnz;
    QPushButton *varbnz;

    void setupUi(QWidget *Systemset)
    {
        if (Systemset->objectName().isEmpty())
            Systemset->setObjectName(QString::fromUtf8("Systemset"));
        Systemset->resize(320, 240);
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
        Systemset->setPalette(palette);
        pushButton = new QPushButton(Systemset);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 50, 131, 41));
        QPalette palette1;
        QBrush brush3(QColor(135, 135, 240, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton->setPalette(palette1);
        volumebnz = new QPushButton(Systemset);
        volumebnz->setObjectName(QString::fromUtf8("volumebnz"));
        volumebnz->setGeometry(QRect(170, 50, 131, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        volumebnz->setPalette(palette2);
        versionbnz = new QPushButton(Systemset);
        versionbnz->setObjectName(QString::fromUtf8("versionbnz"));
        versionbnz->setGeometry(QRect(10, 120, 131, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        versionbnz->setPalette(palette3);
        systemreturnbnz = new QPushButton(Systemset);
        systemreturnbnz->setObjectName(QString::fromUtf8("systemreturnbnz"));
        systemreturnbnz->setGeometry(QRect(210, 180, 81, 41));
        QPalette palette4;
        QBrush brush4(QColor(111, 111, 111, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        systemreturnbnz->setPalette(palette4);
        varbnz = new QPushButton(Systemset);
        varbnz->setObjectName(QString::fromUtf8("varbnz"));
        varbnz->setGeometry(QRect(170, 120, 131, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        varbnz->setPalette(palette5);

        retranslateUi(Systemset);

        QMetaObject::connectSlotsByName(Systemset);
    } // setupUi

    void retranslateUi(QWidget *Systemset)
    {
        Systemset->setWindowTitle(QApplication::translate("Systemset", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Systemset", "\345\261\217\345\271\225\346\240\241\345\207\206", 0, QApplication::UnicodeUTF8));
        volumebnz->setText(QApplication::translate("Systemset", "\345\256\271\351\207\217\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        versionbnz->setText(QApplication::translate("Systemset", "\347\211\210\346\234\254\346\237\245\347\234\213", 0, QApplication::UnicodeUTF8));
        systemreturnbnz->setText(QApplication::translate("Systemset", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        varbnz->setText(QApplication::translate("Systemset", "\346\227\245\345\277\227\346\237\245\347\234\213", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Systemset: public Ui_Systemset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMSET_H
