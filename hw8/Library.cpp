#include "Library.h"
#include <iostream>
#include <string>
using namespace std;

Library::Library(string Lname) : libraryName(Lname), booknum(0){}

void Library::addBook(Book book){
    if (booknum < 10){
        listOfBooks[booknum] = book;
        booknum++;
    }
    else if (booknum > 10){
        cout << "Exceed the array limit!" << endl;
    }
    
}

void Library::displayLibrary(){
    cout << "Library name: " << libraryName << endl;
    cout << "\nIt contains: \n" << endl;
    for (int order=0; order<booknum; order++){
        cout << order+1 << ". ";  
        listOfBooks[order].displayBook();
        cout << endl;
    }

}

