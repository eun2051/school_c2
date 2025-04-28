#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle() {radius = 1;}
    Circle(int radius) {this->radius = radius;}
    void setRadius(int radius) {this->radius = radius;}
    double getArea() {return 3.14*radius*radius;}
};

Circle getCircle() {
    Circle tmp(30);
    return tmp; //객체 tmp 리턴
}

int main() {
    Circle c; //객체 생성, radius = 1로 초기화 됨
    cout << c.getArea() << endl;
    
    c = getCircle(); //tmp 객체가 c에 복사 - 30됨
    cout << c.getArea() << endl;
}