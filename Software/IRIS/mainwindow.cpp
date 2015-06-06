#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::paintEvent(QPaintEvent *)
{

    w=ui->plot1->size().width() ;
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

    pen0 = new QPen();
    pen0->setColor(QColor(Qt::red));

    pen1 = new QPen();
    pen1->setColor(QColor(Qt::green));

    pen2 = new QPen();
    pen2->setColor(QColor(Qt::blue));

    pen3 = new QPen();
    pen3->setWidth(2);
    pen3->setColor(Qt::black);

    //ui->plot1->graph(0)->setBrush(*b);
    ui->plot1->graph(0)->setPen(*pen0);
    //ui->plot1->graph(1)->setPen(*pen1);
    //ui->plot1->graph(2)->setPen(*pen2);
    //ui->plot1->graph(3)->setPen(*pen3);

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
    //ui->label_2->setMinimumWidth(w);

}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    bool status;

    //
    // Serial port setup
    //

    Com = new QSerialPort();

    //Com->setPortName("/dev/tty.usbmodem1661");
    Com->setPortName("/dev/tty.usbserial-FTYT8TONA");
    Com->setBaudRate(460800);
    Com->setDataBits(QSerialPort::Data8);
    Com->setParity(QSerialPort::NoParity);
    Com->setStopBits(QSerialPort::OneStop);

    status = Com->open(QIODevice::ReadWrite);

    if ( !status ) qDebug() << "Unable to open serial port";

    ui->setupUi(this);

    //
    // Build spectrum
    //

    // create graph and assign data to it:
    ui->plot1->addGraph();
    //ui->plot1->addGraph();
    //ui->plot1->addGraph();
    //ui->plot1->addGraph();

    //ui->plot1->graph(0)->setData(x, y);
    // give the axes some labels:
    ui->plot1->xAxis->setLabel("nm");
    //ui->plot1->yAxis->setLabel("y");
    // set axes ranges, so we see all data:
    //ui->plot1->xAxis->setRange(STARTF, STOPF);
    ui->plot1->xAxis->setRange(0, 1200);

    for(int i=0;i<4096;i++)
        x.append( (double) i );

    QVector<double> ticks_label;

    ticks_label << 300 << 350 << 400 << 450 << 500 << 550 << 600 << 650 << 700 << 750 << 800 << 850 << 900;

    //ui->plot1->xAxis->setAutoTicks(false);
    //ui->plot1->xAxis->setTickVector(ticks_label);
    ui->plot1->yAxis->setRange(0,30000);

    //ui->plot1->adjustSize();

    CaptureTimer = new QTimer(this);

    CaptureTimer->setInterval(100);
    connect(CaptureTimer, SIGNAL(timeout()), this, SLOT(capture()));

    CaptureTimer->start();
}

MainWindow::~MainWindow()
{
    Com->close();
    delete ui;
}

void MainWindow::on_toolButton_clicked()
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

}


void MainWindow::capture()
{

    int len;

    Tc[0] = 0x00;

    for(int i=0;i<MAX_TM_SIZE;i++)
        Tm[i]=0xAA;

    Com->write((char *)Tc,1);

    len = Com->read((char *)Tm, MAX_TM_SIZE);

    if ( len > 0 )
    {
        //x.clear();
        y.clear();
        for(int i=0;i<len/4;i++)
        {
            //x.append( (double) i );
            y.append(   65535 - 7000 - (double) ( ( Tm[4*i+0] + ( Tm[4*i+1] << 8 ) + ( Tm[4*i+2] << 16 ) + ( Tm[4*i+3] << 24 )  ) ) / ( double ) ( Tc[0] + 1 )) ;
        }

        ui->plot1->graph(0)->setData(x,y);
        ui->plot1->replot();
    }
}

void MainWindow::on_pushButton_clicked()
{
        Tc[0] = 0x04;
        Com->write((char *)Tc,1);
}

void MainWindow::on_pushButton_2_clicked()
{
    int len = Com->read((char *)Tm, MAX_TM_SIZE);

    qDebug() << len;
}
