#include "CheckingAcc.h"
#include <iostream>
using namespace std;

CheckingAccount::CheckingAccount(){}

CheckingAccount::CheckingAccount(double ba, double fee) : transaction_fee(0.0){
    Account::setBalance(ba);
    setTransactionFee(fee);
}

void CheckingAccount::credit(double cr){
    Account::credit(cr - transaction_fee);
}

bool CheckingAccount::debit(double deb){
    if (Account::debit(deb + transaction_fee)){
        return true;    
    }
    else{
        cout << "Debit amount exceeded account balance" << endl;
        return false;
    }
}

void CheckingAccount::setTransactionFee(double fee){
    if (fee < 0.0){
        cout << "The initial transaction fee is invalid." << endl;
    }
    else{
        transaction_fee = fee;
    }
}

double CheckingAccount::getTransactionFee(){
    return transaction_fee;
}