/********************************************************************************
** Form generated from reading UI file 'capacity.ui'
**
** Created: Wed Apr 10 10:56:11 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPACITY_H
#define UI_CAPACITY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Capacity
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *volumereturnbnz;

    void setupUi(QWidget *Capacity)
    {
        if (Capacity->objectName().isEmpty())
            Capacity->setObjectName(QString::fromUtf8("Capacity"));
        Capacity->resize(320, 240);
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
        Capacity->setPalette(palette);
        label = new QLabel(Capacity);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 60, 211, 21));
        label_2 = new QLabel(Capacity);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 110, 211, 21));
        label_3 = new QLabel(Capacity);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 160, 211, 21));
        volumereturnbnz = new QPushButton(Capacity);
        volumereturnbnz->setObjectName(QString::fromUtf8("volumereturnbnz"));
        volumereturnbnz->setGeometry(QRect(214, 182, 81, 41));
        QPalette palette1;
        QBrush brush2(QColor(111, 111, 111, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        volumereturnbnz->setPalette(palette1);

        retranslateUi(Capacity);

        QMetaObject::connectSlotsByName(Capacity);
    } // setupUi

    void retranslateUi(QWidget *Capacity)
    {
        Capacity->setWindowTitle(QApplication::translate("Capacity", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        volumereturnbnz->setText(QApplication::translate("Capacity", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Capacity: public Ui_Capacity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPACITY_H
