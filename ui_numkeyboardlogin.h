/********************************************************************************
** Form generated from reading UI file 'numkeyboardlogin.ui'
**
** Created: Wed Jan 9 15:54:39 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMKEYBOARDLOGIN_H
#define UI_NUMKEYBOARDLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Numkeyboard
{
public:
    QLineEdit *numlineEdit;
    QPushButton *numButton1;
    QPushButton *numButton2;
    QPushButton *numButton3;
    QPushButton *numButtonx;
    QPushButton *numButton4;
    QPushButton *numButton7;
    QPushButton *numButton0;
    QPushButton *numButton6;
    QPushButton *numButton5;
    QPushButton *numButton9;
    QPushButton *numButton8;
    QPushButton *numButtonj;

    void setupUi(QWidget *Numkeyboard)
    {
        if (Numkeyboard->objectName().isEmpty())
            Numkeyboard->setObjectName(QString::fromUtf8("Numkeyboard"));
        Numkeyboard->resize(210, 230);
        numlineEdit = new QLineEdit(Numkeyboard);
        numlineEdit->setObjectName(QString::fromUtf8("numlineEdit"));
        numlineEdit->setGeometry(QRect(0, 0, 210, 35));
        numButton1 = new QPushButton(Numkeyboard);
        numButton1->setObjectName(QString::fromUtf8("numButton1"));
        numButton1->setGeometry(QRect(6, 60, 50, 50));
        numButton2 = new QPushButton(Numkeyboard);
        numButton2->setObjectName(QString::fromUtf8("numButton2"));
        numButton2->setGeometry(QRect(56, 60, 50, 50));
        numButton3 = new QPushButton(Numkeyboard);
        numButton3->setObjectName(QString::fromUtf8("numButton3"));
        numButton3->setGeometry(QRect(106, 60, 50, 50));
        numButtonx = new QPushButton(Numkeyboard);
        numButtonx->setObjectName(QString::fromUtf8("numButtonx"));
        numButtonx->setGeometry(QRect(156, 60, 50, 50));
        numButton4 = new QPushButton(Numkeyboard);
        numButton4->setObjectName(QString::fromUtf8("numButton4"));
        numButton4->setGeometry(QRect(6, 114, 50, 50));
        numButton7 = new QPushButton(Numkeyboard);
        numButton7->setObjectName(QString::fromUtf8("numButton7"));
        numButton7->setGeometry(QRect(6, 168, 50, 50));
        numButton0 = new QPushButton(Numkeyboard);
        numButton0->setObjectName(QString::fromUtf8("numButton0"));
        numButton0->setGeometry(QRect(156, 114, 50, 50));
        numButton6 = new QPushButton(Numkeyboard);
        numButton6->setObjectName(QString::fromUtf8("numButton6"));
        numButton6->setGeometry(QRect(106, 114, 50, 50));
        numButton5 = new QPushButton(Numkeyboard);
        numButton5->setObjectName(QString::fromUtf8("numButton5"));
        numButton5->setGeometry(QRect(56, 114, 50, 50));
        numButton9 = new QPushButton(Numkeyboard);
        numButton9->setObjectName(QString::fromUtf8("numButton9"));
        numButton9->setGeometry(QRect(106, 168, 50, 50));
        numButton8 = new QPushButton(Numkeyboard);
        numButton8->setObjectName(QString::fromUtf8("numButton8"));
        numButton8->setGeometry(QRect(56, 168, 50, 50));
        numButtonj = new QPushButton(Numkeyboard);
        numButtonj->setObjectName(QString::fromUtf8("numButtonj"));
        numButtonj->setGeometry(QRect(156, 168, 50, 50));

        retranslateUi(Numkeyboard);

        QMetaObject::connectSlotsByName(Numkeyboard);
    } // setupUi

    void retranslateUi(QWidget *Numkeyboard)
    {
        Numkeyboard->setWindowTitle(QApplication::translate("Numkeyboard", "Form", 0, QApplication::UnicodeUTF8));
        numButton1->setText(QApplication::translate("Numkeyboard", "1", 0, QApplication::UnicodeUTF8));
        numButton2->setText(QApplication::translate("Numkeyboard", "2", 0, QApplication::UnicodeUTF8));
        numButton3->setText(QApplication::translate("Numkeyboard", "3", 0, QApplication::UnicodeUTF8));
        numButtonx->setText(QApplication::translate("Numkeyboard", "*", 0, QApplication::UnicodeUTF8));
        numButton4->setText(QApplication::translate("Numkeyboard", "4", 0, QApplication::UnicodeUTF8));
        numButton7->setText(QApplication::translate("Numkeyboard", "7", 0, QApplication::UnicodeUTF8));
        numButton0->setText(QApplication::translate("Numkeyboard", "0", 0, QApplication::UnicodeUTF8));
        numButton6->setText(QApplication::translate("Numkeyboard", "6", 0, QApplication::UnicodeUTF8));
        numButton5->setText(QApplication::translate("Numkeyboard", "5", 0, QApplication::UnicodeUTF8));
        numButton9->setText(QApplication::translate("Numkeyboard", "9", 0, QApplication::UnicodeUTF8));
        numButton8->setText(QApplication::translate("Numkeyboard", "8", 0, QApplication::UnicodeUTF8));
        numButtonj->setText(QApplication::translate("Numkeyboard", "#", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Numkeyboard: public Ui_Numkeyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMKEYBOARDLOGIN_H
