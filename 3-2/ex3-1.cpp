#include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    double getArea();
};

double Circle :: getArea() {
    return 3.14 * radius * radius;
}

int main() {
    Circle donut; //객체 생성
    Circle pizza;
    donut.radius = 1;
    cout << "donut : " << donut.getArea() << endl;

    pizza.radius = 10;
    cout << "pizza : " << pizza.getArea() << endl;
}