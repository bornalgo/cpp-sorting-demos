#include <iostream>

// Function to perform Selection Sort
void selectionSort(int* arr, int sz) {
    for (int i = 0; i < sz - 1; ++i) {
        int min = i;
        
        // Find the index of the minimum element in the unsorted portion
        for (int j = i + 1; j < sz; ++j) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        
        // Swap the found minimum element with the first element in the unsorted portion
        if (min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

int main() {
    std::cout << "Enter the size of the unsorted array: ";
    int sz;
    std::cin >> sz;
    
    // Create an array to hold the unsorted elements
    int* arr = new int[sz];
    
    // Input values for the unsorted array
    for (int i = 0; i < sz; ++i) {
        std::cout << "Enter the value at element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    
    // Perform Selection Sort
    selectionSort(arr, sz);
    
    // Output the sorted array
    std::cout << "The sorted array is: [";
    for (int i = 0; i < sz; ++i) {
        std::cout << arr[i];
        if (i < sz - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    // Clean up dynamically allocated memory
    delete[] arr;
    
    return 0;
}
