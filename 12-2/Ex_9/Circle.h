#pragma once
#include "Shape.h"

class Circle: public Shape {
public:
    void draw() {
        cout << "원 그리기" << endl;
    }
};