#ifndef FINDUSER_H
#define FINDUSER_H

#include <QWidget>
class Numkeyboard;

namespace Ui {
class Finduser;
}

class Finduser : public QWidget
{
    Q_OBJECT
    
public:
    explicit Finduser(QWidget *parent = 0);
    ~Finduser();
signals:
    void tofinduser(int);
    void toreturnusr();
private slots:
    void on_findconfisebnz_clicked();
    void on_lineEdit_selectionChanged();
    void on_findreturnbnz_clicked();
private:
    Ui::Finduser *ui;
    Numkeyboard *numkeyboard;
};

#endif // FINDUSER_H
