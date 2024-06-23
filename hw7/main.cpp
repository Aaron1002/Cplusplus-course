#include <iostream>
#include "HugeInteger.h"
using namespace std;

int main()
{
    HugeInteger num1("63434");
    HugeInteger num2("4534");
    HugeInteger total;
    
    num1.add(num2, total);
    cout << "num1 + num2: ";
    num1.output(total);
    num1.subtract(num2, total);
    cout << "\nThe difference between two integers: ";
    num1.output(total);
    num1.multiply(num2, total);
    cout << "\nnum1 * num2: ";
    num1.output(total);
    //num1.divide(num2, total);
    cout << "\n";
    //num1.modulus(num2, total);
    
    cout << "num1 is equal to num2: "; 
    num1.isEqualTo(num2);
    
    cout << "num1 is not equal to num2: ";
    num1.isNotEqualTo();
    
    cout << "num1 is greater than num2: ";
    num1.isGreaterThan();
    
    cout << "num1 is less than num2: ";
    num1.isLessThan();
    
    cout << "num1 is greater than or equal to num2: ";
    num1.isGreaterThanOrEqualTo();
    
    cout << "num1 is less than or equal to num2: ";
    num1.isLessThanOrEqualTo();
    
    cout << "num1 is zero: ";
    num1.isZero();

    return 0;
}