#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
    Account Bob;
    cout << "The initial balance is: " << Bob.getBalance() << endl;
    Bob.credit(1000); 
    cout << "The balance after credit is: " << Bob.getBalance() << endl;
    Bob.debit(200);
    cout << "The balance after debit is: " << Bob.getBalance() << endl;
    
    cout << endl;
    
    Account John;
    cout << "The initial balance is: " << John.getBalance() << endl;
    John.credit(500);
    cout << "The balance after credit is: " << John.getBalance() << endl;
    John.debit(1000);
    cout << "The balance after debit is: " << John.getBalance() << endl;
    
    return 0;
}