#ifndef QSPECTROVIEWFINDER_H
#define QSPECTROVIEWFINDER_H

#include <QCameraViewfinder>

class QSpectroViewfinder : public QCameraViewfinder
{
    Q_OBJECT
public:
    explicit QSpectroViewfinder(QWidget *parent = 0);
    
signals:
    
public slots:
    
    void updateY(double y);

protected:

    void paintEvent(QPaintEvent *event);

private:

    int Ysample;

};

#endif // QSPECTROVIEWFINDER_H
