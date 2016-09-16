#ifndef MAINKEYBOARD_H
#define MAINKEYBOARD_H

#include <QWidget>
#include <QTimer>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QPushButton>

namespace Ui {
class Mainkeyboard;
}

class Mainkeyboard : public QWidget
{
    Q_OBJECT
    
public:
    explicit Mainkeyboard(QWidget *parent = 0);
    ~Mainkeyboard();
    void userbs();
signals:
    void setvalue(const QString &);
    void backs();
    void sendname(const QString &);
    void sendid(const QString &);

    void adminsendname(const QString &);
    void adminsendid(const QString &);
private:
    Ui::Mainkeyboard *ui;

    int b1,b2,b3,b4,b5,b6,b7,b8,b9,b10;
    int flag_en;
    int count,i;
    QFile *file;
    QString line;
    QTextStream *in;
    QPushButton *zw[8];
    QTimer *timer1,*timer2,*timer3,*timer4,*timer5,*timer6,*timer7,*timer8,*timer9,*timer10;
private slots:
    void update1();
    void update2();
    void update3();
    void update4();
    void update5();
    void update6();
    void update7();
    void update8();
    void update9();
    void inputzw();

    void on_Button_1_clicked();
    void on_Buttonz1_clicked();
    void on_Buttonz2_clicked();
    void on_Buttonz3_clicked();
    void on_Buttonz4_clicked();
    void on_Buttonz5_clicked();
    void on_Buttonz6_clicked();
    void on_Buttonz7_clicked();
    void on_Buttonz8_clicked();
    void on_Button_2_clicked();
    void on_Button_3_clicked();
    void on_Button_xh_clicked();
    void on_Button_add_clicked();
    void on_Button_4_clicked();
    void on_Button_5_clicked();
    void on_Button_6_clicked();
    void on_Button_0_clicked();
    void on_Button_qh_clicked();
    void on_Button_7_clicked();
    void on_Button_8_clicked();
    void on_Button_9_clicked();
    void on_Button_jh_clicked();
    void on_Button_sub_clicked();
};

#endif // MAINKEYBOARD_H
