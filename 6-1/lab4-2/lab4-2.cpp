//소스파일
#include <iostream>
#include "Circle.h"
using namespace std;

int main () {
    int size;
    cout << "원 개수: ";
    cin >> size;
    Circle *p = new Circle[size];
    int r;
    for (int i=0; i<size; i++) {
        cout << "원" << i + 1 << "의 반지름:" ;
        cin >> r;
        //p->setRadius(r);
        //p++;

        //(p+i)->setRadius(r);
        //*(p+i).setRadius(r); //모두 다 똑같은 의미
        p[i].setRadius(r); //동적 배열이지만 똑같다
    }
    int count = 0; //원이 몇개인지 세아리는거
    for (int i = 0; i < size; i++) {
        if (p[i].getArea() > 100)
            count++;
    }
    cout << "100보다 큰 원 : " << count << "개" << endl;
    delete[] p;
}