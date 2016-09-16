/********************************************************************************
** Form generated from reading UI file 'addadminisrator.ui'
**
** Created: Wed Apr 10 10:56:11 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDADMINISRATOR_H
#define UI_ADDADMINISRATOR_H

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

class Ui_Addadminisrator
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *adminnameline;
    QLineEdit *admincardline;
    QLineEdit *lineEdit_3;
    QPushButton *adminrequirefacebnz;
    QPushButton *addadminbnz;

    void setupUi(QWidget *Addadminisrator)
    {
        if (Addadminisrator->objectName().isEmpty())
            Addadminisrator->setObjectName(QString::fromUtf8("Addadminisrator"));
        Addadminisrator->resize(320, 240);
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
        Addadminisrator->setPalette(palette);
        label = new QLabel(Addadminisrator);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 131, 141));
        label_2 = new QLabel(Addadminisrator);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 40, 31, 21));
        label_3 = new QLabel(Addadminisrator);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 80, 21, 16));
        label_4 = new QLabel(Addadminisrator);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(160, 130, 31, 16));
        adminnameline = new QLineEdit(Addadminisrator);
        adminnameline->setObjectName(QString::fromUtf8("adminnameline"));
        adminnameline->setGeometry(QRect(190, 40, 113, 20));
        admincardline = new QLineEdit(Addadminisrator);
        admincardline->setObjectName(QString::fromUtf8("admincardline"));
        admincardline->setGeometry(QRect(190, 80, 113, 20));
        lineEdit_3 = new QLineEdit(Addadminisrator);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(190, 130, 113, 20));
        adminrequirefacebnz = new QPushButton(Addadminisrator);
        adminrequirefacebnz->setObjectName(QString::fromUtf8("adminrequirefacebnz"));
        adminrequirefacebnz->setGeometry(QRect(50, 182, 81, 31));
        QPalette palette1;
        QBrush brush3(QColor(147, 147, 240, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        adminrequirefacebnz->setPalette(palette1);
        addadminbnz = new QPushButton(Addadminisrator);
        addadminbnz->setObjectName(QString::fromUtf8("addadminbnz"));
        addadminbnz->setGeometry(QRect(194, 182, 81, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        addadminbnz->setPalette(palette2);

        retranslateUi(Addadminisrator);

        QMetaObject::connectSlotsByName(Addadminisrator);
    } // setupUi

    void retranslateUi(QWidget *Addadminisrator)
    {
        Addadminisrator->setWindowTitle(QApplication::translate("Addadminisrator", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("Addadminisrator", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Addadminisrator", "ID", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Addadminisrator", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        adminrequirefacebnz->setText(QApplication::translate("Addadminisrator", "\351\207\207\351\233\206\344\272\272\350\204\270", 0, QApplication::UnicodeUTF8));
        addadminbnz->setText(QApplication::translate("Addadminisrator", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Addadminisrator: public Ui_Addadminisrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDADMINISRATOR_H
