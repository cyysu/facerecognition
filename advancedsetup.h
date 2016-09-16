#ifndef ADVANCEDSETUP_H
#define ADVANCEDSETUP_H

#include <QWidget>
class Baseset;
class Systemtime;
class Networkset;

namespace Ui {
class Advancedsetup;
}

class Advancedsetup : public QWidget
{
    Q_OBJECT
    
public:
    explicit Advancedsetup(QWidget *parent = 0);
    ~Advancedsetup();
signals:
    void toadviceset2menu();
    
private slots:
    void on_advicesetreturnbnz_clicked();
    void on_basesetbnz_clicked();
    void on_systemtimebnz_clicked();
    void on_networkbnz_clicked();
private:
    Ui::Advancedsetup *ui;
    Baseset *baseset;
    Systemtime *systemtime;
    Networkset *networkset;
};

#endif // ADVANCEDSETUP_H
