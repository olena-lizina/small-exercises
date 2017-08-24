#include <QCoreApplication>
#include "SumIntegers.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "Result: " << sumInt("D:/Projects/My small exercise/SumIntFromFile/integers.txt");

    return a.exec();
}
