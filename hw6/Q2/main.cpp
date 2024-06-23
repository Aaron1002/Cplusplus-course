#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
    Time t1;
    Time t2(0, 0, 56);
    Time t3(0, 59, 56);
    Time t4(23, 59, 56);
    Time t5(0, 0, 56);
    
    cout << "After adding one tick:" << endl;
    
    cout << "\n" << "t1: all arguments defaultd\n";
    t1.addTick();
    t1.printUniversal();
    cout << "\n ";
    t1.printStandard();
    
    cout << "\n\nt2:\n";
    for (int i=0; i <= 5; i++){
        t2.addTick();
        t2.printStandard();
        cout << "\n";
    }
    
    cout << "\n\nt3:\n";
    for (int i=0; i <= 5; i++){
        t3.addTick();
        t3.printStandard();
        cout << "\n";
    }
    
    cout << "\n\nt4:\n";
    for (int i=0; i <= 5; i++){
        t4.addTick();
        t4.printStandard();
        cout << "\n";
    }
    
    cout << "\n\nt5:" << endl;
    for (int i=0; i <= 5; i++){
        t5.addTick();
        t5.printStandard();
        cout << "\n";
    }

    cout << endl;

    return 0;
}