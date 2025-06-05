#include <iostream>
#include <iomanip> //조작자 함수 setw
#include <cctype> //isprint()
using namespace std;

int main () {
    for (int i = 0; i<4; i++)
        cout << setw(4) << "dec" << setw(5) << "hexa" << setw(5) << "char"; //폭을 정해줌 setw
    cout << endl;
    for (int i = 0; i < 4; i++)
        cout << setw(4) << "---" << setw(5) << "---" << setw(5) << "---";
    cout << endl;
    for (int i = 0; i < 128; i++) {
        cout << setw(4) << dec << i << setw(5) << hex << i << setw(5) << (isprint(i) ? (char)i : '.'); //print 가능한지 검사
        if( i % 4 == 3) cout << endl;
    }
}