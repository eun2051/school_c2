#include <iostream>
#include "Shape.h"
#include "Oval.h"
#include "Rect.h"
#include "Triangular.h"

int main() {
    Shape *p[3];
    p[0] = new Oval("빈대떡", 10, 20);
    p[1] = new Rect("찰떡", 30, 40);
    p[2] = new Triangular("토스트", 30, 40);
    for(int i=0; i<3; i++)
        cout << p[i]->getName() << " 넓이는 " << p[i]->getArea() << endl;
        //동적 바인딩이 일어나여 각각의 함수가 불리게 된다
    for(int i=0; i<3; i++) delete p[i];
}