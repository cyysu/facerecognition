/********************************************************************************
** Form generated from reading UI file 'recognition.ui'
**
** Created: Wed Apr 10 10:56:10 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECOGNITION_H
#define UI_RECOGNITION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Recognition
{
public:
    QLabel *label;
    QLabel *label_2;
    QProgressBar *progressBar;
    QPushButton *recog2homebtn;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *Recognition)
    {
        if (Recognition->objectName().isEmpty())
            Recognition->setObjectName(QString::fromUtf8("Recognition"));
        Recognition->resize(320, 240);
        QPalette palette;
        QBrush brush(QColor(255, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(94, 91, 91, 255));
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
        Recognition->setPalette(palette);
        Recognition->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(Recognition);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 0, 181, 210));
        label->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(Recognition);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 220, 320, 20));
        QPalette palette1;
        QBrush brush4(QColor(85, 85, 85, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        QBrush brush5(QColor(184, 184, 184, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        label_2->setPalette(palette1);
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Caslon Pro"));
        font.setPointSize(14);
        label_2->setFont(font);
        progressBar = new QProgressBar(Recognition);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setEnabled(true);
        progressBar->setGeometry(QRect(0, 205, 321, 8));
        QPalette palette2;
        QBrush brush6(QColor(255, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        progressBar->setPalette(palette2);
        QFont font1;
        font1.setPointSize(9);
        progressBar->setFont(font1);
        progressBar->setStyleSheet(QString::fromUtf8("color:red"));
        progressBar->setValue(24);
        recog2homebtn = new QPushButton(Recognition);
        recog2homebtn->setObjectName(QString::fromUtf8("recog2homebtn"));
        recog2homebtn->setGeometry(QRect(240, 0, 81, 41));
        QPalette palette3;
        QBrush brush7(QColor(111, 111, 111, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        recog2homebtn->setPalette(palette3);
        label_3 = new QLabel(Recognition);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 241, 241));
        label_4 = new QLabel(Recognition);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 231, 203));
        QFont font2;
        font2.setPointSize(11);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(170, 170, 255);"));

        retranslateUi(Recognition);

        QMetaObject::connectSlotsByName(Recognition);
    } // setupUi

    void retranslateUi(QWidget *Recognition)
    {
        Recognition->setWindowTitle(QApplication::translate("Recognition", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("Recognition", "       \344\272\272\350\204\270\350\257\206\345\210\253\344\270\255\357\274\214\350\257\267\346\212\212\344\272\272\350\204\270\347\275\256\344\272\216\351\273\204\350\211\262\346\241\206\345\206\205", 0, QApplication::UnicodeUTF8));
        recog2homebtn->setText(QApplication::translate("Recognition", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Recognition: public Ui_Recognition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECOGNITION_H
