#ifndef INFORMATIONFACE_H
#define INFORMATIONFACE_H

#include <QWidget>

namespace Ui {
class Informationface;
}
class Informationface : public QWidget
{
    Q_OBJECT
public:
    explicit Informationface(QWidget *parent = 0);
    ~Informationface();
private:
    Ui::Informationface *ui;
};

#endif // INFORMATIONFACE_H
