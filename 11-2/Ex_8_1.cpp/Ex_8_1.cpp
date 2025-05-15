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

    ColorPoint* cp = &c;
    cp->showPoint();
    cp->showColorPoint();
    Point* p = cp; //upcasting
    p->set(123,123);
    p->showPoint();
    //p->showColorPoint();
    cp = (ColorPoint*)p; //downcasting
    cp->showColorPoint();
    cp = (ColorPoint*) & a; //내가 보정한것
    cp->showPoint();
    cp->set(9,9);
    cp->showPoint();
    cp->setColor("파란색"); //문제가 됨
    cp->showColorPoint(); //문제가 됨
}