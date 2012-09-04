#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // generate some data:
    QVector<double> x(601), y(601); // initialize with entries 0..100
    for (int i=0; i<601; ++i)
    {
      x[i] = 300+i; // x goes from -1 to 1
      y[i] = 20 + 180*sin(0.1*i)/(i+1); // let's plot a quadratic function
    }

    //
    // Build spectrum
    //

    // create graph and assign data to it:
    ui->plot1->addGraph();
    ui->plot1->graph(0)->setData(x, y);
    // give the axes some labels:
    ui->plot1->xAxis->setLabel("nm");
    //ui->plot1->yAxis->setLabel("y");
    // set axes ranges, so we see all data:
    ui->plot1->xAxis->setRange(STARTF, STOPF);

    QVector<double> ticks_label;

    ticks_label << 300 << 400 << 500 << 600 << 700 << 800 << 900;

    ui->plot1->xAxis->setAutoTicks(false);
    ui->plot1->xAxis->setTickVector(ticks_label);
    ui->plot1->yAxis->setRange(0, 40);

    w=ui->plot1->size().width() - ui->plot1->marginLeft() - ui->plot1->marginRight();
    h=75;

    g=new QLinearGradient(0.0, 1.0, w, 1.0);

    g->setColorAt(0.0, QColor::fromRgbF(1, 1, 1, 0.7));
    g->setColorAt( ( 440.0 - STARTF) / ( STOPF - STARTF), QColor::fromRgbF(1, 0, 1, GAMMA) );
    g->setColorAt( ( 484.0 - STARTF) / ( STOPF - STARTF), QColor::fromRgbF(0, 0, 1, GAMMA) );
    g->setColorAt( ( 528.0 - STARTF) / ( STOPF - STARTF), QColor::fromRgbF(0, 1, 0, GAMMA) );
    g->setColorAt( ( 572.0 - STARTF) / ( STOPF - STARTF), QColor::fromRgbF(1, 1, 0, GAMMA) );
    g->setColorAt( ( 616.0 - STARTF) / ( STOPF - STARTF), QColor::fromRgbF(1, 0.4, 0.2, GAMMA) );
    g->setColorAt( ( 660.0 - STARTF) / ( STOPF - STARTF), QColor::fromRgbF(1, 0, 0, GAMMA) );
    g->setColorAt(1.0, QColor::fromRgbF(1, 1, 1, 0.7));

    b=new QBrush(*g);

    pen = new QPen();
    pen->setWidth(2);

    ui->plot1->graph(0)->setBrush(*b);
    ui->plot1->graph(0)->setPen(*pen);

    //
    // Build spectrogram
    //

    // Base visible spectrum

    Map = new QPixmap(w,h);

    gradient = new QLinearGradient(0,0,w,0);
    gradient->setColorAt(0, QColor::fromRgbF(0, 0, 0, 1));
    gradient->setColorAt( ( 440.0 - STARTF) / ( STOPF - STARTF), QColor::fromRgbF(1, 0, 1, GAMMA) );
    gradient->setColorAt( ( 484.0 - STARTF) / ( STOPF - STARTF), QColor::fromRgbF(0, 0, 1, GAMMA) );
    gradient->setColorAt( ( 528.0 - STARTF) / ( STOPF - STARTF), QColor::fromRgbF(0, 1, 0, GAMMA) );
    gradient->setColorAt( ( 572.0 - STARTF) / ( STOPF - STARTF), QColor::fromRgbF(1, 1, 0, GAMMA) );
    gradient->setColorAt( ( 616.0 - STARTF) / ( STOPF - STARTF), QColor::fromRgbF(1, 0.4, 0.2, GAMMA) );
    gradient->setColorAt( ( 660.0 - STARTF) / ( STOPF - STARTF), QColor::fromRgbF(1, 0, 0, GAMMA) );
    gradient->setColorAt(1, QColor::fromRgbF(0, 0, 0, 1));

    // Widgets adjustment

    ui->widget->setMinimumWidth(4);
    ui->widget->setMaximumWidth(4);
    ui->label_2->setMinimumWidth(w);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{

    // Measured visible spectrum

    QPainter painter(Map);

    painter.fillRect(0, 0, w, h, *gradient);
    for(int i=0;i<w;i++)
    {
        painter.setPen(QPen(QColor::fromRgbF(0, 0, 0, 1 + sin(0.15*i) )));
        painter.drawLine(i,0,i,h);
    }

    ui->label_2->setPixmap(*Map);

    // Plot spectrum

    ui->plot1->replot();

}


