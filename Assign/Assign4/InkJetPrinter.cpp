#include "InkJetPrinter.h"
#include <iostream>
using namespace std;

InkJetPrinter::InkJetPrinter(string m, string mf, int ac, int ai)
    : BasePrinter(m, mf, ac), availableInk(ai) {}

void InkJetPrinter::printInkJet(int pages) {
    if (availableCount < pages) {
        cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
        return;
    }
    if (availableInk < pages) {
        cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
        return;
    }
    availableCount -= pages;
    availableInk -= pages;
    printedCount += pages;
    cout << "프린트하였습니다." << endl;
}

void InkJetPrinter::print(int pages) {
    printInkJet(pages);
}

void InkJetPrinter::showStatus() const {
    cout << "잉크젯 : " << model << " , " << manufacturer << " , 남은 종이 " << availableCount << "장 , 남은 잉크 " << availableInk << endl;
}
