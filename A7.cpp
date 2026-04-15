#include <iostream>
using namespace std;

template <typename T>
void selectionSort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        T temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

template <typename T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
}

int main() {
    int intArray[] = {64, 34, 25, 12, 22, 11, 90};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);

    cout << "Sorting Integer Array: ";
    selectionSort(intArray, intSize);
    displayArray(intArray, intSize);

    float floatArray[] = {64.5, 34.3, 25.1, 12.2, 22.4, 11.0, 90.7};
    int floatSize = sizeof(floatArray) / sizeof(floatArray[0]);

    cout << "Sorting Float Array: ";
    selectionSort(floatArray, floatSize);
    displayArray(floatArray, floatSize);

    return 0;
}