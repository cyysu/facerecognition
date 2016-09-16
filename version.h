#ifndef VERSION_H
#define VERSION_H

#include <QWidget>

namespace Ui {
class Version;
}

class Version : public QWidget
{
    Q_OBJECT
    
public:
    explicit Version(QWidget *parent = 0);
    ~Version();
signals:
    void toversion2system();
private slots:
    void on_versionreturnbnz_clicked();
private:
    Ui::Version *ui;
};

#endif // VERSION_H
