#include <iostream>
using namespace std;

// 함수 정의, 선언
/* void half (double x) { //매개변수 x, 형식 매개변수 x, formal parameter
    x = x / 2;
} */

/* 포인터를 사용하는 방법 !
-> 주소를 주소처럼 안 다루는 방법이 많아서 에러가 나는 경우가 있음
void half (double *x) { //만약 포인터로, 주소값이니까,
    *x = *x / 2;
}
...
half(&n) //주소값이기 떄문에 & 연산자를 사용해야함
*/

void half (double &x) { //참조 매개변수 x, 형식 매개변수 x
//(메모리공간이 없음)
// -> 이걸 쓸때 누구를 참조할지 미리 말해줘야함
    x = x / 2;
}

int main()
{
    double n = 20;
    // 함수의 호출, function call
    half(n); //인자, argument, 실 매개변수, actual parameter
    //함수가 호출되면 &x = n 이 됨 (별명이 두개 되는 거임)
    cout << n << endl;
    double dd = 12345.6;
    half(dd);
    cout << dd << endl;
}