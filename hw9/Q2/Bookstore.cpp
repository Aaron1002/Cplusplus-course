#include "Bookstore.h"
#include <iostream>
#include <string>
using namespace std;

Bookstore::Bookstore() : booknum(0){}

Bookstore &Bookstore::addBook(Book book){
    books[booknum] = book;
    booknum++;
    
    return *this;
}

Bookstore &Bookstore::displayBooks(){
    for (int i=0; i<booknum; i++){
        cout << (i+1) << ". ";
        books[i].display();
        cout << endl;
    }
    
    return *this;
}

Bookstore &Bookstore::sellBook(int index){
    books[index].sell();
    
    return *this;
}