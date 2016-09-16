/********************************************************************************
** Form generated from reading UI file 'security.ui'
**
** Created: Wed Apr 10 10:56:11 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECURITY_H
#define UI_SECURITY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Security
{
public:
    QPushButton *secritypwd;
    QPushButton *adminbnz;
    QPushButton *securityreturnbnz;

    void setupUi(QWidget *Security)
    {
        if (Security->objectName().isEmpty())
            Security->setObjectName(QString::fromUtf8("Security"));
        Security->resize(320, 240);
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
        Security->setPalette(palette);
        secritypwd = new QPushButton(Security);
        secritypwd->setObjectName(QString::fromUtf8("secritypwd"));
        secritypwd->setGeometry(QRect(110, 70, 91, 31));
        QPalette palette1;
        QBrush brush2(QColor(141, 137, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        secritypwd->setPalette(palette1);
        adminbnz = new QPushButton(Security);
        adminbnz->setObjectName(QString::fromUtf8("adminbnz"));
        adminbnz->setGeometry(QRect(110, 130, 91, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        adminbnz->setPalette(palette2);
        securityreturnbnz = new QPushButton(Security);
        securityreturnbnz->setObjectName(QString::fromUtf8("securityreturnbnz"));
        securityreturnbnz->setGeometry(QRect(214, 192, 81, 41));
        QPalette palette3;
        QBrush brush4(QColor(111, 111, 111, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        securityreturnbnz->setPalette(palette3);

        retranslateUi(Security);

        QMetaObject::connectSlotsByName(Security);
    } // setupUi

    void retranslateUi(QWidget *Security)
    {
        Security->setWindowTitle(QApplication::translate("Security", "Form", 0, QApplication::UnicodeUTF8));
        secritypwd->setText(QApplication::translate("Security", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        adminbnz->setText(QApplication::translate("Security", "\347\256\241\347\220\206\345\221\230", 0, QApplication::UnicodeUTF8));
        securityreturnbnz->setText(QApplication::translate("Security", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Security: public Ui_Security {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECURITY_H
