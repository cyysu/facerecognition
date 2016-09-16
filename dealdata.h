#ifndef DEALDATA_H
#define DEALDATA_H
#include <QThread>

class Data;
class QSqlRelationalTableModel;


class Dealdata:public QThread
{
public:
    Dealdata();
    void writetodata();
    void readuserface();
    //void savemodify();

protected:
    void run();
private:
    Data *dd;
    QSqlRelationalTableModel *usrmodel;
};

#endif // DEALDATA_H
