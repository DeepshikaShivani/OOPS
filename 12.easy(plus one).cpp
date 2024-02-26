#include <iostream>

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Function to add one to the number represented by the array
void plusOne(int arr[], int n) {
    int carry = 1;  // Start with the carry as 1 since we want to add one
    for (int i = n - 1; i >= 0; --i) {
        int sum = arr[i] + carry;
        arr[i] = sum % 10;  // Update the current digit
        carry = sum / 10;   // Update the carry
    }
    
    // If there's still a carry after processing all digits
    // it means we need to expand the array to accommodate it
    if (carry > 0) {
        // Assuming the array is dynamically allocated
        // This would require a more dynamic approach if you want a flexible size
        std::cout << "Need to expand the array to accommodate the carry." << std::endl;
    }
}

int main() {
    // Example array representing a number, let's say 123
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    printArray(arr, n);

    // Call the plusOne function to add one to the number
    plusOne(arr, n);

    std::cout << "Array after adding one: ";
    printArray(arr, n);

    return 0;
}
