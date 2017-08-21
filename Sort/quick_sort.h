#ifndef QUICK_SORT_H
#define QUICK_SORT_H

/**
 * @brief swap 2 elements in array
 */
template<typename T>
void swap(T *pArr, int fromIndex, int toIndex)
{
    T tmp = pArr[fromIndex];
    pArr[fromIndex] = pArr[toIndex];
    pArr[toIndex] = tmp;
}

/**
 * @brief partition - separate array to 2 subarrays
 * @return place where was separated
 */
template<typename T>
int partition(T *pArr, int fromIndex, int toIndex)
{
    T elem = pArr[toIndex];
    int i = fromIndex - 1;

    for (int j = fromIndex; j < toIndex; j++) {
        if (pArr[j] < elem) {
            ++i;
            swap(pArr, i, j);
        }
    }

    if (pArr[toIndex] <= pArr[i + 1]) {
        swap(pArr, i + 1, toIndex);
    }

    return i + 1;
}

/**
 * @brief sort - ascending sort
 * @param int* - array to sort
 * @param int - position of start element
 * @param int - position of last element
 */
template<typename T>
void sort(T *pArr, int fromIndex, int toIndex)
{
    if (fromIndex < toIndex) {
        int res = partition(pArr, fromIndex, toIndex);
        sort(pArr, fromIndex, res - 1);
        sort(pArr, res + 1, toIndex);
    }
}

#endif // QUICK_SORT_H
