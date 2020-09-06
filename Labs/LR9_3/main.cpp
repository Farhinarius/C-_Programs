#include "calcDialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalcDialog * dialog = new CalcDialog();
    dialog->show();
    return a.exec();
}
