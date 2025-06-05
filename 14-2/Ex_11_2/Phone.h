#pragma once
#include <iostream>
#include <string>
using namespace std;

class Phone { // 전화 번호를 표현하는 클래스
    string name;
    string telnum;
    string address;
public:
    Phone(string name="", string telnum="", string address="") {
    this->name = name;
    this->telnum = telnum;
    this->address = address;
    }
    friend ostream& operator <<(ostream& outs, Phone phone);
    friend istream& operator >>(istream& ins, Phone& phone);
};
//일종의 함수의 호출이라고 볼 수 있음
// cout << phone => << (cout, phone)
// operator << (ostream, Phone)
ostream& operator<< (ostream& outs, Phone phone);
// cin >> phone => >>(cin, phone)
// operator >> (istream, Phone)
istream& operator>> (istream& ins, Phone& phone);
