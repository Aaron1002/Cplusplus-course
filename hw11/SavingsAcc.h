#ifndef SAVINGSACCOUNT
#define SAVINGSACCOUNT

#include "Account.h"

class SavingsAccount : public Account{
    public:
        SavingsAccount(double, double);
        double calculateInterest() const;
        void setInterestRate(double);
        double getInterestRate() const;
        
    private:
        double interest_rate;
};

#endif