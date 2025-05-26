#pragma once 
#include "Shape.h"

class Rect : public Shape {
public:
    Rect (string n, int w, int h) : Shape(n, w, h) {};
    double getArea() {
        return width * height;
    }
};