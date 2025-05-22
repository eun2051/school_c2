#include <iostream>
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
#include "Star.h"

int main() {
    Shape s;
    s.paint();
    s.draw();
    Rect r;
    r.paint();
    r.draw();
    Circle c;
    c.paint();
    Shape* sp= &r;
    Rect * rp = &r;
    sp->paint();
    sp->draw();
    rp->paint();
    rp->draw();
    Shape* shapes[5];
    shapes[0] = new Circle();
    shapes[1] = new Line();
    shapes[2] = new Line();
    shapes[3] = new Rect();
    shapes[4] = new Circle();
    for( int i = 0; i < 5; i++)
        shapes[i]->paint();
}