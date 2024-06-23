#include "NotFoundError.h"

#include <iostream>
#include <string>
using namespace std;

int getProductID(const int [], const string [], int, const string);

int main()
{
    int productIds[] = {4, 5, 8, 10, 13}; 
    string products[] = {"computer", "flash drive", "mouse", "printer",  "camera"}; 
    try{
        cout << getProductID(productIds, products, 5, "mouse") << endl; 
        cout << getProductID(productIds, products, 5, "camera") << endl; 
        cout << getProductID(productIds, products, 5, "laptop") << endl; 
    }
    catch(exception &e){
        cout << e.what() << endl;
    }
    
    return 0;
}

int getProductID(const int ids[], const string names[], int numProducts, const string target){ 
    
    ProductNotFoundException NFE;
    
    for (int i = 0; i < numProducts; i++) 
    { 
        if (names[i] == target) 
            return ids[i]; 
    } 
    throw NFE;
    
} 