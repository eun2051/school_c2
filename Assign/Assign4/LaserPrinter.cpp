#include "LaserPrinter.h"
#include <iostream>
using namespace std;

LaserPrinter::LaserPrinter(string m, string mf, int ac, int at)
    : BasePrinter(m, mf, ac), availableToner(at) {}

void LaserPrinter::printLaser(int pages) {
    if (availableCount < pages) {
        cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
        return;
    }
    if (availableToner < pages) {
        cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
        return;
    }
    availableCount -= pages;
    availableToner -= pages;
    printedCount += pages;
    cout << "프린트하였습니다." << endl;
}

void LaserPrinter::print(int pages) {
    printLaser(pages);
}

void LaserPrinter::showStatus() const {
    cout << "레이저 : " << model << " , " << manufacturer << " , 남은 종이 " << availableCount << "장 , 남은토너 " << availableToner << endl;
}
