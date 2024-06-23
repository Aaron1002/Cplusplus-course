#include "AirVehicle.h"
#include <iostream>
using namespace std;

AirVehicle::AirVehicle(){}

AirVehicle::AirVehicle(int s, int f, int wing){
    Vehicle::setSpeed(s);
    Vehicle::setFule(f);
    setWings(wing);
}

void AirVehicle::displayInfo(){
    cout << "Air Vehicle - Speed: " << getSpeed()
            << ", Fule: " << getFule() 
            << ", Wings: " << getWings() << endl;
}

void AirVehicle::setWings(int wing){
    numWings = wing;
}

int AirVehicle::getWings() const{
    return numWings;
}