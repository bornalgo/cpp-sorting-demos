#include <iostream>

// Function to print an array
void printArray(int* arr, int sz) {
    std::cout << "[";
    for (int i = 0; i < sz; ++i) {
        if (i > 0) {
            std::cout << ", ";
        }
        std::cout << arr[i];
    }
    std::cout << "]" << std::endl;
}

// Function to perform the bubble sort algorithm
void slowBubbleSort(int* arr, int sz) {
    // Outer loop for the number of passes
    for (int pass = 0; pass < sz - 1; ++pass) {
        std::cout << "Pass " << pass + 1 << ": ";
        printArray(arr, sz);
        
        // Inner loop for comparisons and swapping
        for (int j = 0; j < sz - pass - 1; ++j) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap if the current element is larger than the next
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Optimized Bubble Sort algorithm
void bubbleSort(int* arr, int sz) {
    for (int i = 0; i < sz - 1; ++i) {
        bool swapped = false;
        std::cout << "Pass " << i + 1 << ": ";
        printArray(arr, sz);
        for (int j = 0; j < sz - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        
        // If no two elements were swapped in this pass, the array is sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    std::cout << "Enter the size of the array: ";
    int sz;
    std::cin >> sz;
    int* arr = new int[sz];

    // Input values into the array
    for (int i = 0; i < sz; ++i) {
        std::cout << "Enter the value of element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Perform bubble sort
    bubbleSort(arr, sz);

    std::cout << "Sorted array: " << std::endl;
    printArray(arr, sz);

    // Clean up memory
    delete[] arr;
    return 0;
}
