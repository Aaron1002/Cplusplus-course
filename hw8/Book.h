#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book{
    private:
        string title;
        string author;
        string ISBN;
        
    public:
        Book();
        Book(string, string, string);
        void displayBook() const;
};

#endif