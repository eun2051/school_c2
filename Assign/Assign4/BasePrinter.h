#pragma once
#include <iostream>
#include <string>
using namespace std;

class BasePrinter {
protected:
    string model;
    string manufacturer;
    int printedCount;
    int availableCount;
public:
    BasePrinter(string m, string mf, int ac);
    virtual ~BasePrinter();
    virtual void print(int pages) = 0;
    virtual void showStatus() const = 0;
};