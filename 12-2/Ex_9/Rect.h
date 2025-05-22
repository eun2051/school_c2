#pragma once
#include "Shape.h"

class Rect : public Shape {
public:
    void draw() {
        cout << "사각형 그리기" << endl;
    }
};