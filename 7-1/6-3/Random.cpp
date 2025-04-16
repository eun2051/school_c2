#include <iostream>
#include "Random.h"

int Random::nextInt(int min, int max) {
    int range = max - min;
    if (range < 0) return -1;
    return (rand() % (range + 1) + min); //+1은 max값까지 포함해주기 위함
}

char Random::nextAlphabet() {
    int n = rand() % 52; // 0-51난수 생성 0~25:소문자  26~51:대문자
    if (n < 26)
        return 'a' + n;
    else   
        return 'A' + (n - 26);
}

double Random::nextDouble() {
    return (double)rand() / RAND_MAX;
} //0보다 크거나 같고 1보다 적은 실수 리턴