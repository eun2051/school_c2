#include "BookManager.h"
#include <iostream>
#include <algorithm>
using namespace std;

void BookManager::bookIn() {
    string title, author;
    int year;
    cout << "책 입고 (종료:-1) >> " << endl;
    while(true) {
        cout << "년도>> ";
        cin >> year; cin.ignore();
        if (year == -1) break;
        cout << "제목>> ";
        getline(cin, title);
        cout << "저자>> ";
        getline(cin, author);
        Book b(title, author, year);
        v.push_back(b);
    }
    cout << "총 입고된 책 수 : " << v.size() << endl;
}

void BookManager::searchByAuthor() {
    cout << "검색할 저자 >> ";
    string author;
    getline(cin, author);
    //알고리즘으로도 구현가능함
    for_each(v.begin(), v.end(), [author](Book b) {
        if(b.getAuthor() == author) {
            b.show();
        }
    });
}

void BookManager::searchByYear() {
    cout << "검색할 년도>> ";
    int year;
    cin >> year; cin.ignore();
    for (int i = 0; i < v.size(); i++) {
        if(v[i].getYear() == year)
            v[i].show();
    }
}
void BookManager::run() {
    while(true) {
        cout << "책추가:1, 저자검색:2, 년도검색:3, 종료:0 >> ";
        int menu;
        cin >> menu; cin.ignore();
        if (menu == 0) break;
        switch(menu) {
        case 1: 
            bookIn(); break;
        case 2:
            searchByAuthor(); break;
        case 3:
            searchByYear(); break;
        default:
            cout << "프로그램 종료" << endl;
        }
    }
}
