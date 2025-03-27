#pragma once
class Random {
public:
    Random();
    int next();
    int nextInRange(int start, int end);
};