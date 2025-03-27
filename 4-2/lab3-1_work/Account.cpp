#include <iostream>
using namespace std;

class Account {
public:
    char id;
    int a;
    int money;
};


Account::Account() {

}

/*

int main() {
    Account a("youn" 1, 5000); 
    a.deposit(5000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
    int money = a.withdraw(2000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
} */