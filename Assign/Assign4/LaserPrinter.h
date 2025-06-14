#include "BasePrinter.h"
#include <iostream>
using namespace std;

class LaserPrinter : public BasePrinter {
    int availableToner;
public:
    LaserPrinter(string m, string mf, int ac, int at);
    void printLaser(int pages);
    void print(int pages) override;
    void showStatus() const override;
};