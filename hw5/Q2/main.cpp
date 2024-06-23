#include <iostream>
#include <iomanip>
#include <string>
#include "Invoice.h"
using namespace std;

int main()
{
    cout << "Item_1:" << endl;
    Invoice item_1("12345", "Hammer", 30, 25);
    item_1.getInvoiceAmount();
    
    cout << "Item_2:" << endl;
    Invoice item_2("23454", "Apple", -10, -30);
    item_2.getInvoiceAmount();
    
    return 0;
}