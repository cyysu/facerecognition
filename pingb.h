#ifndef PINGB_H
#define PINGB_H

#include <QWidget>

namespace Ui {
class Pingb;
}

class Pingb : public QWidget
{
    Q_OBJECT
    
public:
    explicit Pingb(QWidget *parent = 0);
    ~Pingb();
private slots:
    void timerUpDate();
    
private:
    Ui::Pingb *ui;
};

#endif // PINGB_H
