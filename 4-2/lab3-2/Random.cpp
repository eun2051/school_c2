#include <cstdlib>
#include <ctime>
#include "Random.h"

//생성자 - 시드값 설정하는 것이 중요
Random::Random() {
    srand((unsigned)time(0));
}

//난수 생성 : 0 ~ RAND_MAX
int Random::next() {
    return rand();
}

// 난수 생성 : start ~ end
// shifting -> 시작난수에다가 얼마를 더해서 내가 원하는 난수 도출
int Random::nextInRange(int start, int end) {
    return rand()%(end - start + 1) + start;
}