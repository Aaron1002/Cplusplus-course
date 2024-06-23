#ifndef INVOICE_H
#define INVOICE_H

#include <string>
using namespace std;

class Invoice{
  public:
    Invoice(string, string, int, int);
    void getInvoiceAmount();
    
  private:
    string number;
    string description;
    int quantity;
    int price;
    
};

#endif