#pragma once

class ArrayUtility2
{
public:
    static int* concat(int s1[], int s2[], int size); 
    //s1과 s2를 연결한 새로운 배열을 동적 생성하고 포인터 리턴
    // static int* remove(int s1[], int s2[], int size, int&retSize);
    //s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴
};