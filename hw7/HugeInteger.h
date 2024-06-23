#ifndef HugeInteger_H
#define HugeInteger_H
#include <string>
using namespace std;

class HugeInteger{
    public:
        static const int SIZE = 40;
        int digits[SIZE] = {};
        
        HugeInteger(string = "0");
        void input(string);
        void output(HugeInteger &);
        
        void add(HugeInteger &, HugeInteger &);
        void subtract(HugeInteger &, HugeInteger &);
        void multiply(HugeInteger &, HugeInteger &);
        void divide(HugeInteger &, HugeInteger &);
        void modulus(HugeInteger &, HugeInteger &);
        
        void isEqualTo(HugeInteger &);
        void isNotEqualTo();
        void isGreaterThan();
        void isLessThan();
        void isGreaterThanOrEqualTo();
        void isLessThanOrEqualTo();
        void isZero();
        
    private:
        string inputValue;
        int valueLength;
        int largerLength; 
        int lengthAfterCalculation;
        int largerInteger;
        int equalCounter = 0;
        int zeroCounter = 0;
        
        void beforeSubtract(HugeInteger &);
};

#endif