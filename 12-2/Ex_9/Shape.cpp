#include "Shape.h"
void Shape::draw() {
    cout << "Shape 그리기" << endl;
}
// 순수 가상 함수로 만든 경우 위는 모두 주석 처리해야함
void Shape::paint() {
    draw();
}