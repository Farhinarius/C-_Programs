#include "trielli.h"
#include<math.h>
#define M_PI            3.14159265358979323846


void trielli::paintEvent(QPaintEvent *event)
{
    paint = new QPainter(this);
    a+=0.15;
    paint->scale(1+a, 1+a);

    int x1,x2,x3,y1,y2,y3,x4,yc;
    x1=360;
    y1=450;
    y2=y1;
    x2=440;
    x3=(x2-x1)/2;
    x4=x1+x3;
    y3=y2-(round((sqrt((x2-x1)*(x2-x1)-x3*x3))));

    yc=y1-round((y1-y3)/3);

    paint->translate(x4/(1+a),yc/(1+a));
  //  paint->drawEllipse(0-x3-7.25,-2*round((y1-y3)/3),x2-x1+12.75,x2-x1+12.75);
  //  paint->drawLine(0-x3,round((y1-y3)/3),x3,round((y1-y3)/3));
  //  paint->drawLine(0-x3,round((y1-y3)/3),0,-2*round((y1-y3)/3));
  //  paint->drawLine(0,-2*round((y1-y3)/3),x3,round((y1-y3)/3));



    double t=0; double a = 80;
    a=a*1.021;
    while (t < 2*M_PI)
    {
    x4 =a*((3*cos(t) + cos(3*t)) / 4);
    yc =a*((3*sin(t) - sin(3*t)) / 4);

    paint->drawPoint(round(x4),round(yc));
    t = t + 0.01;
    }

}

void trielli::timerEvent(QTimerEvent *event)
{
    if (flag)
    {
    paintEvent(nullptr);
    this->update();
    }
}

void trielli::stopping()
{
    flag=false;
}
