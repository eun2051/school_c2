#pragma once
#include <string>
using namespace std;

class Book {
    string title;
    string author;
    int year;
public:
    Book(string title, string author, int year) 
        : title(title), author(author), year(year) {}
    string getAuthor() { return author; }
    int getYear() { return year; }
    void show();
};