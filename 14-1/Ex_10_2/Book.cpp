#include "Book.h"
#include <iostream>
using namespace std;

void Book::show() {
    cout << year << "년도, " << title << ", " << author << endl; 
}