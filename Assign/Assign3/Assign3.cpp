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
    cout << "합친 정수 배열을 출력한다" << endl;
    for (int i = 0; i < 10; i++)
        cout << p[i] << ' ';
    cout << endl;
    int retSize;
    int* result = ArrayUtility2::remove(x,y,5,retSize);
    cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retSize << endl;
    for (int i = 0; i < retSize; i++){
        cout << result[i] << " ";
    }
    cout << endl;
}