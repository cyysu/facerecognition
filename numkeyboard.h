#ifndef NUMKEYBOARD_H
#define NUMKEYBOARD_H

#include <QWidget>
class QRegExpValidator;

namespace Ui {
class Numkeyboard;
}

class Numkeyboard : public QWidget
{
    Q_OBJECT
    
public:
    explicit Numkeyboard(QWidget *parent = 0);
    ~Numkeyboard();
    void setnetmask();
signals:
    void toclosehome();
    void tofind(const QString &);
    void todoorpwd();
    void tobase(QString);
    void tosysyearset(QString);
    void tosysmonset(QString);
    void tosysdayset(QString);
    void tosyshourset(QString);
    void tosysminset(QString);
    void tonetworkip(QString);
    void tonetworkmask(QString);
    void tonetworkrout(QString);
    void tonetworkdns(QString);
private slots:
    void on_numButton1_clicked();
    void on_numButton2_clicked();
    void on_numButton3_clicked();
    void on_numButton4_clicked();
    void on_numButton5_clicked();
    void on_numButton6_clicked();
    void on_numButton7_clicked();
    void on_numButton8_clicked();
    void on_numButton9_clicked();
    void on_numButtonx_clicked();
    void on_numButton0_clicked();
    void on_numButtonj_clicked();
private:
    Ui::Numkeyboard *ui;
    QRegExpValidator *pValidator;
};

#endif // NUMKEYBOARD_H
