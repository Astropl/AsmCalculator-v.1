#include "asmcalculator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AsmCalculator w;
    w.show();
    return a.exec();
}
