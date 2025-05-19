#pragma once

class BaseArray {
private:
    int capacity; // 동적 할당된 메모리 용량
    int *mem;
protected:
    BaseArray(int capacity=100) {
    this->capacity = capacity; mem = new int [capacity];
}
    ~BaseArray() { delete [] mem; } //소멸자
    void put(int index, int val) { mem[index] = val; } //배열의 메모리에 넘버
    int get(int index) { return mem[index]; } //넘버 불러오기
    int getCapacity() { return capacity; } //메모리의 할당
};