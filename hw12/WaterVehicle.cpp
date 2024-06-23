#include "WaterVehicle.h"
#include <iostream>
using namespace std;

WaterVehicle::WaterVehicle(){}

WaterVehicle::WaterVehicle(int s, int f, int engine){
    Vehicle::setSpeed(s);
    Vehicle::setFule(f);
    setEngines(engine);
}

void WaterVehicle::displayInfo(){
    cout << "Water Vehicle - Speed: " << getSpeed()
            << ", Fule: " << getFule() 
            << ", Engines: " << getEngines() << endl;
}

void WaterVehicle::setEngines(int engine){
    numEngines = engine;
}

int WaterVehicle::getEngines() const{
    return numEngines;
}