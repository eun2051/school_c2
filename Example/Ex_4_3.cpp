#include <iostream>
using namespace std;

int main() {
    int *p;

    p = new int;
    if(!p) { //p = NULL >> 메모리할당 실패
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }
    *p = 5;
    int n = *p;
    cout << "*p =" << *p << '\n';
    cout << "n =" << n << '\n';
    
    delete p; //할당받은 메모리 반환
}