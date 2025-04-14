#include <iostream>
using namespace std;

//1. 함수의 중복 (Function Overloading)
/*int add(int x[], int size) {
    int sum = 0;
    for (int i=0; i<size; i++)
        sum += x[i];
    return sum;
}
int add(int x[], int size, int y[]) {
    return add(x, size) + add(y, size);
    //for문으로도 구현 가능
}*/

//2. 디폴트 매개변수 -> 매개변수에 기본값을 주자
int add(int x[], int size, int y[] = nullptr){
    int sum = 0;
    for (int i=0; i<size; i++)
        sum += x[i];
    if (y == nullptr) 
        return sum;
    for(int i=0; i<size; i++)
        sum += y[i];
    return sum;
}

int main() {
    int a[] = {1,2,3,4,5};
    int b[] = {6,7,8,9,10};
    int c = add(a, 5); //배열 a의 정수를 모두 더한 값 리턴
    int d = add(a, 5, b); // 배열 a와 b의 정수를 모두 다한 값 리턴
    cout << c << endl; //15
    cout << d << endl; //55
    //int e = add(a, 5, b, 3);
    //cout << e << endl;
}

/*int add(int a, int id) {
    int sum = int a [i]
    for (int i = 0; i < id; i++){
        sum += i;
    }
}*/