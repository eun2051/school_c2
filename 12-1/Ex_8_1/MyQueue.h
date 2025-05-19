#pragma once
#include "BaseArray.h" //동적배열을 모두 담당해줌

class MyQueue : public BaseArray { 
    int head; //새로운 값을 넣을 위치
    int tail; //값을 빼올 위치
    int size; //큐에 저장된 값의 개수
public:
    MyQueue(int capacity);
    void enqueue(int  n);
    int dequeue(); //pop 같은 기능
    int capacity(); //동적배열의 크기 
    int length();
};