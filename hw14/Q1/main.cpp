#include "NumToString.h"
#include <iostream>
using namespace std;

int main()
{
    int testCases[][3] = { 
        {14, 30, 45},   // Valid 
        {23, 59, 59},   // Valid 
        {24, 0, 0},     // Invalid hour 
        {12, 60, 0},    // Invalid minute 
        {12, 30, 60},   // Invalid second 
        {25, 60, 20},   // Invalid hour and minute 
        {26, 70, 60},   // Invalid hour, minute and second 
    };    
    
    for (int i=0; i<7; i++){
        int *subarray = testCases[i];
        cout << "Case " << i+1 << ": ";
        NumToString NTS(subarray[0], subarray[1], subarray[2]);
        NTS.conversion();
        cout << endl;
    }
    
    return 0;
}
