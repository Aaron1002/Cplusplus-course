#ifndef LIBRAYR_H
#define LIBRAYR_H

#include "Book.h"
#include <string>
using namespace std;

class Library{
    private:
        const string libraryName;
        static const int SIZE = 10;
        Book listOfBooks[SIZE];
        int booknum;
        
    public:
        Library(string);
        void addBook(Book book);
        void displayLibrary();
};

#endif