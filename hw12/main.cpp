#include "Vehicle.h"
#include "LandVehicle.h"
#include "WaterVehicle.h"
#include "AirVehicle.h"
#include "Car.h"
#include "Boat.h"
#include "Plane.h"

#include <iostream>
using namespace std;

int main()
{
    LandVehicle landVehicle(80, 50, 4);
    WaterVehicle waterVehicle(60, 40, 2);
    AirVehicle airVehicle(300, 200, 2);
    Car car(120, 60, 4, 4);
    Boat boat(40, 30, 1, 2);
    Plane plane(600, 300, 2, 4);

    Vehicle *Vehicle_ptr; 
    
    Vehicle_ptr = &landVehicle;
    Vehicle_ptr -> displayInfo();
    
    Vehicle_ptr = &waterVehicle;
    Vehicle_ptr -> displayInfo();
    
    Vehicle_ptr = &airVehicle;
    Vehicle_ptr -> displayInfo();
    
    Vehicle_ptr = &car;
    Vehicle_ptr -> displayInfo();
    
    Vehicle_ptr = &boat;
    Vehicle_ptr -> displayInfo();
    
    Vehicle_ptr = &plane;
    Vehicle_ptr -> displayInfo();

    return 0;
}
