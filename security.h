#ifndef SECURITY_H
#define SECURITY_H

#include <QWidget>

class Administrator;
class Doorpwd;

namespace Ui {
class Security;
}

class Security : public QWidget
{
    Q_OBJECT
    
public:
    explicit Security(QWidget *parent = 0);
    ~Security();
signals:
    void tosecurity2menu();   
private slots:
    void on_adminbnz_clicked();
    void on_securityreturnbnz_clicked();
    void on_secritypwd_clicked();
private:
    Ui::Security *ui;
    Administrator *administrator;
    Doorpwd *doorpwd;
};

#endif // SECURITY_H
