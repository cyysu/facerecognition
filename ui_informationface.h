/********************************************************************************
** Form generated from reading UI file 'informationface.ui'
**
** Created: Wed Apr 10 10:56:10 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATIONFACE_H
#define UI_INFORMATIONFACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Informationface
{
public:

    void setupUi(QWidget *Informationface)
    {
        if (Informationface->objectName().isEmpty())
            Informationface->setObjectName(QString::fromUtf8("Informationface"));
        Informationface->resize(400, 300);
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
        Informationface->setPalette(palette);

        retranslateUi(Informationface);

        QMetaObject::connectSlotsByName(Informationface);
    } // setupUi

    void retranslateUi(QWidget *Informationface)
    {
        Informationface->setWindowTitle(QApplication::translate("Informationface", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Informationface: public Ui_Informationface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONFACE_H
