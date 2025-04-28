#include <iostream>
using namespace std;

int main() {
    string pw, chpw;
    cout << "새 암호를 입력하세요>>";
    getline(cin, pw);
    cout << "새 암호를 다시 한 번 입력하세요>>";
    getline(cin, chpw);
    if (pw == chpw) {
        cout << "같습니다";
    } else 
        cout << "같지 않습니다";
}