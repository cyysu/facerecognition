/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created: Wed Apr 10 10:56:10 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

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

class Ui_Adduser
{
public:
    QPushButton *requireface;
    QPushButton *returnbutton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;

    void setupUi(QWidget *Adduser)
    {
        if (Adduser->objectName().isEmpty())
            Adduser->setObjectName(QString::fromUtf8("Adduser"));
        Adduser->resize(320, 240);
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
        Adduser->setPalette(palette);
        requireface = new QPushButton(Adduser);
        requireface->setObjectName(QString::fromUtf8("requireface"));
        requireface->setGeometry(QRect(40, 192, 81, 31));
        QPalette palette1;
        QBrush brush3(QColor(144, 146, 240, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        requireface->setPalette(palette1);
        returnbutton = new QPushButton(Adduser);
        returnbutton->setObjectName(QString::fromUtf8("returnbutton"));
        returnbutton->setGeometry(QRect(180, 192, 81, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        returnbutton->setPalette(palette2);
        label = new QLabel(Adduser);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 131, 141));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label->setPalette(palette3);
        label_2 = new QLabel(Adduser);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 30, 31, 16));
        label_3 = new QLabel(Adduser);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 60, 31, 16));
        label_4 = new QLabel(Adduser);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(160, 90, 31, 16));
        label_5 = new QLabel(Adduser);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 120, 31, 16));
        label_6 = new QLabel(Adduser);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(160, 150, 31, 16));
        lineEdit = new QLineEdit(Adduser);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(200, 30, 113, 20));
        lineEdit_2 = new QLineEdit(Adduser);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 60, 113, 20));
        lineEdit_3 = new QLineEdit(Adduser);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(200, 120, 113, 20));
        lineEdit_4 = new QLineEdit(Adduser);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(200, 90, 113, 20));
        lineEdit_5 = new QLineEdit(Adduser);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(200, 150, 113, 20));
        QWidget::setTabOrder(returnbutton, lineEdit);
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, requireface);
        QWidget::setTabOrder(requireface, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, lineEdit_5);

        retranslateUi(Adduser);

        QMetaObject::connectSlotsByName(Adduser);
    } // setupUi

    void retranslateUi(QWidget *Adduser)
    {
        Adduser->setWindowTitle(QApplication::translate("Adduser", "Form", 0, QApplication::UnicodeUTF8));
        requireface->setText(QApplication::translate("Adduser", "\344\272\272\350\204\270\351\207\207\351\233\206", 0, QApplication::UnicodeUTF8));
        returnbutton->setText(QApplication::translate("Adduser", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("Adduser", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Adduser", "\351\203\250\351\227\250", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Adduser", "ID", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Adduser", "\351\227\250\347\246\201", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Adduser", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Adduser: public Ui_Adduser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
