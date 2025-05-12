#include <iostream>
using namespace std;

class Stack {
    int size;
    int* data;
    int tos;
public:
    Stack(int size = 10);
    ~Stack();
    Stack& operator<<(int op2);
    Stack& operator>>(int& op2);
    bool operator!();
};

Stack::Stack(int size) {
    this->size = size;
    data = new int[size];
    tos = 0;
}

Stack::~Stack() { //동적할당 없애주는용도
    if(data)
        delete[] data;
}

//push
Stack& Stack::operator<<(int op2) {
    //stack full?
    if (tos == size)
        return *this;
    data[tos++] = op2;
    return *this;
}

//pop
Stack& Stack::operator>>(int& op2) {
    //stack empty?
    if (tos == 0)
        return *this;
    op2 = data[--tos];
    return *this;
}

//!, isEmpty()
bool Stack::operator!() {
    if (tos == 0) 
        return true;
    else   
        return false;
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
     Stack myStack(3);
     myStack << 10 << 20 << 30 << 40 << 50;
     int a, b, c, d;
     myStack >> a >> b >> c >> d; //d에는 다른 게 나옴
     cout << a << ", " << b << ", "<< c  << ", " << d << endl;
}