#include "Overnight.h"
#include <iostream>
using namespace std;

OvernightPackage::OvernightPackage(string s_NAME, string s_ADDRESS, string s_CITY, string s_STATE, string s_ZIP, 
                                    string r_NAME, string r_ADDRESS, string r_CITY, string r_STATE, string r_ZIP,
                                    int WEIGHT, double COST, int FEE)
    : Package(s_NAME, s_ADDRESS, s_CITY, s_STATE, s_ZIP, 
                r_NAME, r_ADDRESS, r_CITY, r_STATE, r_ZIP,
                WEIGHT, COST), add_fee(FEE)
{
    add_fee = FEE;    
}

double OvernightPackage::calculateCost() const{
    return (Package::weight * (Package::cost + add_fee) );
}