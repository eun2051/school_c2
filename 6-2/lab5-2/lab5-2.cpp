#include <iostream>
#include "MyIntStack.h"
using namespace std;

int main() {
    MyIntStack a;
    for(int i=0; i<11; i++) { // 11개를 푸시한다.
         if(a.push(i)) cout << i << ' '; // 푸시된 값 에코
        else cout << endl << i+1 << " 번째 stack full" << endl;
    }
    int n;
    for(int i=0; i<11; i++) { // 11개를 팝한다.
        if(a.pop(n)) cout << n << ' '; // 팝 한 값 출력
        else cout << endl << i+1 << " 번째 stack empty";
    }
    cout << endl;
}