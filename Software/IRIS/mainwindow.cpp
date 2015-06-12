#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    bool status;

    x0 = 0;
    x1 = 0;
    a = 1.0;
    b = 0.0;

    cursorEnabled=true;

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

    // give the axes some labels:
    ui->plot1->xAxis->setLabel("nm");
    ui->plot1->xAxis->setRange(200, 1200);

    for(int i=0;i<4096;i++)
        x.append( (double) i );

    QVector<double> ticks_label;

    ticks_label << 300 << 350 << 400 << 450 << 500 << 550 << 600 << 650 << 700 << 750 << 800 << 850 << 900;

    ui->plot1->yAxis->setRange(0,65536);

    CaptureTimer = new QTimer(this);

    CaptureTimer->setInterval(300);
    connect(CaptureTimer, SIGNAL(timeout()), this, SLOT(capture()));
    connect(ui->plot1, SIGNAL(mousePress(QMouseEvent*)), this, SLOT(mouseReleaseEvent(QMouseEvent*)));

    CaptureTimer->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::capture()
{

    int len;

    Tc[0] = 0x0a;

    for(int i=0;i<MAX_TM_SIZE;i++)
        Tm[i]=i;

    Com->write((char *)Tc,1);

    len = Com->read((char *)Tm, MAX_TM_SIZE);

    if ( len > 0 )
    {
        y.clear();
        for(int i=0;i<len/4;i++)
            y.append(   65535 - 7000 - (double) ( ( Tm[4*i+0] + ( Tm[4*i+1] << 8 ) + ( Tm[4*i+2] << 16 ) + ( Tm[4*i+3] << 24 )  ) ) / ( double ) ( Tc[0] + 1 )) ;

        ui->plot1->graph(0)->setData(x,y);
        ui->plot1->replot();
    }
}

void MainWindow::ManageCursor(QCustomPlot *customPlot, QCPCursor *cursor, double x, double y, QPen pen)
{
    if(cursorEnabled)
    {
        if(cursor->vLine) customPlot->removeItem(cursor->vLine);
        cursor->vLine = new QCPItemLine(customPlot);
        customPlot->addItem(cursor->vLine);
        cursor->vLine->setPen(pen);
        cursor->vLine->start->setCoords( x, QCPRange::minRange);
        cursor->vLine->end->setCoords( x, QCPRange::maxRange);
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent* event)
{
    QCustomPlot *customPlot=ui->plot1;

    double x=customPlot->xAxis->pixelToCoord(event->pos().x());
    double y=customPlot->yAxis->pixelToCoord(event->pos().y());

    if(event->button() == Qt::LeftButton)
    {
        ManageCursor(customPlot, &cursor1, x, y, QPen(Qt::black));
        x0 = x;
        ui->label_x0->setText(QString::number(x));
    }
    else
    {
        ManageCursor(customPlot, &cursor2, x, y, QPen(Qt::blue));
        x1 = x;
        ui->label_x1->setText(QString::number(x));
    }
    customPlot->replot();
    cursorEnabled=true;

}

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

    brush=new QBrush(*g);

    pen0 = new QPen();
    pen0->setColor(QColor(Qt::red));

    pen1 = new QPen();
    pen1->setColor(QColor(Qt::green));

    pen2 = new QPen();
    pen2->setColor(QColor(Qt::blue));

    pen3 = new QPen();
    pen3->setWidth(2);
    pen3->setColor(Qt::black);

    ui->plot1->graph(0)->setBrush(*brush);
    ui->plot1->graph(0)->setPen(*pen0);

    // Base visible spectrum

    Map = new QPixmap(w,h);

    // Widgets adjustment

    ui->widget->setMinimumWidth(4);
    ui->widget->setMaximumWidth(4);

}

void MainWindow::closeEvent (QCloseEvent *event)
{
    Com->close();
}

void MainWindow::on_toolButton_clicked()
{
    a = fabs(ui->sbB->value() - ui->SBa->value() ) / ( (float)x1 - (float)x0 ) ;
    b = ui->SBa->value() - a * (float)x0 ;
    qDebug() << a << " " << b;

    x.clear();

    for(int i=0;i<4096;i++)
        x.append( (float)i*a+b );

    ui->plot1->graph(0)->setData(x,y);
    ui->plot1->replot();
}
