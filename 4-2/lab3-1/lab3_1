#include <iostream>
#include "Account.h"
using namespace std;

int main() {
    Account a("승은", 1001, 50000);
    //Account b;
    a.deposit(10000);
    cout << a.getOwner() << " : " << a.inquiry() << endl;
    a.info();
    a.withdraw(30000);
    cout << a.getOwner() << " : " << a.inquiry() << endl;
    a.deposit(-50000);
    a.withdraw(50000);
    cout << a.getOwner() << " : " << a.inquiry() << endl;
    a.info();
}