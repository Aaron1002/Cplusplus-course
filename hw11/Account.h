#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account{
    public:
        Account();
        Account(double);
        
        void setBalance(double);
        void credit(double);
        bool debit(double);
        double getBalance() const;
        
    private:
        double balance;
        
};

#endif