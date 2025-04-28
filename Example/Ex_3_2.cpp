#include <iostream>
using namespace std;

class Circle {
public: 
    int radius;
    Circle(); //매개변수 없는 생성자
    Circle(int r); //매개변수 있는 생성자
    double getArea();
};
//Circle::Circle() : Circle(1) {} // 위임 생성자

Circle::Circle() {
    radius = 1;
    cout << "반지름" << radius << "원 생성" << endl;
}

Circle::Circle(int r) { //타겟생성자
    radius = r;
    cout << "반지름" << radius << "원 생성" << endl;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}

//함수 구현부
int main() {
    Circle donut; //매개 변수 없는 생성자 호출
    double area = donut.getArea();
    cout << "donut 면적은" << area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "pizza 면적은" << area << endl;
}