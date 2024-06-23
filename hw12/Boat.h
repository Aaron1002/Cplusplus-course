#ifndef BOAT_H
#define BOAT_H

#include "WaterVehicle.h"

class Boat : public WaterVehicle{
    public:
        Boat();
        Boat(int, int, int, int);
        virtual void displayInfo(); 
        
        void setSails(int);
        int getSails() const;
    
    private:
        int numSails;
};

#endif