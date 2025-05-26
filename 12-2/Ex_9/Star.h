#pragma once
#include "Shape.h"
class Star : public Shape {
public:
    void draw() {
        cout << "별 그리기" << endl;
    }
}