#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    int price;
    int pages;
public:
    Book(string title="", int price=0, int pages=0) {
        this->title = title; this->price = price; this->pages = pages;
    }
    void show() {
        cout << title << ' ' << price << "원 " <<pages << " 페이지" << endl;
    }
    string getTitle() { return title; }
    //새로 만들어야 하는 함수들
    Book& operator +=(int op2); //연산자 중복
    Book& operator -=(int op2); 
};