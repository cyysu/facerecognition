#ifndef MAINMENU_H
#define MAINMENU_H

#include <QWidget>
class User;
class Security;
class Advancedsetup;
class Systemset;
class Data;

namespace Ui {
class Mainmenu;
}

class Mainmenu : public QWidget
{
    Q_OBJECT
    
public:
    explicit Mainmenu(QWidget *parent = 0);
    ~Mainmenu();
signals:
    void tomenu2login();
private slots:
    void on_pushButton_2_clicked();
    void on_menureturn_clicked();
    void on_security_bnz_clicked();
    void on_advicesetbnz_clicked();
    void on_systemsetbnz_clicked();
private:
    Ui::Mainmenu *ui;
    User *user;
    Security *security;
    Advancedsetup *advancedsetup;
    Systemset *systemset;
    Data *usrlist;
};

#endif // MAINMENU_H
