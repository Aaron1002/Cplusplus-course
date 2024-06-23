#include "Bookstore.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    Bookstore store;
    
    store.addBook(Book("1984", "George Orwell", 9.99))
    .addBook(Book("Animal Farm", "George Orwell", 7.99))
    .addBook(Book("The Great Gatsby", "F. Scott Fitzgerald", 14.99))
    .addBook(Book("A Brief History of Time", "Stephen Hawking", 15.99))
    .addBook(Book("Sapiens", "Yuval Noah Harari", 18.99));
    
    store.displayBooks().sellBook(1).sellBook(3);
    
    cout << "\nTotal Books Sold: " << Book::totalSales << endl;

return 0;
}
