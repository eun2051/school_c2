#include <iostream>
using namespace std;

int main() {
    cout << "5 개의 실수를 입력하라>>";
    double input, max;
    cin >> input;
    max = input;
    for (int i = 0; i < 4; i ++){
        cin >> input;
        if (input > max) {
            max = input; //더 큰 값을 max에 저장
        }
    }
    cout << "제일 큰 수 = " << max << endl;
}