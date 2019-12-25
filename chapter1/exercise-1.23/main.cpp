#include <iostream>
#include "Sales_item.h"

typedef struct {
    Sales_item item;
    int count;
} bookCount;

typedef struct {
    bookCount data[100];
    int size;
} array;

int main() {
    Sales_item book;
    // initialize struct array
    array bookArr;
    bookArr.size = 0;
    // read from standard input for loop
    while (std::cin >> book) {
        bool flag = false;
        for (int i = 0; i < bookArr.size; i++) {
            if (bookArr.data[i].item.isbn() == book.isbn()) {
                bookArr.data[i].count++;
                bookArr.data[i].item += book;
                flag = true;
                break;
            }
        }
        // create a new element if the book isn't in bookArr
        if (!flag) {
            bookCount bk;
            bk.item = book;
            bk.count = 1;
            bookArr.data[bookArr.size++] = bk;
        }
    }
    for (int i = 0; i < bookArr.size; i++) {
        bookCount bk = bookArr.data[i];
        std::cout << "Book info: " << bk.item << ", count: " << bk.count << std::endl;
    }
    return 0;
}