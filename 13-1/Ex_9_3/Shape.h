#pragma once
#include <iostream>
using namespace std;

class Shape {
    Shape* next;
protected:
    virtual void draw() = 0;
public:
    Shape() { next = nullptr;}
    void paint() {draw();}
    Shape* getnext() {return next;}
    Shape* add(Shape* p) {next = p; return p;} //새로운 도형을 뒤에 붙이는 것
};