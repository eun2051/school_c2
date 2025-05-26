#pragma once
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw(); //오버라이팅
    //virtual void draw() = 0; // 순수 가상 함수
    //순수 가상함수로 만드는 경우 이 클래스는 추상클래스가 됨
    void paint();
};