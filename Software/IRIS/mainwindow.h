#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLinearGradient>
#include <QBrush>
#include <QPen>

#include <QMainWindow>

#define GAMMA 1.0
#define STARTF 350
#define STOPF  850

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
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QLinearGradient *g, *gradient;
    QBrush    *b;
    QPen      *pen;
    QPixmap   *Map;
    int w,h;
};

#endif // MAINWINDOW_H
