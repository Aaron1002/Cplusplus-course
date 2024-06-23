#include "Account.h"
#include <iostream>
using namespace std;

Account::Account(){}

Account::Account(double ba) : balance(0.0){
    setBalance(ba);
}

void Account::credit(double cr){
    balance += cr;
}

bool Account::debit(double deb){
    if(deb > balance){
        cout << "Debit amount exceeded account balance" << endl;
        return false;
    }
    else{
        balance -= deb;
        return true;
    }
}

void Account::setBalance(double ba){
    balance = ba;
}

double Account::getBalance() const{
    return balance;
}
