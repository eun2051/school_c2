#include <iostream>
using namespace std;

bool checkInputError() { //그 입력이 정상이었는지 아니었는지 확인
    if(cin.fail()) {
        cin.clear();
        cin.ignore(128, '\n'); //사용자가 얼마나 누를지 모르니까 넉넉하게 지움
        //cin의 버퍼를 지웠으니 fail의 체크표시를 없애야함
        cout << "입력오류" << endl;
        return true;
    } 
    else
        return false;
}

int main() {
    cout << "**중국집**";
    int menu, num;
    while(true) {
    cout << "짬뽕:1, 짜장:2, 탕수육:3, 종료:4>>";
    cin >> menu;

    if (checkInputError())
        continue;

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
    if (checkInputError())
        continue;
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