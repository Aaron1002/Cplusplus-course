#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

float Book::totalSales = 0;

Book::Book(){}

Book::Book(string t, string a, float p) 
        : title(t), author(a), price(p){}

Book::Book(const Book &copy) : title(copy.title), author(copy.author), price(copy.price){
    cout << "\ncopy constructor";
}

Book &Book::display(){
    cout << "Title: " << title << ", " << "Author: " << author 
    << ", " << "Price: " << price;   
    
    return *this;
}

Book &Book::sell(){
    totalSales += price;
    
    return *this;
}