#include "Boat.h"
#include <iostream>
using namespace std;

Boat::Boat(){}

Boat::Boat(int s, int f, int engine, int sail){
    WaterVehicle::setSpeed(s);
    WaterVehicle::setFule(f);
    WaterVehicle::setEngines(engine);
    setSails(sail);
}

void Boat::displayInfo(){
    cout << "Boat - Speed: " << getSpeed()
            << ", Fule: " << getFule() 
            << ", Engines: " << getEngines()
            << ", Sails: " << getSails() << endl;
}

void Boat::setSails(int sail){
    numSails = sail;
}

int Boat::getSails() const{
    return numSails;
}