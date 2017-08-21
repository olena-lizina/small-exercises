#include <QCoreApplication>
#include <cstring>
#include "reverse_array.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    const int SIZE = 10;
    char *str = new char[SIZE];
    memcpy(str, "Hello mom", sizeof(char)*10);
    printArr<char>(str, SIZE);
    reverceArray<char>(str, SIZE);
    printArr<char>(str, SIZE);

    int res = a.exec();

    delete [] str;

    return res;
}
