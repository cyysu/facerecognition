#ifndef NUBKEYBOARD_H
#define NUBKEYBOARD_H

#include <QWidget>
#include <QLineEdit>
#include <QDebug>
#include "recognition.h"

class QSound;
class Data;

namespace Ui {
class Numkeylogin;
}
class Numkeylogin : public QWidget
{
    Q_OBJECT
public:
    explicit Numkeylogin(QWidget *parent = 0);
    ~Numkeylogin();
signals:
    void tologin2menu();
    void tologin2recog();
    void toinputpwdlogin();
    void tologin2home();
    
private slots:
    void on_numButton0_clicked();
    void on_numButton1_clicked();
    void on_numButton2_clicked();
    void on_numButton3_clicked();
    void on_numButtonx_clicked();
    void on_numButton4_clicked();
    void on_numButton5_clicked();
    void on_numButton6_clicked();
    void on_numButton7_clicked();
    void on_numButton8_clicked();
    void on_numButton9_clicked();
    void on_numButtonj_clicked();
private:
    Ui::Numkeylogin *ui;
    QLineEdit nmlineEdit;
    QSound *noid;
    QSound *pwderror;
    Data *data;
};

#endif // NUBKEYBOARD_H
