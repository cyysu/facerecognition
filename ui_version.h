/********************************************************************************
** Form generated from reading UI file 'version.ui'
**
** Created: Wed Apr 10 10:56:11 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERSION_H
#define UI_VERSION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Version
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *versionreturnbnz;

    void setupUi(QWidget *Version)
    {
        if (Version->objectName().isEmpty())
            Version->setObjectName(QString::fromUtf8("Version"));
        Version->resize(320, 240);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(91, 91, 91, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Version->setPalette(palette);
        label = new QLabel(Version);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 30, 91, 16));
        label_2 = new QLabel(Version);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 70, 231, 16));
        label_3 = new QLabel(Version);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 100, 141, 16));
        label_4 = new QLabel(Version);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 130, 141, 16));
        label_5 = new QLabel(Version);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 155, 161, 41));
        label_6 = new QLabel(Version);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 190, 171, 16));
        versionreturnbnz = new QPushButton(Version);
        versionreturnbnz->setObjectName(QString::fromUtf8("versionreturnbnz"));
        versionreturnbnz->setGeometry(QRect(230, 190, 81, 41));
        QPalette palette1;
        QBrush brush3(QColor(111, 111, 111, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        versionreturnbnz->setPalette(palette1);

        retranslateUi(Version);

        QMetaObject::connectSlotsByName(Version);
    } // setupUi

    void retranslateUi(QWidget *Version)
    {
        Version->setWindowTitle(QApplication::translate("Version", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Version", "\345\265\214\345\205\245\345\274\217\351\227\250\347\246\201\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Version", " \345\272\217\345\210\227\345\217\267\357\274\232  hjzn20130131", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Version", "\347\241\254\344\273\266\347\211\210\346\234\254\357\274\232 hjzn210", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Version", "\350\275\257\344\273\266\347\211\210\346\234\254\357\274\232 hjznface201212", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Version", "\347\256\227\346\263\225\347\211\210\346\234\254\357\274\232 hjzn1stalgorithm\n"
"", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Version", "\347\274\226\350\257\221\346\227\245\346\234\237\357\274\232 2013\345\271\2641\346\234\21031\346\227\245", 0, QApplication::UnicodeUTF8));
        versionreturnbnz->setText(QApplication::translate("Version", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Version: public Ui_Version {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERSION_H
