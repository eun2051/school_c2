#pragma once //한번만 컴파일 되도록함
#include <string>
using namespace std;

class Account{
    string name; //이름
    int id; //계좌번호
    int balance; //잔액
public: 
    Account(string n, int i, int b);
    void deposit(int dep); //저금하기
    string getOwner(); //계좌주인이름 리턴
    int withdraw(int wd); //출금하기
    int inquiry(); //잔액확인
    void info(); //정보
};