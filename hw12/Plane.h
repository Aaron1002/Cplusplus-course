#ifndef PLANE_H
#define PLANE_H

#include "AirVehicle.h"

class Plane : public AirVehicle{
    public:
        Plane();
        Plane(int, int, int, int);
        virtual void displayInfo(); 
        
        void setEngines(int);
        int getEngines() const;
        
    private:
        int numEngines;
};

#endif