#include "HR_error.h"
#include "Min_error.h"
#include "Sec_error.h"
#include "NumToString.h"
#include <iostream>
using namespace std;

NumToString::NumToString(){}

NumToString::NumToString(int hr, int min, int sec) : hour(0), minute(0), second(0){
    setHour(hr);
    setMinute(min);
    setSecond(sec);
}

void NumToString::conversion() const{
    if (hour > 0 and hour < 24 and minute > 0 and minute < 60 and second > 0 and second < 60)
        cout << hour << " hours, " << minute << " minutes, and " << second << " seconds" << endl;   
}

void NumToString::setHour(int hr){
    try{
        if (hr < 0 or hr > 23){
            throw HourError();
        }
        hour = hr;
    }
    catch(HourError &hourError){
        cout << "Exception occured: " << hourError.what() << endl;   
    }
    
}

void NumToString::setMinute(int min){
    try{
        if (min < 0 or min > 59){
            throw MinuteError();
        }
        minute = min;
    }
    catch(MinuteError &minuteError){
        cout << "Exception occured: " << minuteError.what() << endl;
    }
    
}

void NumToString::setSecond(int sec){
    try{
        if (sec < 0 or sec > 59){
            throw SecondError();
        }
        second = sec;
    }
    catch(SecondError &secondError){
        cout << "Exception occured: " << secondError.what() << endl;
    }
        
}

int NumToString::getHour() const{
    return hour;
}

int NumToString::getMinute() const{
    return minute;
}

int NumToString::getSecond() const{
    return second;
}