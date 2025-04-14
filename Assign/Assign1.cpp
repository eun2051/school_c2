#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    while (true) {
        cout << "입력식 : ";
        getline(cin, s, '\n'); // 문자열 입력

        if (s == "end") {
            cout << "종료합니다." << endl;
            break;
        }

        int result = 0;
        int startIndex = 0;
        char op = 0;
        bool error = false;

        while (true) {
            int index = -1;
            for (char c : "+-*/") {
                int fIndex = s.find(c, startIndex);
                if (fIndex != -1 && (index == -1 || fIndex < index)) {
                    index = fIndex;
                    op = c;
                }
            }

            string part;
            if (index == -1) {
                part = s.substr(startIndex);
                if (part == "") {
                    cout << "입력식이 잘못되었습니다." << endl;
                    error = true;
                    break;
                }
                int num = stoi(part);
                if (op == 0) result = num;
                else if (op == '+') result += num;
                else if (op == '-') result -= num;
                else if (op == '*') result *= num;
                else if (op == '/') {
                    if (num == 0) {
                        cout << "0으로 나눌 수 없습니다." << endl;
                        error = true;
                        break;
                    }
                    result /= num;
                }
                break; // 마지막 숫자 처리 후 종료
            }

            int count = index - startIndex;
            part = s.substr(startIndex, count);

            if (part == "") {
                cout << "입력식이 잘못되었습니다." << endl;
                error = true;
                break;
            }

            int num = stoi(part);
            if (op == 0) result = num;
            else if (op == '+') result += num;
            else if (op == '-') result -= num;
            else if (op == '*') result *= num;
            else if (op == '/') {
                if (num == 0) {
                    cout << "0으로 나눌 수 없습니다." << endl;
                    error = true;
                    break;
                }
                result /= num;
            }

            startIndex = index + 1;
        }

        if (!error) {
            cout << "결과 : " << result << endl;
        }
    }
}
