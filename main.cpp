#include "CalculatorProj.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculatorProj w;
    w.show();
    return a.exec();
}
