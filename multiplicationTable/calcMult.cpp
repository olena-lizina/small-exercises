#include "calcMult.h"
#include <iostream>
#include <iomanip>

void calcMult(int from, int to)
{
    if (from > to)
        return;

    std::cout << std::setw(4) << " ";
    for (int i = from; i <= to; i++)
    {
        std::cout << std::setw(4) << i;
    }
    std::cout << std::endl;

    for (int i = from; i <= to; i++)
    {
        std::cout << std::setw(4) << i;
        for (int j = from; j <= to; j++)
        {
            std::cout << std::setw(4) << i * j;
        }
        std::cout << std::endl;
    }
}
