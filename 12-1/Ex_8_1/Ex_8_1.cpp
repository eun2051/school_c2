#include <iostream>
#include "BaseArray.h"
#include "MyQueue.h"
using namespace std;

int main() {
    MyQueue mQ(100); //?큐의 할당 
    int n;
    cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
    for(int i=0; i<5; i++) {
        cin >> n;
        mQ.enqueue(n); // 큐에 삽입
    }
    cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
    cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
    while(mQ.length() != 0) {
        cout << mQ.dequeue() << ' '; // 큐에서 제거하여 출력
    }
    cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
    MyQueue myQ(5);
    myQ.enqueue(100);
    myQ.enqueue(200);
    myQ.enqueue(300);
    myQ.enqueue(400);
    cout << myQ.dequeue();
    cout << myQ.dequeue();
    cout << myQ.dequeue();
    myQ.enqueue(500);
    myQ.enqueue(600);
    myQ.enqueue(700);
    myQ.enqueue(800);
    myQ.enqueue(900); //400의 자리 > full > 동작을 하지 않음
    while(myQ.length() != 0) {
        cout << myQ.dequeue() << ' '; // 큐에서 제거하여 출력
    }
}