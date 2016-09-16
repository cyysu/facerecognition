/********************************************************************************
** Form generated from reading UI file 'pingb.ui'
**
** Created: Wed Apr 10 10:56:11 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINGB_H
#define UI_PINGB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pingb
{
public:
    QLabel *labelTime;
    QLabel *labelDate;
    QLabel *labelWeek;
    QLabel *labelTitle;

    void setupUi(QWidget *Pingb)
    {
        if (Pingb->objectName().isEmpty())
            Pingb->setObjectName(QString::fromUtf8("Pingb"));
        Pingb->resize(320, 240);
        QPalette palette;
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(91, 91, 91, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        Pingb->setPalette(palette);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        Pingb->setFont(font);
        Pingb->setContextMenuPolicy(Qt::NoContextMenu);
        labelTime = new QLabel(Pingb);
        labelTime->setObjectName(QString::fromUtf8("labelTime"));
        labelTime->setGeometry(QRect(40, 40, 251, 51));
        QPalette palette1;
        QBrush brush4(QColor(85, 0, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush4);
        QBrush brush5(QColor(0, 0, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        QBrush brush6(QColor(255, 255, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        QBrush brush7(QColor(0, 255, 127, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        QBrush brush8(QColor(170, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        QBrush brush9(QColor(255, 0, 127, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        QBrush brush10(QColor(51, 153, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush9);
        labelTime->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe Caslon Pro"));
        font1.setPointSize(48);
        font1.setBold(true);
        font1.setWeight(75);
        labelTime->setFont(font1);
        labelTime->setTextFormat(Qt::PlainText);
        labelTime->setScaledContents(true);
        labelTime->setMargin(5);
        labelDate = new QLabel(Pingb);
        labelDate->setObjectName(QString::fromUtf8("labelDate"));
        labelDate->setGeometry(QRect(40, 120, 101, 21));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush11(QColor(85, 0, 127, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        labelDate->setPalette(palette2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Adobe Caslon Pro"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        labelDate->setFont(font2);
        labelWeek = new QLabel(Pingb);
        labelWeek->setObjectName(QString::fromUtf8("labelWeek"));
        labelWeek->setGeometry(QRect(150, 120, 141, 20));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        labelWeek->setFont(font3);
        labelTitle = new QLabel(Pingb);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(160, 190, 141, 41));
        labelTitle->setFont(font2);
        labelTitle->setMargin(4);
        labelTitle->setIndent(3);

        retranslateUi(Pingb);

        QMetaObject::connectSlotsByName(Pingb);
    } // setupUi

    void retranslateUi(QWidget *Pingb)
    {
        Pingb->setWindowTitle(QApplication::translate("Pingb", "Form", 0, QApplication::UnicodeUTF8));
        labelTime->setText(QString());
        labelDate->setText(QString());
        labelWeek->setText(QString());
        labelTitle->setText(QApplication::translate("Pingb", "\346\264\252\345\211\221\346\231\272\350\203\275\344\272\272\350\204\270\350\257\206\345\210\253\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Pingb: public Ui_Pingb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINGB_H
