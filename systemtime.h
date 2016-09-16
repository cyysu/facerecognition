#ifndef SYSTEMTIME_H
#define SYSTEMTIME_H

#include <QWidget>
class QStringList;
class QCompleter;
class Numkeyboard;

namespace Ui {
class Systemtime;
}

class Systemtime : public QWidget
{
    Q_OBJECT
    
public:
    explicit Systemtime(QWidget *parent = 0);
    ~Systemtime();
    int setRealTime();
    int set_date(struct tm   *p_tm);
signals:
    void tosystem2advice();
    
private slots:
    void on_systemreturnbnz_clicked();
    void on_year_intput_clicked();
    void on_month_intput_clicked();
    void on_day_intput_clicked();
    void on_hour_intput_clicked();
    void on_min_intput_clicked();
    void dealyear(QString);
    void dealmon(QString);
    void dealday(QString);
    void dealhour(QString);
    void dealmin(QString);
private:
    Ui::Systemtime *ui;
    QStringList strings_timezone;
    QCompleter *timezonecombox;
    Numkeyboard *numkeyboard;
};

#endif // SYSTEMTIME_H
