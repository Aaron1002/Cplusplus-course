#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle{
    public:
        Vehicle();
        virtual void displayInfo() = 0;
        
        void setSpeed(int);
        void setFule(int);
        
        int getSpeed() const;
        int getFule() const;
        
    protected:  
        int speed;
        int fule;
        
};

#endif