#include <iostream>

double area (int r); //함수 선언

double area (int r) {
    return 3.14 * r * r; //원의 넓이 계산
}

int main() { 
    int n = 3;
    char c = '#';
    std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;
    std::cout << "n+5=" << n + 5 << '\n';
    std::cout << "면적은" << area(n); //함수 area의 리턴 값 출력
}