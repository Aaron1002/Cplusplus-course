#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

#include "Vehicle.h"

class AirVehicle : public Vehicle{
    public:
        AirVehicle();
        AirVehicle(int, int, int);
        virtual void displayInfo(); 
        
        void setWings(int);
        int getWings() const;
        
    private:
        int numWings;
};

#endif