#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date d1(2024, 4, 11);
    Date d2(2024, 45, 14);
    
    cout << "Year: " << d1.getYear() << ", ";
    cout << "Month: " << d1.getMonth() << ", ";
    cout << "Day: " << d1.getDay() << endl;
    d1.displayDate();
    
    cout << endl;
    
    cout << "INVALID MONTH VALUE: " << endl;
    cout << "Year: " << d2.getYear() << ", ";
    cout << "Month: " << d2.getMonth() << ", ";
    cout << "Day: " << d2.getDay() << endl;
    d2.displayDate();
    
    return 0;
}
