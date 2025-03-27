#include <iostream>
#include "Random.h"
using namespace std;

int main() {
    Random r;
    cout << "0~" << RAND_MAX << "까지 난수 10개" << endl;
    for (int i = 0; i < 10; i++) {
        cout << r.next() << ' ';
    }
    cout << endl;
    cout << "1 ~ 6 까지 난수 10개 \n";
    for (int i = 0; i < 10; i++) {
        cout << r.nextInRange(1, 6) << ' ';
    }
    cout << endl;
}