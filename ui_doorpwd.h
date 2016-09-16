/********************************************************************************
** Form generated from reading UI file 'doorpwd.ui'
**
** Created: Wed Apr 10 10:56:11 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOORPWD_H
#define UI_DOORPWD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Doorpwd
{
public:
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *dooretunbnz;

    void setupUi(QWidget *Doorpwd)
    {
        if (Doorpwd->objectName().isEmpty())
            Doorpwd->setObjectName(QString::fromUtf8("Doorpwd"));
        Doorpwd->resize(320, 240);
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
        Doorpwd->setPalette(palette);
        label_2 = new QLabel(Doorpwd);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 80, 91, 31));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        lineEdit = new QLineEdit(Doorpwd);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 120, 161, 31));
        dooretunbnz = new QPushButton(Doorpwd);
        dooretunbnz->setObjectName(QString::fromUtf8("dooretunbnz"));
        dooretunbnz->setGeometry(QRect(220, 190, 81, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush3(QColor(111, 111, 111, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        dooretunbnz->setPalette(palette1);

        retranslateUi(Doorpwd);

        QMetaObject::connectSlotsByName(Doorpwd);
    } // setupUi

    void retranslateUi(QWidget *Doorpwd)
    {
        Doorpwd->setWindowTitle(QApplication::translate("Doorpwd", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Doorpwd", "\350\266\205\347\272\247\345\274\200\351\227\250\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        dooretunbnz->setText(QApplication::translate("Doorpwd", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Doorpwd: public Ui_Doorpwd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOORPWD_H
