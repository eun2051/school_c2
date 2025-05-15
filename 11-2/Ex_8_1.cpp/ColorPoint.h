#pragma once
#include <string>
#include "Point.h"
using namespace std;

class ColorPoint : public Point {
    string color;
public:
    void setColor(string color);
    void showColorPoint();
};