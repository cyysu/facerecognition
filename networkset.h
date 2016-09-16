#ifndef NETWORKSET_H
#define NETWORKSET_H

#include <QWidget>
class Numkeyboard;

namespace Ui {
class Networkset;
}

class Networkset : public QWidget
{
    Q_OBJECT
    
public:
    explicit Networkset(QWidget *parent = 0);
    ~Networkset();
signals:
    void tonetwork2advice();
private slots:
    void on_networkreturnbnz_clicked();
    void on_ip_input_clicked();
    void on_mask_input_clicked();
    void on_rout_input_clicked();
    void on_dns_input_clicked();
    void setip(QString);
private:
    Ui::Networkset *ui;
    Numkeyboard *numkeyboard;
};

#endif // NETWORKSET_H
