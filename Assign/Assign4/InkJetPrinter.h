#include "BasePrinter.h"
#include <iostream>
using namespace std;

class InkJetPrinter : public BasePrinter {
    int availableInk;
public:
    InkJetPrinter(string m, string mf, int ac, int ai);
    void printInkJet(int pages);
    void print(int pages) override;
    void showStatus() const override;
};