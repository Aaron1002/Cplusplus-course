#ifndef CAR_H
#define CAR_H

#include "LandVehicle.h"

class Car : public LandVehicle{
    public:
        Car(int, int, int, int);
        virtual void displayInfo(); 
        
        void setDoors(int);
        int getDoors() const;
        
    private:
        int numDoors;
};

#endif