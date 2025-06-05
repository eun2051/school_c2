#include "Phone.h"
#include <iostream>
using namespace std;

// cout << phone => << (cout, phone)
// operator << (ostream, Phone
ostream& operator<< (ostream& outs, Phone phone) {
    outs << "(" << phone.name << "," << phone.telnum << "," << phone.address << ")" << endl;
    return outs;
}
istream& operator>> (istream& ins, Phone& phone) { //참조로 받아야함 phone 부분을
    cout << "이름>> ";
    getline(ins, phone.name);
    cout << "전화번호>> ";
    getline(ins, phone.telnum);
    cout << "주소>> ";
    getline(ins, phone.address);
    return ins;
}