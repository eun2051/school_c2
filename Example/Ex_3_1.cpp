#include <iostream>
using namespace std;

class Rectangle {
public:
    int width;
    int height;
    int getArea(); //   면적을 계산하여 리턴 함수
};

int Rectangle::getArea() {
    return width*height;
}

int main() {
    Rectangle rect;
    rect.width = 3;
    rect.height = 5;
    cout << "사각형의 면적은" << rect.getArea() << endl;
}