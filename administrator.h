#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <QWidget>

class Addadminisrator;
class QSqlRelationalTableModel;
class Recognition;
class Data;

namespace Ui {
class Administrator;
}
class Administrator : public QWidget
{
    Q_OBJECT
    
public:
    explicit Administrator(QWidget *parent = 0);
    ~Administrator();
    void savemodiadmin();
    void initadmin();//注意这里
    void readadminface();
signals:
    void toadminstrotomenu();
private slots:
    void on_addadministratorbnz_clicked();
    void showrecog();
    void showinformation();
    void writetodata();
    void dealaddadmin();
    void on_adminreturnbnz_clicked();
    void on_deleteadminbnz_clicked();
    void on_modifyadminbnz_clicked();
private:
    Ui::Administrator *ui;
    Addadminisrator *addadminisrator;
    QSqlRelationalTableModel *modeladmin;
    Recognition  *recognition;
    Data *data;
};

#endif // ADMINISTRATOR_H
