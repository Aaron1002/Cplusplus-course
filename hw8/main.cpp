#include <iostream>
#include "Library.h"
using namespace std;

int main(){
    
    Library myLibrary("NCKU Library");
    myLibrary.addBook(Book("C++ Programming", "Bjarne Stroustrup", "9780321563842"));
    myLibrary.addBook(Book("Data Structures", "Nicola Lacey", "9780131986190"));
    myLibrary.addBook(Book("Algorithm Design", "Jon Kleinberg", "9780321295354"));
    myLibrary.addBook(Book("Operating Systems", "Andrew S. Tanenbaum", "9780133591620"));
    myLibrary.addBook(Book("Computer Networks", "Andrew S. Tanenbaum", "9780132126953"));
    myLibrary.displayLibrary();
    
    return 0;
}