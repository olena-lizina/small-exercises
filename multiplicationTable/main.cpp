#include <QCoreApplication>
#include "calcMult.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    calcMult(2, 12);

    return a.exec();
}
