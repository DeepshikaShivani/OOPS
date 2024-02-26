#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int size) {
    if (size <= 1) {
        return size;
    }

    int index = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] != arr[index]) {
            arr[++index] = arr[i];
        }
    }

    return index + 1;
}

int main() {
    int sortedArray[] = {1, 1, 2, 2, 2, 3, 4, 4, 5}; // Example sorted array

    int originalSize = sizeof(sortedArray) / sizeof(sortedArray[0]);

    cout << "Original Array: ";
    for (int i = 0; i < originalSize; ++i) {
        cout << sortedArray[i] << " ";
    }
    cout << endl;

    int newSize = removeDuplicates(sortedArray, originalSize);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; ++i) {
        cout << sortedArray[i] << " ";
    }
    cout << endl;

    return 0;
}

