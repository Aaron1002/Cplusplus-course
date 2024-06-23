#include "LandVehicle.h"
#include <iostream>
using namespace std;

LandVehicle::LandVehicle(){}

LandVehicle::LandVehicle(int s, int f, int wheel){
    Vehicle::setSpeed(s);
    Vehicle::setFule(f);
    setWheels(wheel);
}

void LandVehicle::displayInfo(){
    cout << "Land Vehicle - Speed: " << getSpeed()
            << ", Fule: " << getFule() 
            << ", Wheels: " << getWheels() << endl;
}

void LandVehicle::setWheels(int wheel){
    numWheels = wheel;
}

int LandVehicle::getWheels() const{
    return numWheels;
}