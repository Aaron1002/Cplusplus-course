#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

Book::Book(){}

Book::Book(string t, string a, string i) : title(t), author(a), ISBN(i){}

void Book::displayBook() const{
    cout << "Title: " << title << ", " << "Author: " << author << ", " << "ISBNI: " << ISBN << endl; 
}