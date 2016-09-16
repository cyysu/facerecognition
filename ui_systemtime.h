/********************************************************************************
** Form generated from reading UI file 'systemtime.ui'
**
** Created: Wed Apr 10 10:56:11 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMTIME_H
#define UI_SYSTEMTIME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Systemtime
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *systemreturnbnz;
    QComboBox *timgzone_combox;
    QPushButton *year_intput;
    QPushButton *month_intput;
    QPushButton *day_intput;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *hour_intput;
    QPushButton *min_intput;
    QLabel *label_6;

    void setupUi(QWidget *Systemtime)
    {
        if (Systemtime->objectName().isEmpty())
            Systemtime->setObjectName(QString::fromUtf8("Systemtime"));
        Systemtime->resize(320, 240);
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
        Systemtime->setPalette(palette);
        label = new QLabel(Systemtime);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 50, 61, 21));
        label_2 = new QLabel(Systemtime);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 90, 61, 21));
        label_3 = new QLabel(Systemtime);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 140, 61, 21));
        systemreturnbnz = new QPushButton(Systemtime);
        systemreturnbnz->setObjectName(QString::fromUtf8("systemreturnbnz"));
        systemreturnbnz->setGeometry(QRect(230, 190, 81, 41));
        QPalette palette1;
        QBrush brush3(QColor(111, 111, 111, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        systemreturnbnz->setPalette(palette1);
        timgzone_combox = new QComboBox(Systemtime);
        timgzone_combox->setObjectName(QString::fromUtf8("timgzone_combox"));
        timgzone_combox->setGeometry(QRect(130, 50, 151, 21));
        QPalette palette2;
        QBrush brush4(QColor(144, 144, 240, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush4);
        QBrush brush5(QColor(255, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        timgzone_combox->setPalette(palette2);
        year_intput = new QPushButton(Systemtime);
        year_intput->setObjectName(QString::fromUtf8("year_intput"));
        year_intput->setGeometry(QRect(130, 90, 51, 21));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        year_intput->setPalette(palette3);
        month_intput = new QPushButton(Systemtime);
        month_intput->setObjectName(QString::fromUtf8("month_intput"));
        month_intput->setGeometry(QRect(190, 90, 41, 21));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        month_intput->setPalette(palette4);
        day_intput = new QPushButton(Systemtime);
        day_intput->setObjectName(QString::fromUtf8("day_intput"));
        day_intput->setGeometry(QRect(240, 90, 41, 21));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        day_intput->setPalette(palette5);
        label_4 = new QLabel(Systemtime);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(180, 90, 16, 21));
        label_5 = new QLabel(Systemtime);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(230, 90, 16, 21));
        hour_intput = new QPushButton(Systemtime);
        hour_intput->setObjectName(QString::fromUtf8("hour_intput"));
        hour_intput->setGeometry(QRect(160, 140, 41, 21));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        hour_intput->setPalette(palette6);
        min_intput = new QPushButton(Systemtime);
        min_intput->setObjectName(QString::fromUtf8("min_intput"));
        min_intput->setGeometry(QRect(220, 140, 41, 21));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        min_intput->setPalette(palette7);
        label_6 = new QLabel(Systemtime);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(210, 140, 16, 16));

        retranslateUi(Systemtime);

        QMetaObject::connectSlotsByName(Systemtime);
    } // setupUi

    void retranslateUi(QWidget *Systemtime)
    {
        Systemtime->setWindowTitle(QApplication::translate("Systemtime", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Systemtime", "\346\234\254\345\234\260\346\227\266\345\214\272\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Systemtime", "\345\275\223\346\234\237\346\227\245\346\234\237\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Systemtime", "\345\275\223\345\211\215\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        systemreturnbnz->setText(QApplication::translate("Systemtime", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        year_intput->setText(QApplication::translate("Systemtime", "2013", 0, QApplication::UnicodeUTF8));
        month_intput->setText(QApplication::translate("Systemtime", "01", 0, QApplication::UnicodeUTF8));
        day_intput->setText(QApplication::translate("Systemtime", "32", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Systemtime", "--", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Systemtime", "--", 0, QApplication::UnicodeUTF8));
        hour_intput->setText(QApplication::translate("Systemtime", "15", 0, QApplication::UnicodeUTF8));
        min_intput->setText(QApplication::translate("Systemtime", "29", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Systemtime", "\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Systemtime: public Ui_Systemtime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMTIME_H
