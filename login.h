#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

class Numkeylogin;
class Recognition;
class QSound;
class Data;


namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT
public:
    explicit Login(QWidget *parent = 0);
    ~Login();
signals:
    void tologin2home();
    void tomenu2general();
    void tohome2input();
    //void tohome2menu();

private slots:
    void on_pushButton_clicked();
    //void login2menu();
    void login2recog();
    void longinputxx();
    void hidelogin();

private:
    Ui::Login *ui;
    Numkeylogin *numkeylogin;
    Recognition *recognition;
    Data *data;

};

#endif // Login
