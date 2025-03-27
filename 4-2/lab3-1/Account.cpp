#include <iostream>
#include "Account.h"
using namespace std;

//클래스의 구현부

//생성자
Account::Account(string n, int i, int b) : name(n), id(i), balance(b) {}
//저금하기
void Account::deposit(int dep) {
    if(dep < 0) return;
    balance += dep;
}
//계좌 사용자 이름 알기
string Account::getOwner(){
    return name;
}
//출금하기
int Account::withdraw(int wd){
    if (balance >= wd) {
    balance -= wd;
    return wd;
    } else
        return 0;
}
//잔액확인하기
int Account::inquiry() {
    return balance;
}

void Account::info() {
    cout << "예금주 : " << name << ", 계좌번호" << id << ", 잔액 : " << balance << "원" << endl;
}