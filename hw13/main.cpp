#include "Account.h"
#include "SavingsAcc.h"
#include "CheckingAcc.h"
#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;

int main() {
    vector<Account*> accounts;
    double withdraw = 0.0;
    double deposit = 0.0;

    // Create SavingsAccount and CheckingAccount objects
    accounts.push_back(new SavingsAccount(500.0, 0.05)); // Savings account with $500 initial balance and 5% interest rate
    accounts.push_back(new CheckingAccount(200.0, 1.0)); // Checking account with $200 initial balance and $1 fee per transaction

    // Process each account
    
    for (Account *account : accounts){  // pointer "account" 遍及 accounts(可知每格為何種object)
        
        SavingsAccount *savings = dynamic_cast <SavingsAccount*> (account);
        CheckingAccount *checking = dynamic_cast <CheckingAccount*> (account);
        
        if(savings != 0){
            cout << "Processing SavingsAccount account." << endl;
            
            cout << "Enter amount to deposit: ";
            cin >> deposit;
            account -> credit(deposit);
            
            cout << "Enter amount to withdraw: ";
            cin >> withdraw;
            account -> debit(withdraw);
        
            double interest = savings -> calculateInterest();        
            cout << "Interest added: " << interest << endl;
            cout << "Updated balance: " << savings -> getBalance() + interest << endl << endl;
        }
        else if (checking != 0){
            cout << "Processing CheckingAccount account." << endl;
            
            cout << "Enter amount to deposit: ";
            cin >> deposit;
            account -> credit(deposit);
            
            cout << "Enter amount to withdraw: ";
            cin >> withdraw;
            account -> debit(withdraw);
            
            cout << "Updated balance: " << checking -> getBalance()<< endl << endl;
        }
    
    }
	
    // Clean up dynamically allocated memory
    
    for (Account* account : accounts){
        delete account;
    }
	
    return 0;
}
