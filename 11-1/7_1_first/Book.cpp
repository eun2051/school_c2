#include "Book.h"

Book& Book::operator +=(int op2) {
    price += op2;
    return *this; //자신의 참조가 리턴
}

Book& Book::operator -=(int op2) {
    price -= op2;
    return *this;
}