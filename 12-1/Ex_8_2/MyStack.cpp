#include "MyStack.h"

MyStack::MyStack(int capacity) : BaseArray(capacity)
{
    tos = 0;
}
void MyStack::push(int n) {
    //full?
    if (tos == capacity())
        return;
    put(tos++, n);
}

int MyStack::pop() {
    //empty?
    if(tos ==0)
        return -1;
    return get(--tos);
} 

int MyStack::length()
{
    return tos;
}
int MyStack::capacity() {
    return getCapacity();
}