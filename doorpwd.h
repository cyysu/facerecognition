#ifndef DOORPWD_H
#define DOORPWD_H

#include <QWidget>

class Numkeyboard;

namespace Ui {
class Doorpwd;
}

class Doorpwd : public QWidget
{
    Q_OBJECT
    
public:
    explicit Doorpwd(QWidget *parent = 0);
    ~Doorpwd();
signals:
    void todoorpwd2secr();
    
private slots:
    void on_lineEdit_selectionChanged();
    void on_dooretunbnz_clicked();

private:
    Ui::Doorpwd *ui;
    Numkeyboard *numkeyboard;
};

#endif // DOORPWD_H
