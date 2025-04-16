#include "Dept.h"
#include <iostream>
using namespace std;

//복사 생성자
//깊은 복사
//얕은 복사 (컴파일러가 스스로 만들어주는거)
Dept::Dept(const Dept & dept) {
    this->size = dept.size;
//    this->scores = dept.scores; //얕은복사
    this->scores = new int[size]; //새롭게 생성 //깊은 복사
    for(int i = 0; i < size; i++)
        this->scores[i] = dept.scores[i];
}   

Dept::~Dept() {
    if (scores != nullptr)
        delete[] scores;
}

void Dept::read() {
    cout << size << "개 점수 입력: ";
    for (int i = 0; i < size; i++)
        cin >> scores[i];
}

bool Dept::isOver60(int index) {
    if (scores[index] > 60)
        return true;
    else   
        return false;
}