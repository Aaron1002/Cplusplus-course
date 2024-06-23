#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>
using namespace std;

class Package{
    public:
        Package(string, string, string, string, string,
                string, string, string, string, string, int, double);
        
        double calculateCost() const; 
        
        const double weight;
        const double cost;
    
    private:
        string s_name;
        string s_address;
        string s_city;
        string s_state;
        string s_ZIP_code;
        
        string r_name;
        string r_address;
        string r_city;
        string r_state;
        string r_ZIP_code;

};

#endif