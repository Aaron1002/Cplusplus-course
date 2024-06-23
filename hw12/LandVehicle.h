#ifndef LANDVEHICLE_H
#define LANDVEHICLE_H

#include "Vehicle.h"

class LandVehicle : public Vehicle{
    public:
        LandVehicle();
        LandVehicle(int, int, int);
        virtual void displayInfo();
        
        void setWheels(int);
        int getWheels() const;
        
    private:
        int numWheels;
};

#endif