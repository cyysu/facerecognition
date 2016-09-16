#ifndef GENERALUSER_H
#define GENERALUSER_H

#include <QWidget>
class User;


namespace Ui {
class Generaluser;
}

class Generaluser : public QWidget
{
    Q_OBJECT
    
public:
    explicit Generaluser(QWidget *parent = 0);
    ~Generaluser();
signals:
    void tologin2user();
    void tologin2home();
private slots:
    void on_generalbnz_clicked();
    void on_returnhomebnz_clicked();
private:
    Ui::Generaluser *ui;
    User *user;
};

#endif // GENERALUSER_H
