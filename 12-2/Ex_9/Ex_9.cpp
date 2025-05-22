#include <iostream>
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
#include "Star.h"
#include "Triangle.h"

int main() {
    Shape s;
    s.paint();
    s.draw();
    // 추상 클래스의 머가 안되므로 순수 가상함수로 만든경우 위 세개는 작동 X

    Rect r;
    r.paint();
    r.draw();
    Circle c;
    c.paint();
    Shape* sp= &r;
    Rect * rp = &r;
    sp->paint();
    sp->draw();
    rp->paint();
    rp->draw();
    Shape* shapes[5];
    shapes[0] = new Circle();
    shapes[1] = new Line();
    shapes[2] = new Line();
    shapes[3] = new Rect();
    shapes[4] = new Circle();
    // shapes[4] = new Triangle();
    // 부모 클래스를 상속 받았을때 오버라이딩 안해주면 Triangle도 추상 클래스
    for( int i = 0; i < 5; i++)
        shapes[i]->paint();
}