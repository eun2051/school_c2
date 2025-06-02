#include <iostream>
#include "BookManager.h"

int main() {
    BookManager* bm = new BookManager();
    bm ->run();
    delete bm;
}