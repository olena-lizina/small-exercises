#pragma once
#include <iostream>
#include <iomanip>

template<typename T>
void printArr(T *pAr, int size)
{
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(2) << pAr[i] << " ";
    }
    std::cout << std::endl;
}

template<typename T>
void swap(T *pArr, int from, int to)
{
    T tmp = pArr[from];
    pArr[from] = pArr[to];
    pArr[to] = tmp;
}

template<typename T>
void reverceArray(T *pArr, int size)
{
    int realSize = size - 1;
    int last = size - 1;

    for (int i = 0; i < realSize / 2; i++) {
        swap(pArr, i, last - i);
    }
}

