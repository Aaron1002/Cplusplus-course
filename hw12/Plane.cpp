#include "Plane.h"
#include <iostream>
using namespace std;

Plane::Plane(){}

Plane::Plane(int s, int f, int wing, int engine){
    AirVehicle::setSpeed(s);
    AirVehicle::setFule(f);
    AirVehicle::setWings(wing);
    setEngines(engine);
}

void Plane::displayInfo(){
    cout << "Plane - Speed: " << getSpeed()
            << ", Fule: " << getFule() 
            << ", Wings: " << getWings()
            << ", Engines: " << getEngines() << endl;
}

void Plane::setEngines(int engine){
    numEngines = engine;
}

int Plane::getEngines() const{
    return numEngines;
}