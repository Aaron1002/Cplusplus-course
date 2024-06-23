#include "Account.h"
#include "SavingsAcc.h"
#include "CheckingAcc.h"
#include <iostream>
using namespace std;

int main()
{
    // Testing Account class
    Account acc(100.0);
    cout << "Account balance: " << acc.getBalance() << endl;
    acc.credit(50.0);
    cout << "Account balance after credit: " << acc.getBalance() << endl;
    acc.debit(30.0);
    cout << "Account balance after debit: " << acc.getBalance() << endl;

    // Testing SavingsAccount class
    SavingsAccount savings(500.0, 0.05); // Initial balance $500, interest rate 5%
    cout << "Savings account balance: " << savings.getBalance() << endl;
    double interest = savings.calculateInterest();
    savings.credit(interest);
    cout << "Savings account balance after interest: " << savings.getBalance() << endl;

    // Testing CheckingAccount class
    CheckingAccount checking(200.0, 1.0); // Initial balance $200, transaction fee $1
    cout << "Checking account balance: " << checking.getBalance() << endl;
    checking.credit(100.0);
    cout << "Checking account balance after credit: " << checking.getBalance() << endl;
    checking.debit(50.0);
    cout << "Checking account balance after debit: " << checking.getBalance() << endl;

    return 0;
}