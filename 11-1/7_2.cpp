#include <iostream>
using namespace std;

class Stack {
    int stack;
public:
    friend Stack& operator << (Stack& op1, int op2);
    friend Stack& operator >> (Stack& op1, int op2);
    bool operator !();
};

bool Stack::operator !() {
    if (stack == 0) return true;
    else return false;
}

Stack& operator << (Stack& op1, int op2) {
    
}

Stack& operator >> (Stack& op1, int op2) {

}

int main() {
    Stack stack; // 생성자에 인자를 주면 그 크기의 스택을 만들고 없을 경우 기본 크기는 10
    stack << 3 << 5 << 10; // 3, 5, 10을 순서대로 푸시
    while(true) {
        if(!stack) break; // 스택 empty
        int x;
        stack >> x; // 스택의 탑에 있는 정수 팝
        cout << x << ' ';
    }
    cout << endl;
}