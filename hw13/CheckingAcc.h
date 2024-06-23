#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account{
    public:
        CheckingAccount();
        CheckingAccount(double, double);
        
        virtual void credit(double);
        virtual bool debit(double);
        
        void setTransactionFee(double);
        double getTransactionFee();
        
    private:
        double transaction_fee;
    
};

#endif