#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    while (true) {
        cout << "입력식 : ";
        getline(cin, s, '\n');

        if (s == "end") {
            cout << "종료합니다." << endl;
            break;
        }

        int nums[100]; // 숫자 저장 배열
        char ops[100]; // 연산자 저장 배열
        int numCount = 0, opCount = 0;
        string temp = "";
        bool error = false;

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (isdigit(c)) {
                temp += c;
            } else if (c == '+' || c == '-' || c == '*' || c == '/') {
                if (temp == "") {
                    error = true;
                    break;
                }
                nums[numCount++] = stoi(temp);
                ops[opCount++] = c;
                temp = "";
            } else {
                error = true;
                break;
            }
        }

        if (temp == "") {
            error = true;
        } else {
            nums[numCount++] = stoi(temp);
        }

        if (error) {
            cout << "입력식이 잘못되었습니다." << endl;
            continue;
        }

        //*, / 우선 계산
        for (int i = 0; i < opCount; ) {
            if (ops[i] == '*' || ops[i] == '/') {
                if (ops[i] == '/' && nums[i+1] == 0) {
                    cout << "0으로 나눌 수 없습니다." << endl;
                    error = true;
                    break;
                }

                int result = (ops[i] == '*') ? nums[i] * nums[i+1] : nums[i] / nums[i+1];
                nums[i] = result;

                for (int j = i + 1; j < numCount - 1; j++) {
                    nums[j] = nums[j + 1];
                }
                for (int j = i; j < opCount - 1; j++) {
                    ops[j] = ops[j + 1];
                }

                numCount--;
                opCount--;
            } else {
                i++;
            }
        }

        if (error) continue;

        //+, - 계산
        int result = nums[0];
        for (int i = 0; i < opCount; i++) {
            if (ops[i] == '+') result += nums[i + 1];
            else result -= nums[i + 1];
        }

        cout << "결과 : " << result << endl;
    }
}
