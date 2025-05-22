#pragma once
#include "Shape.h"

class Triangle : public Shape {
    //밑처럼 강제 오버라이딩을 안해준다면 추상 클래스로 인식된다
    //부모 클래스가 추상 클래스이기 때문
public:
    void draw() {
        cout << "삼각형 그리기" << endl;
    }
};