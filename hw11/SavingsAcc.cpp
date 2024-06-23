#include "SavingsAcc.h"
#include <iostream>
using namespace std;

SavingsAccount::SavingsAccount(double ba, double rate) : interest_rate(0.0){
  Account::setBalance(ba);
  setInterestRate(rate);
}

double SavingsAccount::calculateInterest() const{
  return (Account::getBalance() * interest_rate);
}

void SavingsAccount::setInterestRate(double rate){
  if (rate < 0.0)
	{
	  cout << "The initial interest rate is invalid." << endl;
	}
  else
	{
	  interest_rate = rate;
	}
}

double SavingsAccount::getInterestRate() const{
  return interest_rate;
}
