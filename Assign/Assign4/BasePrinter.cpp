#include "BasePrinter.h"
#include <iostream>
using namespace std;

BasePrinter::BasePrinter(string m, string mf, int ac)
    : model(m), manufacturer(mf), printedCount(0), availableCount(ac) {}

BasePrinter::~BasePrinter() {}
