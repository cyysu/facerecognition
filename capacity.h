#ifndef CAPACITY_H
#define CAPACITY_H

#include <QWidget>

namespace Ui {
class Capacity;
}

class Capacity : public QWidget
{
    Q_OBJECT
public:
    explicit Capacity(QWidget *parent = 0);
    ~Capacity();
    void volumecheck();
signals:
    void tocapac2system();
private slots:
    void on_volumereturnbnz_clicked();
private:
    Ui::Capacity *ui;
};

#endif // CAPACITY_H
