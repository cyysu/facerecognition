/********************************************************************************
** Form generated from reading UI file 'recsuccession.ui'
**
** Created: Wed Apr 10 10:56:10 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECSUCCESSION_H
#define UI_RECSUCCESSION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Recsuccession
{
public:
    QLabel *imagelabel;
    QLabel *namelabel;
    QLabel *label;
    QLabel *mytimelabel;
    QLabel *label_2;

    void setupUi(QWidget *Recsuccession)
    {
        if (Recsuccession->objectName().isEmpty())
            Recsuccession->setObjectName(QString::fromUtf8("Recsuccession"));
        Recsuccession->resize(320, 240);
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
        Recsuccession->setPalette(palette);
        imagelabel = new QLabel(Recsuccession);
        imagelabel->setObjectName(QString::fromUtf8("imagelabel"));
        imagelabel->setGeometry(QRect(0, 0, 131, 141));
        namelabel = new QLabel(Recsuccession);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));
        namelabel->setGeometry(QRect(140, 40, 111, 41));
        label = new QLabel(Recsuccession);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 20, 121, 21));
        mytimelabel = new QLabel(Recsuccession);
        mytimelabel->setObjectName(QString::fromUtf8("mytimelabel"));
        mytimelabel->setGeometry(QRect(140, 80, 121, 31));
        label_2 = new QLabel(Recsuccession);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 140, 81, 71));

        retranslateUi(Recsuccession);

        QMetaObject::connectSlotsByName(Recsuccession);
    } // setupUi

    void retranslateUi(QWidget *Recsuccession)
    {
        Recsuccession->setWindowTitle(QApplication::translate("Recsuccession", "Form", 0, QApplication::UnicodeUTF8));
        imagelabel->setText(QString());
        namelabel->setText(QString());
        label->setText(QApplication::translate("Recsuccession", "\350\257\206\345\210\253\346\210\220\345\212\237", 0, QApplication::UnicodeUTF8));
        mytimelabel->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Recsuccession: public Ui_Recsuccession {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECSUCCESSION_H
