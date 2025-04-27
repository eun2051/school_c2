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

//(int s1[], int s2[], int size, int&retSize);
int* ArrayUtility2::remove(int s1[], int s2[], int size, int&retSize) {
    int *s3 = new int[size];
    int count = 0;

    for (int i = 0; i < size; i++) {
        bool found = false; // s2에서 s1[i] 있는지 체크 변수
        for (int j = 0; j < size; j++) {
            if (s1[i] == s2[j]) { // s1[i]가 s2에 존재하는지 확인
                found = true; //찾으면 found를 true로 변경
                break; //한번 검사하면 더이상 검사필요 없
            }
        }
        if (!found) { //s2에 없으면 s3 배열에 바로 추가
            s3[count++] = s1[i];
        }
    }
    retSize = count; //결과 배열에 최종 개수 추가
    int* result = new int[retSize]; //최종 배열 동적 생성
    for (int i = 0; i < retSize; i++) {
        result[i] = s3[i];
    }

    delete[] s3; //임시 배열 s3 삭제
    return result; //최종 배열 result 리턴
}