#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(){
    setSpeed(0);
    setFule(0);
}

void Vehicle::setSpeed(int s){
    speed = s;
}

void Vehicle::setFule(int f){
    fule = f;
}

int Vehicle::getSpeed() const{
    return speed;
}

int Vehicle::getFule() const{
    return fule;
}