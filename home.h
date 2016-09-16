#ifndef HOME_H
#define HOME_H

#include <QWidget>

class Numkeyboard;
class Login;
class Recognition;
class Avthread;
class Dealdata;
class Application;
class QTimer;
class Inputpwd;
class Generaluser;
class Mainmenu;
class Data;


namespace Ui {
class Home;
}

class Home : public QWidget
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = 0);
    ~Home();
    void startrecog();
    //void startav();
    void settime();
private slots:
    void on_pushButton_clicked();
    void closehome();
    void login2home();
    void showthis();
    void checkface();
    void pbshow();
    void home2input();
    void home2menu();
private:
    Ui::Home *ui;
    Login *login;
    Recognition *recognition;
    Avthread *avthread;
    Dealdata *dealdata;
    Numkeyboard *numkeyboard;
    QTimer *findedface;
    Inputpwd *inputpwd;
    Mainmenu *mainmenu;
    Generaluser *generaluser;
    //Data *data;
};

#endif // HOME_H
