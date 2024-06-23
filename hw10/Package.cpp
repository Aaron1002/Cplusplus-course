#include "Package.h"
#include <iostream>
using namespace std;

Package::Package(string s_NAME, string s_ADDRESS, string s_CITY, string s_STATE, string s_ZIP,
                    string r_NAME, string r_ADDRESS, string r_CITY, string r_STATE, string r_ZIP,
                    int WEIGHT, double COST)
        : s_name(s_NAME), s_address(s_ADDRESS), s_city(s_CITY), s_state(s_STATE), s_ZIP_code(s_ZIP),
            r_name(r_NAME), r_address(r_ADDRESS), r_city(r_CITY), r_state(r_STATE), r_ZIP_code(r_ZIP),    
            weight(WEIGHT), cost(COST)
{
    
    if (weight < 0)
        cout << "The weight should be positive." << endl;
    if (cost < 0)
        cout << "The cost should be positive." << endl;
        
}

double Package::calculateCost() const{
    return weight * cost;
}

