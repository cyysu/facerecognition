#ifndef RECSUCCESSION_H
#define RECSUCCESSION_H


#include <QWidget>
#include <QString>

namespace Ui {
class Recsuccession;
}

class Recsuccession : public QWidget
{
    Q_OBJECT
    
public:
    explicit Recsuccession(QWidget *parent = 0);
    ~Recsuccession();
    void loadimage(QString);
    void setname(QString);
    void settime(QString);
    
private:
    Ui::Recsuccession *ui;
};

#endif // RECSUCCESSION_H
