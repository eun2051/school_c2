#pragma once
#include "Shape.h"

class Rect : public Shape {
public:
   Rect(string n, int w, int h) : Shape(n, w, h) {}; //생성자 만들어주기
   double getArea() {
        return width * height; 
   }
};