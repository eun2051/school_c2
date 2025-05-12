#include <iostream>
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
    // friend > 변수들의 접근반경 넓히기
    friend Book& operator +=(Book& op1, int op2);
    friend Book& operator -=(Book& op1, int op2);
    bool operator!();
};

bool Book::operator!() {
    if(price==0)
        return true;
    else
        return false;
}

//외부함수 > 매개변수가 달라진다
Book& operator +=(Book& op1, int op2) {
    op1.price += op2;
    return op1;
}

Book& operator -=(Book& op1, int op2) {
    op1.price -= op2;
    return op1;
}

int main() {
    Book a("청춘", 20000, 300), b("미래", 30000, 500);
    a += 500; // 책 a의 가격 500원 증가
    b -= 500; // 책 b의 가격 500원 감소
    a.show();
    b.show();
    Book book("벼룩시장", 0, 50); // 가격은 0
    if(!book) cout << "공짜다" << endl;
}