#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;

Time::Time(int hr, int min, int sec){
    setTime(hr, min, sec);
}

Time &Time::setTime(int h, int m, int s){
    secPassedFromMid = 0;
    
    setHour(h);
    setMinute(m);
    setSecond(s);
    
    return *this;
}

Time &Time::setHour(int h){
    if (h >= 0 and h < 24){
        secPassedFromMid += 3600 * h;
    }
    
    return *this;
}

Time &Time::setMinute(int m){
    if (m >= 0 and m < 60){
        secPassedFromMid += 60 * m;
    }
    
    return *this;
}

Time &Time::setSecond(int s){
    if (s >= 0 and s < 60){
        secPassedFromMid += s;
    }
    
    return *this;
} 

int Time::getHour() const{
    return (secPassedFromMid/3600); 
}

int Time::getMinute() const {
    return ( (secPassedFromMid - (secPassedFromMid/3600*3600) ) / 60 );
}

int Time::getSecond() const{
    return (secPassedFromMid % 60);
}

void Time::printUniversal() const{
    cout << setfill('0') << setw(2) << (secPassedFromMid/3600) << ":"
    << setw(2) << ( (secPassedFromMid - (secPassedFromMid/3600*3600) ) / 60 ) << ":" 
    << setw(2) << (secPassedFromMid % 60);
}

void Time::printStandard() const{
    cout << ( ((secPassedFromMid/3600) == 0 or (secPassedFromMid/3600) == 12) ? 12 : (secPassedFromMid/3600) % 12) 
    << ":" << setfill('0') << setw(2) << ( (secPassedFromMid - (secPassedFromMid/3600*3600) ) / 60 )
    << ":" << setw(2) << (secPassedFromMid % 60) << ((secPassedFromMid/3600) < 12 ? " AM" : " PM");
}