#include <iostream>
using namespace std;

int main() {
    cout << "**중국집**";
    int menu, num;
    while(true) {
    cout << "짬뽕:1, 짜장:2, 탕수육:3, 종료:4>>";
    cin >> menu;  //cin이 값을 잘못 받았을때 무한반복에 빠짐
    if (menu < 1 || menu > 4) {
        cout << "메뉴 선택 오류" << endl;
        continue;
    }
    if (menu == 4) {
        cout << "영업종료, 감사합니다." << endl;
        break;
    }
    if (menu < 3)
        cout << "몇인분?";
    else
        cout << "몇 개?";
    cin >> num;
    switch (menu) {
        case 1:
            cout << "짬뽕" << num << "인분 나왔습니다.\n";
            break;
        case 2:
            cout << "짜장" << num << "인분 나왔습니다.\n";
            break;
        case 3:
            cout << "탕수육" << num << "개 나왔습니다.\n";
            break;
        }
    }
}