#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(int y, int m, int d){
    setYear(y);
    setMonth(m);
    setDay(d);
}

void Date::displayDate(){
    cout << year << "/" << month << "/" << day << endl;
}

void Date::setYear(int y){
    year = y;
}

void Date::setMonth(int m){
    month = (m >= 1 and m <= 12) ? m : 1;
}

void Date::setDay(int d){
    day = d;
}

int Date::getYear(){
    return year;
}

int Date::getMonth(){
    return month;
}

int Date::getDay(){
    return day;
}