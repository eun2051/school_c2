#pragma once
#include <iostream>
#include <string>
using namespace std;

class UI {
public:
    static int getMainMenu();
    static int getShapeType();
    static int getShapeIndex(); //몇 번째 도형을 삭제할지 인덱스
    static void println(string msg); //end 메세지 붙여주기

    static void print(string msg);
    static void print(int msg);
};