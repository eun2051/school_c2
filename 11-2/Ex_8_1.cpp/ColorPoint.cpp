#include "ColorPoint.h"
#include <iostream>
using namespace std;

void ColorPoint::setColor(string color)
{
    this->color = color;
}

void ColorPoint::showColorPoint() {
    cout << color;
    //cout << x << y;
    showPoint();
}