#include "Package.h"
#include "TwoDay.h"
#include "Overnight.h"
#include <iostream>
using namespace std;

int main()
{
    // Create a Package object
    Package package("John Doe", "123 Main St", "Anytown", "CA", "12345",
                    "Jane Smith", "456 Elm St", "Othertown", "NY", "54321",
                    10, 0.5);
    cout << "Package shipping cost: $" << package.calculateCost() << endl;

    // Create a TwoDayPackage object
    TwoDayPackage twoDayPackage("John Doe", "123 Main St", "Anytown", "CA", "12345", "Jane Smith", "456 Elm St", "Othertown", "NY", "54321", 10, 0.5, 5);
    cout << "Two-day package shipping cost: $" << twoDayPackage.calculateCost() << endl;
    
    // Create an OvernightPackage object
    OvernightPackage overnightPackage("John Doe", "123 Main St", "Anytown", "CA", "12345", "Jane Smith", "456 Elm St", "Othertown", "NY", "54321", 10, 0.5, 2);
    cout << "Overnight package shipping cost: $" << overnightPackage.calculateCost() << endl;
    
    return 0;

}
