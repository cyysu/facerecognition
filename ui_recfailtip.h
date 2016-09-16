/********************************************************************************
** Form generated from reading UI file 'recfailtip.ui'
**
** Created: Wed Apr 10 10:56:10 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECFAILTIP_H
#define UI_RECFAILTIP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Recfailtip
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *Recfailtip)
    {
        if (Recfailtip->objectName().isEmpty())
            Recfailtip->setObjectName(QString::fromUtf8("Recfailtip"));
        Recfailtip->resize(320, 240);
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
        Recfailtip->setPalette(palette);
        label = new QLabel(Recfailtip);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 20, 141, 51));
        label_2 = new QLabel(Recfailtip);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 90, 91, 121));
        label_3 = new QLabel(Recfailtip);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 100, 91, 41));

        retranslateUi(Recfailtip);

        QMetaObject::connectSlotsByName(Recfailtip);
    } // setupUi

    void retranslateUi(QWidget *Recfailtip)
    {
        Recfailtip->setWindowTitle(QApplication::translate("Recfailtip", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Recfailtip", "     \350\257\206\345\210\253\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Recfailtip: public Ui_Recfailtip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECFAILTIP_H
