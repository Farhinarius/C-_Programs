#include "triangle.h"
#include<math.h>

void triangle::paintEvent(QPaintEvent *event)
{
    paint = new QPainter(this);
    a+=0.15;
    paint->scale(1+a,1+a);

    int x1,x2,x3,y1,y2,y3,xc,yc;
    x1=360; // координата х первой точки треугольника
    y1=450; // координата у второй точки треугольника
    y2=y1; // координата y для второй точки остаётся такой же
    x2=440; // координата x смещается вправо
    x3=(x2-x1)/2; // координата высчитывающая размер половины треугольника
    xc=x1+x3; // центр треугольника по оси х
    y3=y2-(round((sqrt((x2-x1)*(x2-x1)-x3*x3)))); // ищем y3 второстепенная координата

    yc=y1-round((y1-y3)/3); // координата yc - центр по оси у

    paint->translate(xc/(1+a),yc/(1+a));
 //   paint->drawLine(0-x3,round((y1-y3)/3),x3,round((y1-y3)/3)); // 127
 //   paint->drawLine(0-x3,round((y1-y3)/3),0,-2*round((y1-y3)/3)); // 127
 //   paint->drawLine(0,-2*round((y1-y3)/3),x3,round((y1-y3)/3));

    paint->drawLine(0,-2*round((y1-y3)/3),0,round((y1-y3)/3));
}


 void triangle:: timerEvent(QTimerEvent *event)
 {
     if (flag)
     {
     paintEvent(nullptr);
     this->update();
     }

 }

 void triangle::stopping()
 {
     flag=false;
 }
