#include "MyIntStack.h"

MyIntStack::MyIntStack() {
    tos = 0; //top of stack;
}

bool MyIntStack::push(int n) {
    if(tos == 10) {
        return false;
    }
    //p[tos] = n;
    //tos++; //밑과 똑같은 의미
    p[tos++] = n;
    return true;
}

bool MyIntStack::pop(int &n) {
    if(tos == 0) { // stack empty?
        return false;
    }
    n = p[--tos];
    return true;
}