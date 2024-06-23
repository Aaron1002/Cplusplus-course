#ifndef CHECKINGACCOUNT
#define CHECKINGACCOUNT

#include "Account.h"

class CheckingAccount : public Account{
    public:
        CheckingAccount(double, double);
        void credit(double);
        void debit(double);
        void setTransactionFee(double);
        
    private:
        double transaction_fee;
};

#endif