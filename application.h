#ifndef APPLICATION_H
#define APPLICATION_H
#include <QApplication>
#include "pingb.h"

class Home;
class Application:public QApplication
{
    Q_OBJECT
public:
    Application(int & argc, char ** argv);
    bool notify(QObject *, QEvent *);
private slots:
    void pingbdeal();
signals:
    void toapp2home();
private:
    Pingb *pingb;
};

#endif // APPLICATION_H


