#pragma once
#include "BaseArray.h"

class MyStack : public BaseArray {
    int tos;
public:
    MyStack(int capacity);
    void push(int n);
    int pop();
    int length();
    int capacity();
};