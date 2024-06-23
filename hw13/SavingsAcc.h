#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account{
    public:
        SavingsAccount();
        SavingsAccount(double, double);
        
        double calculateInterest() const;
        
        void setInterestRate(double);
        double getInterestRate() const;
        
    private:
        double interest_rate;

    
};

#endif

