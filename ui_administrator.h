/********************************************************************************
** Form generated from reading UI file 'administrator.ui'
**
** Created: Wed Apr 10 10:56:11 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATOR_H
#define UI_ADMINISTRATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Administrator
{
public:
    QLabel *label;
    QTableView *tableView;
    QPushButton *addadministratorbnz;
    QPushButton *modifyadminbnz;
    QPushButton *deleteadminbnz;
    QPushButton *adminreturnbnz;

    void setupUi(QWidget *Administrator)
    {
        if (Administrator->objectName().isEmpty())
            Administrator->setObjectName(QString::fromUtf8("Administrator"));
        Administrator->resize(320, 240);
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
        Administrator->setPalette(palette);
        label = new QLabel(Administrator);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 81, 16));
        tableView = new QTableView(Administrator);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 30, 161, 171));
        addadministratorbnz = new QPushButton(Administrator);
        addadministratorbnz->setObjectName(QString::fromUtf8("addadministratorbnz"));
        addadministratorbnz->setGeometry(QRect(190, 30, 101, 23));
        QPalette palette1;
        QBrush brush2(QColor(149, 155, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        addadministratorbnz->setPalette(palette1);
        modifyadminbnz = new QPushButton(Administrator);
        modifyadminbnz->setObjectName(QString::fromUtf8("modifyadminbnz"));
        modifyadminbnz->setGeometry(QRect(190, 80, 101, 23));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        modifyadminbnz->setPalette(palette2);
        deleteadminbnz = new QPushButton(Administrator);
        deleteadminbnz->setObjectName(QString::fromUtf8("deleteadminbnz"));
        deleteadminbnz->setGeometry(QRect(190, 130, 101, 23));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        deleteadminbnz->setPalette(palette3);
        adminreturnbnz = new QPushButton(Administrator);
        adminreturnbnz->setObjectName(QString::fromUtf8("adminreturnbnz"));
        adminreturnbnz->setGeometry(QRect(220, 190, 81, 41));
        QPalette palette4;
        QBrush brush3(QColor(111, 111, 111, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        adminreturnbnz->setPalette(palette4);

        retranslateUi(Administrator);

        QMetaObject::connectSlotsByName(Administrator);
    } // setupUi

    void retranslateUi(QWidget *Administrator)
    {
        Administrator->setWindowTitle(QApplication::translate("Administrator", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Administrator", "\347\256\241\347\220\206\345\221\230\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
        addadministratorbnz->setText(QApplication::translate("Administrator", "\346\226\260\345\242\236\347\256\241\347\220\206\345\221\230", 0, QApplication::UnicodeUTF8));
        modifyadminbnz->setText(QApplication::translate("Administrator", "\344\277\256\346\224\271\347\256\241\347\220\206\345\221\230", 0, QApplication::UnicodeUTF8));
        deleteadminbnz->setText(QApplication::translate("Administrator", "\345\210\240\351\231\244\347\256\241\347\220\206\345\221\230", 0, QApplication::UnicodeUTF8));
        adminreturnbnz->setText(QApplication::translate("Administrator", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Administrator: public Ui_Administrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATOR_H
