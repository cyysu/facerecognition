#ifndef BASESET_H
#define BASESET_H

#include <QWidget>
class QStringList;
class QCompleter;
class Numkeyboard;

namespace Ui {
class Baseset;
}

class Baseset : public QWidget
{
    Q_OBJECT
    
public:
    explicit Baseset(QWidget *parent = 0);
    ~Baseset();
signals:
    void tobaseset2advice();
private slots:
    void on_basesetreturnbnz_clicked();
    void on_threshold_input_clicked();
    void setthreshold(QString );

private:
    Ui::Baseset *ui;
    QStringList strings_lang;
    QStringList strings_recong;
    QCompleter *completer_lang;
    QCompleter *completer_recong;
    Numkeyboard *numkeyboard;
};

#endif // BASESET_H
