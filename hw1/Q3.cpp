#include <iostream>
using namespace std;

void mergeAndDoubleSecondArrayElements(int arr1[], int arr1Size, const int arr2[], int arr2Size, int combinedCapacity);


int main() {
    int combinedCapacity = 10;
    int arr1[combinedCapacity] = {1, 4, 6, 2, 10};
    const int arr2[4] = {2, -3, -6, 0};
    int arr1Size = 5;   // current array1 size
    const int arr2Size = sizeof(arr2)/sizeof(arr2[0]);
    
    
    cout << "Array1: [ ";
    for (int i=0; i<arr1Size; i++){
        cout << arr1[i] << " ";
    }
    cout << "]" << endl;
    
    cout << "Array2: [ ";
    for (int i=0; i<arr2Size; i++){
        cout << arr2[i] << " ";
    }
    cout << "]" << endl;
    
    mergeAndDoubleSecondArrayElements(arr1, arr1Size, arr2, arr2Size, arr1Size+arr2Size);
    
    cout << "Combined array: [ ";
    for (int i=0; i<arr1Size+arr2Size; i++){
        cout << arr1[i] << " ";
    }
    cout << "]" << endl;    
    
    return 0;
}

void mergeAndDoubleSecondArrayElements(int arr1[], int arr1Size, const int arr2[], int arr2Size, int combinedCapacity){

    if(arr1Size + arr2Size > combinedCapacity){
        cout << "Error, array capacity is not enough." << endl;
        return;
    }
    
    for (int i=0; i<arr2Size; i++){
        arr1[arr1Size + i] = arr2[i] * 2;
    }

}

