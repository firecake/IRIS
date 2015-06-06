#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLinearGradient>
#include <QBrush>
#include <QPen>
#include <QTimer>
#include <QSerialPort>
#include "qcustomplot.h"
#include <QVector>

#define GAMMA 1.0
#define STARTF 350
#define STOPF  850

#define TC_SIZE 4
#define MAX_TM_SIZE ( 4096 * 8 )

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_toolButton_clicked();
    void capture();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

protected:
    void paintEvent(QPaintEvent *);

private:
    Ui::MainWindow *ui;
    QLinearGradient *g, *gradient;
    QBrush    *b;
    QPen      *pen0, *pen1, *pen2, *pen3;
    QPixmap   *Map;
    int w,h;

    int imgWidth, imgHeight;

    int sampleLine;

    QTimer *CaptureTimer;

    QSerialPort *Com;

    unsigned char Tc[TC_SIZE];
    unsigned char Tm[MAX_TM_SIZE];

    QVector<double> x;
    QVector<double> y;

};

#endif // MAINWINDOW_H
