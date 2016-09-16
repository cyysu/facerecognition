#ifndef RECOGNITION_H
#define RECOGNITION_H

#include <iostream>
#include <string.h>
#include <fcntl.h>
#include <assert.h>
#include <errno.h>
#include <malloc.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <linux/videodev2.h>
#include <QtGui>
#include "avthread.h"

#include <QTimer>
#include "common.h"
#include <QPaintEvent>

class QSound;
class Data;



//注意这里
class Recfailtip;
class Login;
class Recsuccession;


#define CLEAR(x) memset (&(x), 0, sizeof (x))

namespace Ui {
class Recognition;
}

class Recognition : public QWidget
{
    Q_OBJECT
    
public:
    //explicit Recognition(QWidget *parent = 0);


    static Recognition *getinstance();

    unsigned char *rgb_buf;
    QImage *image,*imgScaled ;
    Avthread *avthread;
    Recfailtip *recfailtip;
    Login *login;
    QTimer *sharetimer;
    QTimer *standingtime;
    QTimer *recfailtiptimer;
    QTimer *shibietimer;
    QTimer *paintre;
    Recsuccession  *recsuccession;
    QSound *reqfinished;
    QSound *hello;
    QSound *reconfail;
    QSound *shibiefail;
    QSound *enterpwd;
    QSound *far;
    QSound *near;
    //Data *data;


    int xioctl(int fd,int request, void *arg);
    void start_capturing();
    void init_mmap(void);
    void mainloop (void);
    int read_frame(void);
    void stop_capturing(void);
    void uninit_device(void);
    void close_device(void);
    void errno_exit(const char *s);
    void process_image(const void *p,int len);
    void startavthread();
    void recordvar(QString name,QString str);
    void getOkfaces();

signals:
    void passwordtip();
    void pwt(void);
    void informationshow();
    void savedata();
    void torecog2home();
    void tohome2menu();
    void tolong2input();

    //void tolong2input();
    void tohome2input();
private slots:
    void recsuccessfunc(int result);
    void on_recog2homebtn_clicked();
    void recfaildeal();
    void shibdeal();
    void paintrect(/*CvRect facerect*/);

private:
    Ui::Recognition *ui;
    explicit Recognition(QWidget *parent = 0);
    ~Recognition();
    //Recognition();
    static Recognition *recognition;

};

#endif // RECOGNITION_H
