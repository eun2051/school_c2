#pragma once

class Point {
    int x, y;
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    void set(int x, int y);
    void showPoint();
};