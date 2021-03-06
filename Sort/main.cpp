#include <QCoreApplication>
#include <iostream>
#include <iomanip>

#include "quick_sort.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    const int SIZE = 8;
    float arr[SIZE] = {2.2, 8.5, 3.0, 1.15, 7.4, 5.2, 6.9, 4.2};

    printArr<float>(arr, SIZE);
    sort<float>(arr, 0, SIZE);
    printArr<float>(arr, SIZE);

    return a.exec();
}
