#pragma once
#include "Shape.h"

class Line : public Shape {
public:
    void draw() {
        cout << "선 그리기" << endl;
    }
};