#pragma once

class MyIntStack {
    int p[10];
    int tos; //top of stack
public:
    MyIntStack();
    bool push(int n);
    bool pop(int &n);
};