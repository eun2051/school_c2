#include "Book.h"
#include <vector>

class BookManager {
    vector<Book> v;
    void bookIn();
    void searchByAuthor();
    void searchByYear();
public:
    void run();
};