#include "ArrayUtility2.h"

//s1과 s2를 연결한 새로운 배열을 동적 생성하고 포인터 리턴
int* ArrayUtility2::concat(int s1[], int s2[], int size) {
    int *p = new int[size * 2];
    if (!p) return nullptr;
    for (int i = 0; i < size; i++)
        p[i] = s1[i];
    for (int i = 0; i < size; i++)
        p[size + i] = s2[i];
    return p;
}