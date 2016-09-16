#ifndef USER_H
#define USER_H

#include <QWidget>
#include <QByteArray>

class Adduser;
class QSqlRelationalTableModel;
class Recognition;
class Informationface;
class QDataWidgetMapper;
class Finduser;
class Data;
class QSqlQueryModel;
class Dealdata;

namespace Ui {
class User;
}

class User : public QWidget
{
    Q_OBJECT
    
public:
    explicit User(QWidget *parent = 0);
    ~User();
    void inituser();
signals:
    void returnmenu();
    void returngeneral();
private slots:
    void on_pushButton_clicked();
    //void writetodata();
    //void savemodify();
    void dealadduser();
    void showrecog();
    void showinformation();
    void on_pushButton_5_clicked();
    void on_deleteuserbutton_clicked();
    void on_modifyuserbutton_clicked();
    void on_userfindbnz_clicked();
    void updatauser(int);
    void hideuser();
private:
    Ui::User *ui;
    Adduser *adduser;
    Recognition *recognition;
    //QSqlQueryModel *modelcommon;
    QSqlRelationalTableModel *modelcommon;
    QSqlRelationalTableModel *updatamodel;
    Informationface *informationface;
    QDataWidgetMapper *mapper;
    Finduser *finduser;
    Data *usrlist;
    Dealdata *dealdata;



};

#endif // USER_H
