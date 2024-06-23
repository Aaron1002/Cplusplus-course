#include <iostream>
#include <iomanip>
#include <string>
#include "Invoice.h"
using namespace std;

Invoice::Invoice(string number, string description, int quantity, int price){
    
    Invoice::number = number;
    cout << "Part number: " << Invoice::number << endl;
    
    Invoice::description = description;
    cout << "Description: " << Invoice::description << endl;
    
    if (quantity < 0){
        Invoice::quantity = 0;
    }
    else{
        Invoice::quantity = quantity;
    }
    cout << "Quantity: " << Invoice::quantity << endl;
    
    if (price < 0){
        Invoice::price = 0;
    }
    else{
        Invoice::price = price;
    }
    cout << "Price per item: " << Invoice::price << endl;
}

void Invoice::getInvoiceAmount(){
    cout << "Total price: " << (Invoice::price *= Invoice::quantity) << endl; 
    cout << endl;
}