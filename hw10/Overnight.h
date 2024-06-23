#ifndef OVERNIGHT_H
#define OVERNIGHT_H

#include "Package.h"
#include <string>
using namespace std;

class OvernightPackage : public Package{
    public:
        OvernightPackage(string, string, string, string, string, 
                            string, string, string, string, string,
                            int, double, int);
        
        double calculateCost() const;
        
    private:
        double add_fee;
};

#endif