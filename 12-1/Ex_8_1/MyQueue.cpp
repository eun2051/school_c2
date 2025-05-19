#include "MyQueue.h"

MyQueue::MyQueue(int capacity) : BaseArray(capacity)
{ //: BaseArray(capacity)를 해줘야 기본 100으로 생성
    head = 0;
    tail = -1;
    size = 0;
}

void MyQueue::enqueue(int n) {
    //queue full?
    if( size == capacity() )
        return;
    put( head++, n); //현재 n에 head 저장, head는 다음으로 넘얻감
    size++;
    head = head % capacity();
}

int MyQueue::dequeue() {
    //queue empty?
    if(size == 0)
        return -1; //좋은 방법은 아닌듯 (끝내기)
    size--;
    tail++; //tail다음값이 내가 원하는 값
    tail = tail % capacity(); //다시 돌아오는 코드(index보다 크기가 커지면)
    return get(tail);
}

int MyQueue::capacity() {
    return getCapacity(); //자신의 동적배열 리턴
}

int MyQueue::length() {
    return size;
}