#include "SumIntegers.h"
#include <iostream>
#include <fstream>

long sumInt(const char *fileName)
{
    using namespace std;
    ifstream file;
    file.open(fileName);

    if (!file.is_open()) {
        std::cout << "Error in opening file for reading: " << fileName;
        return -1;
    }

    long res = 0;
    string line;

    while (!file.eof()) {
        getline(file, line);
        res += stoi(line);
    }

    return res;
}
