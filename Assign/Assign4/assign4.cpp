#include <iostream>
#include "InkJetPrinter.h"
#include "LaserPrinter.h"
using namespace std;

int main() {
    InkJetPrinter* inkjet = new InkJetPrinter("Officejet V40", "HP", 5, 10);
    LaserPrinter* laser = new LaserPrinter("SCX-6X45", "삼성전자", 3, 20);

    cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
    inkjet->showStatus();
    laser->showStatus();

    while (true) {
        cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
        int type, pages;
        cin >> type >> pages;
        if (type == 1) {
            inkjet->print(pages);
        } else if (type == 2) {
            laser->print(pages);
        }

        inkjet->showStatus();
        laser->showStatus();

        cout << "계속 프린트 하시겠습니까(y/n)>>";
        char cont;
        cin >> cont;
        if (cont == 'n' || cont == 'N') break;
    }

    delete inkjet;
    delete laser;
}