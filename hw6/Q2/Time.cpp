#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;

Time::Time(int hr, int min, int sec){
    setTime(hr, min, sec);
}

void Time::setTime(int h, int m, int s){
    hour = (h >= 0 and h < 24) ? h : 0;
    minute = (m >= 0 and m < 60) ? m : 0;
    second = (s >= 0 and s < 60) ? s : 0;
}

void Time::addTick(){
    second += 1;
    if (second >= 60){
        minute += 1;
        if (minute >= 60){
            hour += 1;
        }
    }
    
    hour = (hour >= 0 and hour < 24) ? hour : 0;
    minute = (minute >= 0 and minute < 60) ? minute : 0;
    second = (second >= 0 and second < 60) ? second : 0;
}

void Time::printUniversal(){
    cout << setfill('0') << setw(2) << hour << ":" 
        << setw(2) << minute << ":" << setw(2) << second;
}

void Time::printStandard(){
    cout << ((hour == 0 or hour == 12) ? 12 : hour % 12) << ":"
        << setfill('0') << setw(2) << minute << ":" << setw(2)
        << second << (hour < 12 ? " AM" : " PM");
}