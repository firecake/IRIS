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

typedef struct {
    QCPItemLine *hLine;
    QCPItemLine *vLine;
} QCPCursor;

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
    void capture();
    virtual void mouseReleaseEvent(QMouseEvent *event);
    virtual void closeEvent(QCloseEvent *event);

    void on_toolButton_clicked();

protected:

    void paintEvent(QPaintEvent *);


private:

    bool cursorEnabled;

    Ui::MainWindow *ui;
    QLinearGradient *g, *gradient;
    QBrush    *brush;
    QPen      *pen0, *pen1, *pen2, *pen3;
    QPixmap   *Map;
    int w,h;

    int imgWidth, imgHeight;

    int sampleLine;

    float a;
    float b;

    QTimer *CaptureTimer;

    QSerialPort *Com;

    unsigned char Tc[TC_SIZE];
    unsigned char Tm[MAX_TM_SIZE];

    QVector<double> x;
    QVector<double> y;

    QCPCursor cursor1, cursor2;

    int x0, x1;

    void ManageCursor(QCustomPlot *customPlot, QCPCursor *cursor, double x, double y, QPen pen);

};

#endif // MAINWINDOW_H
