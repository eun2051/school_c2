#include <iostream>
#include "Random.h"
using namespace std;

int main() {
    Random::seed();
    for (int i = 0; i < 10; i++) {
        cout << Random::nextInt(1, 100) << ' ';
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << Random::nextAlphabet() << ' ';
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << Random::nextDouble() << ' ';
    }
    cout << endl;
}