#include <iostream>
#include "ArrayUtility2.h"
using namespace std;

int main() {
    int x[5], y[5];
    cout << "x[5] :";
    for (int i=0; i<5; i++)
        cin >> x[i];
    cout << "y[5]: ";
    for (int i=0; i<5; i++)
        cin >> y[i];
    int* p = ArrayUtility2::concat(x, y, 5);
    cout << "x+y : ";
    for (int i = 0; i < 10; i++)
        cout << p[i] << ' ';
    cout << endl;
    //실습 문제 만들기
}