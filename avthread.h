#ifndef AVTHREAD_H
#define AVTHREAD_H

#include <QWidget>
#include <QThread>
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
#include <QDebug>
#include "HJFaceFeatureARM11.h"
#include "common.h"



#define CLEAR(x) memset (&(x), 0, sizeof (x))

class QSound;
class Data;

class Avthread:public QThread
{
    Q_OBJECT
public:
    Avthread();
    ~Avthread();
    int xioctl(int  fd, int  request, void *arg);

    void mainloop(void);
    void start_capturing(void);
    int read_frame(void);
    void stop_capturing(void);
    void uninit_device(void);
    void close_device(void);
    void errno_exit (const char *s);
    void process_image(const void *p,int len);

    void loadfacetemplates();
    //void readfacefeature();
    int facesort(double array[], int num);
    int adminfacesort(double array[],int num);
    void getOkfaces_2();

protected:
    void run();
signals:
    void recognitionfail(int);
    void recognitionresult(int);
    void torecogpaint(CvRect);
    //void stopusbcam(void);
private:
    //why can't use it in static func?
    int avwidth;
    int avheight;
    int *format;
    IplImage  *rgb16IplImage;
    IplImage  *normFace;
    CvMat* feature;
    CvRect *rect;
    float dis;
    QSound *far;
    QSound *near;
    Data *data;

};

#endif // AVTHREAD_H
