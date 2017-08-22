#include "calcfibinachchi.h"

unsigned long long calcFibonac(int num)
{
    if (num < 2)
        return num;

    unsigned long long fib1 = 1;
    unsigned long long fib2 = 1;
    unsigned long long res = 0;
    int i = 2;

    while (i <= num)
    {
        res = fib1 + fib2;
        fib1 = fib2;
        fib2 = res;
        i++;
    }

    return res;
}
