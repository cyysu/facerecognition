/********************************************************************************
** Form generated from reading UI file 'inputpwd.ui'
**
** Created: Wed Apr 10 10:56:11 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTPWD_H
#define UI_INPUTPWD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inputpwd
{
public:

    void setupUi(QWidget *Inputpwd)
    {
        if (Inputpwd->objectName().isEmpty())
            Inputpwd->setObjectName(QString::fromUtf8("Inputpwd"));
        Inputpwd->resize(320, 240);
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
        Inputpwd->setPalette(palette);

        retranslateUi(Inputpwd);

        QMetaObject::connectSlotsByName(Inputpwd);
    } // setupUi

    void retranslateUi(QWidget *Inputpwd)
    {
        Inputpwd->setWindowTitle(QApplication::translate("Inputpwd", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Inputpwd: public Ui_Inputpwd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTPWD_H
