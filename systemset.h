#ifndef SYSTEMSET_H
#define SYSTEMSET_H

#include <QWidget>
class Version;
class Capacity;
class Varmessage;

namespace Ui {
class Systemset;
}

class Systemset : public QWidget
{
    Q_OBJECT
    //
public:
    explicit Systemset(QWidget *parent = 0);
    ~Systemset();
signals:
    void tosystem2menu();
private slots:
    void on_systemreturnbnz_clicked();
    void on_versionbnz_clicked();
    void on_volumebnz_clicked();
    void on_varbnz_clicked();

private:
    Ui::Systemset *ui;
    Version *version;
    Capacity *capacity;
    Varmessage *varmessage;
};

#endif // SYSTEMSET_H
