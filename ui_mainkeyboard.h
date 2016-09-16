/********************************************************************************
** Form generated from reading UI file 'mainkeyboard.ui'
**
** Created: Wed Apr 10 10:56:10 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINKEYBOARD_H
#define UI_MAINKEYBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mainkeyboard
{
public:
    QPushButton *Button_8;
    QPushButton *Button_7;
    QPushButton *Buttonz4;
    QPushButton *Buttonz3;
    QPushButton *Button_qh;
    QPushButton *Buttonz2;
    QPushButton *Button_0;
    QPushButton *Button_6;
    QPushButton *Buttonz1;
    QPushButton *Button_5;
    QPushButton *Button_add;
    QLineEdit *lineEdit_1;
    QPushButton *Button_2;
    QPushButton *Button_xh;
    QPushButton *Button_3;
    QPushButton *Buttonz8;
    QPushButton *Buttonz6;
    QPushButton *Button_sub;
    QPushButton *Buttonz7;
    QPushButton *Button_jh;
    QPushButton *Button_4;
    QLineEdit *lineEdit;
    QPushButton *Button_1;
    QPushButton *Buttonz5;
    QPushButton *Button_9;

    void setupUi(QWidget *Mainkeyboard)
    {
        if (Mainkeyboard->objectName().isEmpty())
            Mainkeyboard->setObjectName(QString::fromUtf8("Mainkeyboard"));
        Mainkeyboard->resize(320, 240);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(91, 91, 91, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        Mainkeyboard->setPalette(palette);
        Button_8 = new QPushButton(Mainkeyboard);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        Button_8->setGeometry(QRect(66, 190, 64, 51));
        Button_7 = new QPushButton(Mainkeyboard);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        Button_7->setGeometry(QRect(2, 190, 64, 51));
        Buttonz4 = new QPushButton(Mainkeyboard);
        Buttonz4->setObjectName(QString::fromUtf8("Buttonz4"));
        Buttonz4->setGeometry(QRect(122, 30, 41, 23));
        Buttonz3 = new QPushButton(Mainkeyboard);
        Buttonz3->setObjectName(QString::fromUtf8("Buttonz3"));
        Buttonz3->setGeometry(QRect(82, 30, 41, 23));
        Button_qh = new QPushButton(Mainkeyboard);
        Button_qh->setObjectName(QString::fromUtf8("Button_qh"));
        Button_qh->setGeometry(QRect(258, 140, 64, 51));
        Buttonz2 = new QPushButton(Mainkeyboard);
        Buttonz2->setObjectName(QString::fromUtf8("Buttonz2"));
        Buttonz2->setGeometry(QRect(42, 30, 41, 23));
        Button_0 = new QPushButton(Mainkeyboard);
        Button_0->setObjectName(QString::fromUtf8("Button_0"));
        Button_0->setGeometry(QRect(194, 140, 64, 51));
        Button_6 = new QPushButton(Mainkeyboard);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        Button_6->setGeometry(QRect(130, 140, 64, 51));
        Buttonz1 = new QPushButton(Mainkeyboard);
        Buttonz1->setObjectName(QString::fromUtf8("Buttonz1"));
        Buttonz1->setGeometry(QRect(2, 30, 41, 23));
        Button_5 = new QPushButton(Mainkeyboard);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        Button_5->setGeometry(QRect(66, 140, 64, 51));
        Button_add = new QPushButton(Mainkeyboard);
        Button_add->setObjectName(QString::fromUtf8("Button_add"));
        Button_add->setGeometry(QRect(258, 90, 64, 51));
        lineEdit_1 = new QLineEdit(Mainkeyboard);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(2, 50, 331, 31));
        Button_2 = new QPushButton(Mainkeyboard);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        Button_2->setGeometry(QRect(66, 90, 64, 51));
        Button_xh = new QPushButton(Mainkeyboard);
        Button_xh->setObjectName(QString::fromUtf8("Button_xh"));
        Button_xh->setGeometry(QRect(194, 90, 64, 51));
        Button_3 = new QPushButton(Mainkeyboard);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        Button_3->setGeometry(QRect(130, 90, 64, 51));
        Buttonz8 = new QPushButton(Mainkeyboard);
        Buttonz8->setObjectName(QString::fromUtf8("Buttonz8"));
        Buttonz8->setGeometry(QRect(282, 30, 41, 23));
        Buttonz6 = new QPushButton(Mainkeyboard);
        Buttonz6->setObjectName(QString::fromUtf8("Buttonz6"));
        Buttonz6->setGeometry(QRect(202, 30, 41, 23));
        Button_sub = new QPushButton(Mainkeyboard);
        Button_sub->setObjectName(QString::fromUtf8("Button_sub"));
        Button_sub->setGeometry(QRect(258, 190, 64, 51));
        Buttonz7 = new QPushButton(Mainkeyboard);
        Buttonz7->setObjectName(QString::fromUtf8("Buttonz7"));
        Buttonz7->setGeometry(QRect(242, 30, 41, 23));
        Button_jh = new QPushButton(Mainkeyboard);
        Button_jh->setObjectName(QString::fromUtf8("Button_jh"));
        Button_jh->setGeometry(QRect(194, 190, 64, 51));
        Button_4 = new QPushButton(Mainkeyboard);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        Button_4->setGeometry(QRect(2, 140, 64, 51));
        lineEdit = new QLineEdit(Mainkeyboard);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(2, 0, 331, 31));
        Button_1 = new QPushButton(Mainkeyboard);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        Button_1->setGeometry(QRect(2, 90, 64, 51));
        Buttonz5 = new QPushButton(Mainkeyboard);
        Buttonz5->setObjectName(QString::fromUtf8("Buttonz5"));
        Buttonz5->setGeometry(QRect(162, 30, 41, 23));
        Button_9 = new QPushButton(Mainkeyboard);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        Button_9->setGeometry(QRect(130, 190, 64, 51));

        retranslateUi(Mainkeyboard);

        QMetaObject::connectSlotsByName(Mainkeyboard);
    } // setupUi

    void retranslateUi(QWidget *Mainkeyboard)
    {
        Mainkeyboard->setWindowTitle(QApplication::translate("Mainkeyboard", "Form", 0, QApplication::UnicodeUTF8));
        Button_8->setText(QApplication::translate("Mainkeyboard", "8tuv", 0, QApplication::UnicodeUTF8));
        Button_7->setText(QApplication::translate("Mainkeyboard", "7pqrs", 0, QApplication::UnicodeUTF8));
        Buttonz4->setText(QString());
        Buttonz3->setText(QString());
        Button_qh->setText(QApplication::translate("Mainkeyboard", "ABC", 0, QApplication::UnicodeUTF8));
        Buttonz2->setText(QString());
        Button_0->setText(QApplication::translate("Mainkeyboard", "0", 0, QApplication::UnicodeUTF8));
        Button_6->setText(QApplication::translate("Mainkeyboard", "6mno", 0, QApplication::UnicodeUTF8));
        Buttonz1->setText(QString());
        Button_5->setText(QApplication::translate("Mainkeyboard", "5jkl", 0, QApplication::UnicodeUTF8));
        Button_add->setText(QApplication::translate("Mainkeyboard", ">", 0, QApplication::UnicodeUTF8));
        Button_2->setText(QApplication::translate("Mainkeyboard", "2abc", 0, QApplication::UnicodeUTF8));
        Button_xh->setText(QApplication::translate("Mainkeyboard", "*", 0, QApplication::UnicodeUTF8));
        Button_3->setText(QApplication::translate("Mainkeyboard", "3def", 0, QApplication::UnicodeUTF8));
        Buttonz8->setText(QString());
        Buttonz6->setText(QString());
        Button_sub->setText(QApplication::translate("Mainkeyboard", "<", 0, QApplication::UnicodeUTF8));
        Buttonz7->setText(QString());
        Button_jh->setText(QApplication::translate("Mainkeyboard", "#", 0, QApplication::UnicodeUTF8));
        Button_4->setText(QApplication::translate("Mainkeyboard", "4ghi", 0, QApplication::UnicodeUTF8));
        Button_1->setText(QApplication::translate("Mainkeyboard", "1", 0, QApplication::UnicodeUTF8));
        Buttonz5->setText(QString());
        Button_9->setText(QApplication::translate("Mainkeyboard", "9wxyz", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Mainkeyboard: public Ui_Mainkeyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINKEYBOARD_H
