#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(int s, int f, int wheel, int door){
    LandVehicle::setSpeed(s);
    LandVehicle::setFule(f);
    LandVehicle::setWheels(wheel);
    setDoors(door);
}

void Car::displayInfo(){
    cout << "Car - Speed: " << getSpeed()
            << ", Fule: " << getFule() 
            << ", Wheels: " << getWheels() 
            << ", Doors: " << getDoors() << endl;
}

void Car::setDoors(int door){
    numDoors = door;
}

int Car::getDoors() const{
    return numDoors;
}