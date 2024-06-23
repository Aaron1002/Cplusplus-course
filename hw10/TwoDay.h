#ifndef TWODAY_H
#define TWODAY_H

#include "Package.h"
#include <string>
using namespace std;

class TwoDayPackage : public Package{
    public:
        TwoDayPackage(string, string, string, string, string, 
                        string, string, string, string, string,
                        int, double, int);
        
        double calculateCost() const;
        
    private:
        double flat_fee;
        
};

#endif