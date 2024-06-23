#include <iostream>
using namespace std;

void negateElements(int [], int);

int main() {
    int arr[5] = {1, 4, 6, 2, 10};
    const int arrSize = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Original array: [ ";
    for (int i=0; i<arrSize; i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
    
    negateElements(arr, arrSize);
    
    cout << "Modified array: [ ";
    for (int i=0; i<arrSize; i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;    
        
    return 0;
}

void negateElements(int arr[], const int size){

    for (int i=0; i<size; i++){
        arr[i] *= -1;
    }

}

