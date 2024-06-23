#ifndef WATERVEHICLE_H
#define WATERVEHICLE_H

#include "Vehicle.h"

class WaterVehicle : public Vehicle{
    public:
        WaterVehicle();
        WaterVehicle(int, int, int);
        virtual void displayInfo();
        
        void setEngines(int);
        int getEngines() const;
        
    private:
        int numEngines;
};

#endif