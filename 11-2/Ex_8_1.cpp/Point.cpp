#include <iostream>
#include "Point.h"
using namespace std;

void Point::set(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Point::showPoint()
{
    cout << "(" << x << "," << y << ")" << endl;
}