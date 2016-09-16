#ifndef DATA_H
#define DATA_H

#include "common.h"
#include <QByteArray>

class QSqlRelationalTableModel;
class QString;
class QSqlQueryModel;

class Data
{
public:
    //save as char type
    char  facedata[FACENUM][facefeature_length];
    char  **reco_updata;
    char **commfacetemplates;
    char **adminfacetemplates;
    QByteArray qbyte[10];
    static Data *getinstance();
    QSqlRelationalTableModel* getusermodel();
    QSqlQueryModel* getusermodel2();
    int getlastid();
    void writetodata();
    void savemodify();
    void updata_data();
    void sleep(unsigned int msec);
    int convert_yuv_to_rgb_buffer(unsigned char *yuv, unsigned char *rgb, unsigned int width, unsigned int height);
    int convert_yuv_to_rgb_pixel(int y, int u, int v);
private:
    Data();
    static Data *data;
    QSqlRelationalTableModel *usrmodel;
    QSqlQueryModel *usrmodel2;

};
#endif // DATA_H
