#include <iostream>
using namespace std;
class Rect {
    int width, height;
public:
    Rect(int width = 0, int height = 0) : width(width), height(height) {}
    void show();
    Rect operator+(Rect op2);
    Rect operator+(int op2); //매개변수가 달라짐
    friend bool operator==(Rect op1, Rect op2);
};


Rect operator+(int op1, Rect op2) { //연산자 중복
    return op2 + op1;
}

Rect Rect::operator+(int op2) {
    Rect tmp(width + op2, height + op2);
    return tmp;
}

Rect Rect::operator+(Rect op2) {
    Rect tmp(width + op2.width, height + op2.height);
    return tmp;
}

void Rect::show() {
    cout << "width: " << width << ", height: " << height << endl;
}

bool operator==(Rect op1, Rect op2) { //friend로 선언
    if(op1.height == op2.height && op1.width == op2.width) //private로 되어있는 height, width도 접근 가능
        return true;
    else
        return false;
}

int main() 
{
    Rect a(3,5), b(2, 3), c(3,5), d;
    d = a+b;
    d.show();
    if (a == c) cout << "a,c equal" << endl;
    else cout  << "a,c not equal" << endl;
    d = b + 3;
    d.show();
    d = 3 + b;
    d.show();
}