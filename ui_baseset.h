/********************************************************************************
** Form generated from reading UI file 'baseset.ui'
**
** Created: Wed Apr 10 10:56:11 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASESET_H
#define UI_BASESET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Baseset
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *basesetreturnbnz;
    QComboBox *langcombox;
    QComboBox *recogcombox;
    QLabel *threshold_lab;
    QPushButton *threshold_input;
    QLabel *sound_lab;
    QCheckBox *sound_che;
    QLabel *feelab;
    QCheckBox *feel_che;

    void setupUi(QWidget *Baseset)
    {
        if (Baseset->objectName().isEmpty())
            Baseset->setObjectName(QString::fromUtf8("Baseset"));
        Baseset->resize(320, 240);
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
        Baseset->setPalette(palette);
        label = new QLabel(Baseset);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 30, 51, 16));
        label_2 = new QLabel(Baseset);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 70, 51, 16));
        label_3 = new QLabel(Baseset);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 110, 51, 16));
        basesetreturnbnz = new QPushButton(Baseset);
        basesetreturnbnz->setObjectName(QString::fromUtf8("basesetreturnbnz"));
        basesetreturnbnz->setGeometry(QRect(230, 190, 81, 41));
        QPalette palette1;
        QBrush brush3(QColor(111, 111, 111, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        basesetreturnbnz->setPalette(palette1);
        langcombox = new QComboBox(Baseset);
        langcombox->setObjectName(QString::fromUtf8("langcombox"));
        langcombox->setGeometry(QRect(120, 70, 121, 21));
        recogcombox = new QComboBox(Baseset);
        recogcombox->setObjectName(QString::fromUtf8("recogcombox"));
        recogcombox->setGeometry(QRect(120, 110, 121, 22));
        threshold_lab = new QLabel(Baseset);
        threshold_lab->setObjectName(QString::fromUtf8("threshold_lab"));
        threshold_lab->setGeometry(QRect(50, 160, 31, 16));
        threshold_input = new QPushButton(Baseset);
        threshold_input->setObjectName(QString::fromUtf8("threshold_input"));
        threshold_input->setGeometry(QRect(80, 150, 41, 31));
        QFont font;
        font.setPointSize(9);
        threshold_input->setFont(font);
        sound_lab = new QLabel(Baseset);
        sound_lab->setObjectName(QString::fromUtf8("sound_lab"));
        sound_lab->setGeometry(QRect(140, 160, 31, 16));
        sound_che = new QCheckBox(Baseset);
        sound_che->setObjectName(QString::fromUtf8("sound_che"));
        sound_che->setGeometry(QRect(170, 158, 21, 21));
        feelab = new QLabel(Baseset);
        feelab->setObjectName(QString::fromUtf8("feelab"));
        feelab->setGeometry(QRect(190, 162, 54, 12));
        feel_che = new QCheckBox(Baseset);
        feel_che->setObjectName(QString::fromUtf8("feel_che"));
        feel_che->setGeometry(QRect(250, 158, 21, 21));

        retranslateUi(Baseset);

        QMetaObject::connectSlotsByName(Baseset);
    } // setupUi

    void retranslateUi(QWidget *Baseset)
    {
        Baseset->setWindowTitle(QApplication::translate("Baseset", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Baseset", "\345\237\272\346\234\254\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Baseset", "\347\225\214\351\235\242\350\257\255\350\250\200\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Baseset", "\350\257\206\345\210\253\346\250\241\345\274\217\357\274\232", 0, QApplication::UnicodeUTF8));
        basesetreturnbnz->setText(QApplication::translate("Baseset", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        threshold_lab->setText(QApplication::translate("Baseset", "\351\230\210\345\200\274\357\274\232", 0, QApplication::UnicodeUTF8));
        threshold_input->setText(QApplication::translate("Baseset", "0.", 0, QApplication::UnicodeUTF8));
        sound_lab->setText(QApplication::translate("Baseset", "\351\235\231\351\237\263:", 0, QApplication::UnicodeUTF8));
        sound_che->setText(QString());
        feelab->setText(QApplication::translate("Baseset", "\344\272\272\344\275\223\346\204\237\345\272\224\357\274\232", 0, QApplication::UnicodeUTF8));
        feel_che->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Baseset: public Ui_Baseset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASESET_H
