#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book{
    public:
        Book();
        Book(string, string, float);
        Book(const Book &);
        
        Book &display();
        Book &sell();
        
        static float totalSales;
        
    private:
        string title;
        string author;
        float price;
        
};

#endif