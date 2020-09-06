#include <QtDataVisualization>
#include <QFile>
#include <cmath>

#define a 2
#define b 2
#define depth 40
#define res 35
#define count 20
using namespace QtDataVisualization;

int main(int argc, char **argv)
{
    QGuiApplication app(argc, argv);
    Q3DSurface surface;
    surface.setFlags(surface.flags() ^ Qt::FramelessWindowHint);
    QSurfaceDataArray *data = new QSurfaceDataArray;
    QSurfaceDataRow *dataRow = new QSurfaceDataRow;
    QFile points("Points.txt");
    points.open(QIODevice::WriteOnly);
    QTextStream stream(&points);
    double x = 0, y = 0, z = 0, xmax = count*res, ymax = count*res;
    for (double i = 1; i < 2*count+1; i++)
    {
        for (double j = 0; j < 2*count+1; j++)
        {
            x = 0; y = 0; z = 0;
            x = -xmax+i*res;
            y = -ymax+j*res;
           // y=0;
            z = (x*x/a/a+y*y/b/b)/2/depth;

            stream << x << " " << z << " " << y << "\n";
        }
    stream << "\n";
    }

    points.close();
    points.open(QIODevice::ReadOnly);
    QString temp;
    while (!stream.atEnd())
    {
        stream.readLineInto(&temp);
        if (temp.length() > 0)
        {
            QTextStream coord(&temp);
            coord >> z;
            coord >> x;
            coord >> y;
            *dataRow << QVector3D(z, x, y);
        }
        else
        {
            *data << dataRow;
            dataRow = new QSurfaceDataRow;
        }
    }
    QSurface3DSeries *series = new QSurface3DSeries;
    series->dataProxy()->resetArray(data);
    surface.addSeries(series);
    surface.axisX()->setRange(-1000, 1000);
    surface.axisY()->setRange(-1000, 1000);
    surface.axisZ()->setRange(-800, 800);
    QLinearGradient gr;
    gr.setColorAt(0.0, QColor(199,21,133));
    gr.setColorAt(0.67, QColor(255,182,193));
    gr.setColorAt(1.0, QColor(255,192,203));
    surface.seriesList().at(0)->setBaseGradient(gr);
    surface.seriesList().at(0)->setColorStyle(Q3DTheme::ColorStyleRangeGradient);
    surface.show();
    surface.setWindowState(Qt::WindowMaximized);
    return app.exec();
}
