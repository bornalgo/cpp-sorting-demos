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

// Insertion Sort algorithm
void insertionSort(int* arr, int sz) {
    for (int i = 1; i < sz; ++i) {
        // Store the current element to be inserted
        int currentElement = arr[i];
        
        // Start comparing with the previous element
        int j = i - 1;
        
        // Iterate through the sorted portion of the array
        while (j >= 0 && arr[j] > currentElement) {
            // Shift elements to the right to make space for the current element
            arr[j + 1] = arr[j];
            --j;
        }
        
        // Insert the current element into its correct position
        arr[j + 1] = currentElement;

        // Display the array after this iteration (optional)
        std::cout << "Iteration " << i << ": ";
        printArray(arr, sz);
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
    
    // Perform insertion sort
    insertionSort(arr, sz);
    
    std::cout << "Sorted array is:" << std::endl;
    printArray(arr, sz);
    
    // Clean up dynamically allocated memory
    delete[] arr;
    return 0;
}
