#include <iostream>
using namespace std;

int main() {
    while(true) {
        string ans;
        cout << "종료하고 싶으면 yes를 입력하세요>>";
        getline(cin, ans,'\n');
        if (ans == "yes") {
            cout << "종료합니다..." << endl;
            break;
        }
        continue;
    }
}