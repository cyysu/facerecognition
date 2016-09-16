#ifndef ADDADMINISRATOR_H
#define ADDADMINISRATOR_H


#include <QWidget>
#include "common.h"
#include <QModelIndex>



class Mainkeyboard;
class QSound;


namespace Ui {
class Addadminisrator;
}

class Addadminisrator : public QWidget
{
    Q_OBJECT
    
public:
    explicit Addadminisrator(QWidget *parent = 0);
    ~Addadminisrator();
    void fillinformation();
    void modiadmininfo(QModelIndex index);
    void autoadminfill();
signals:
    void requirefaceshow();
    void toaddadmin2admin();
    void savedata();
    
private slots:
    void on_adminnameline_selectionChanged();
    void on_admincardline_selectionChanged();
    void on_adminrequirefacebnz_clicked();
    void on_addadminbnz_clicked();

private:
    Ui::Addadminisrator *ui;
    Mainkeyboard *mainkeyboard;
    QSound *reqface;

};

#endif // ADDADMINISRATOR_H
