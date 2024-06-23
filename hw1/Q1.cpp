#include <iostream>
using namespace std;

void findAndInvertMinimum(int[], int);

int main() {
    int arr[5] = { 1, -4, 3, 5, -5 };
    const int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: " << "[ ";
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;

    findAndInvertMinimum(arr, arrSize);

    cout << "Modified array: " << "[ ";
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}

void findAndInvertMinimum(int arr[], const int size) {

    int minIndex;

    for (int i=1; i<size; i++) {
        if (arr[i] < arr[i-1]) {
            minIndex = i;
        }
    }

    arr[minIndex] *= -1;
}

