#include "qspectroviewfinder.h"

#include <QPainter>

QSpectroViewfinder::QSpectroViewfinder(QWidget *parent) :
    QCameraViewfinder(parent)
{
    Ysample = this->height()/2;
}

void QSpectroViewfinder::updateY(double y)
{
    Ysample = this->height() * y;
}

void QSpectroViewfinder::paintEvent(QPaintEvent *event)
{

    QCameraViewfinder::paintEvent(event);

    QPainter painter( this );
    painter.setPen( QColor("Yellow") );
    painter.drawLine( 0, Ysample, this->width(), Ysample );

}

