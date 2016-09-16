#include "application.h"
#include <QTimer>
#include <QDebug>
#include <QObject>
#include "common.h"

Application::Application(int &argc, char **argv):
    QApplication(argc,argv)
{
    pingb=new Pingb();
    connect(&globaltimer,SIGNAL(timeout()),this,SLOT(pingbdeal()));
}
bool Application::notify(QObject *obj, QEvent *e)
{
    if(e->type() == QEvent::MouseButtonPress)
    {
            ishoming=false;
            pingb->hide();
            hometimer.stop();
            hometimer.start(1000*30);//
            globaltimer.stop();
            globaltimer.start(1000*30);
    }
    return QApplication::notify(obj,e);
}
void Application::pingbdeal()
{
    if(ishoming)
        if(usbisstop)
            pingb->show();

}

