#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(){
    cout << "What is the initial balance? : ";
    cin >> balance;
    
    if (balance >= 0){
        ;
    }
    else if (balance < 0){
        balance = 0;
        cout << "ERROR: The balance is invalid." << endl;
    }
}

void Account::credit(int amount){
    balance += amount;
}

void Account::debit(int withdraw){
    if (balance - withdraw >= 0){
        balance -= withdraw;
    }
    else if (balance - withdraw < 0){
        cout << "ERROR: Debit amount exceeded account balance." << endl;
    }
    
}

int Account::getBalance(){
    return balance;
}
