#pragma once
#include "Shape.h"

class Oval : public Shape {
public:
   Oval(string n, int w, int h) : Shape(n, w, h) {}; //생성자 만들어주기
   double getArea() { //오버라이딩
        return 3.14 * (width / 2) * (height / 2); //protected 멤버들도 사용가능
   }
};