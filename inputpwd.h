#ifndef INPUTPWD_H
#define INPUTPWD_H

#include <QWidget>
#include "numkeylogin.h"

//class QSound;

namespace Ui {
class Inputpwd;
}
class Inputpwd : public QWidget
{
    Q_OBJECT
public:
    explicit Inputpwd(QWidget *parent = 0);
    ~Inputpwd();
signals:
    void toinputpwdlogin();
    void toinputpwdhome();
    void toinputpwdmenu();
private:
    Ui::Inputpwd *ui;
    Numkeylogin *numkeylogin;

};

#endif // INPUTPWD_H
