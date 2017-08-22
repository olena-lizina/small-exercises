#include <QCoreApplication>
#include "calcfibinachchi.h"
#include <iostream>
#include <iomanip>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    const int SIZE = 15;

    for (int i = 0; i < SIZE; i++) {
        std::cout << std::setw(4) << calcFibonac(i) << " ";
    }

    return a.exec();
}
