#ifndef VARMESSAGE_H
#define VARMESSAGE_H

#include <QWidget>

namespace Ui {
class Varmessage;
}

class Varmessage : public QWidget
{
    Q_OBJECT
    
public:
    explicit Varmessage(QWidget *parent = 0);
    ~Varmessage();
    void writevar();
signals:
    void tovar2system();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Varmessage *ui;
};

#endif // VARMESSAGE_H
