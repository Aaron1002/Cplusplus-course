#ifndef BOOKSTROE_H
#define BOOKSTORE_H
#include <iostream>
#include "Book.h"

const int MAX_BOOKS = 5;

class Bookstore{
    public:
        Bookstore();
    
        Bookstore &addBook(Book);
        Bookstore &displayBooks();
        Bookstore &sellBook(int);
        
    private:
        Book books[MAX_BOOKS];
        int booknum;
        
};

#endif