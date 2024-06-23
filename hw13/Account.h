#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account{
    public:
        Account();
        Account(double);
        
        virtual void credit(double);
        virtual bool debit(double);
        
        void setBalance(double);
        double getBalance() const;
        
    private:
        double balance;   
};

#endif