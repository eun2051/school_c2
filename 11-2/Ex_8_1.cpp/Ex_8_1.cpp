#include <iostream>
#include "Point.h"
#include "ColorPoint.h"
using namespace std;

int main(){
    Point a(100, 200);
    a.showPoint();
    a.set(300, 400);
    a.showPoint();
    ColorPoint c;
    c.set(1000, 2000);
    c.showPoint();
    c.setColor("빨간색");
    c.showColorPoint();
}