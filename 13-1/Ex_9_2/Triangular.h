#pragma once
#include "Shape.h"

class Triangular : public Shape {
public:
   Triangular(string n, int w, int h) : Shape(n, w, h) {}; //생성자 만들어주기
   double getArea() { 
        return 0.5 * width * height; 
   }
};