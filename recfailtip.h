#ifndef RECFAILTIP_H
#define RECFAILTIP_H

#include <QWidget>
//#include "home.h"
//#include "recognition.h"
//#include "avthread.h"
class Recognition;
class Login;


namespace Ui {
class Recfailtip;
}

class Recfailtip : public QWidget
{
    Q_OBJECT
    
public:
    explicit Recfailtip(QWidget *parent = 0);
    ~Recfailtip();
private:
    Ui::Recfailtip *ui;
    Recognition *recognition;
};

#endif // RECFAILTIP_H
