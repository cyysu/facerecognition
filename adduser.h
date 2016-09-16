#ifndef ADDUSER_H
#define ADDUSER_H

#include <QWidget>
#include <QModelIndex>

class Mainkeyboard;
class QSound;
class Data;
class QSqlRelationalTableModel;

namespace Ui {
class Adduser;
}

class Adduser : public QWidget
{
    Q_OBJECT
    
public:
    explicit Adduser(QWidget *parent = 0);
    ~Adduser();
    void fillinformation();
    void modiuserinfo(QModelIndex index);
    void automaticfill();
    int IDcheck();
signals:
    void requirefaceshow();
    void returnuser();
private slots:
    void on_lineEdit_selectionChanged();
    void on_lineEdit_4_selectionChanged();
    void on_requireface_clicked();
    void on_returnbutton_clicked();    
private:
    Ui::Adduser *ui;
    Mainkeyboard *mainkeyboard;
    QSound *reqface;
    Data *usrlist;
    int lastid;
    QSqlRelationalTableModel *model;
};

#endif // ADDUSER_H
