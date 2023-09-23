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

// Function to print a subarray (used for visualization)
void printArray(int* arr, int left, int right) {
    for (int i = left; i <= right; ++i) {
        if (i > left) {
            std::cout << ", ";
        }
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

// Partition function to select a pivot and rearrange elements accordingly
int partition(int* arr, int start, int end) {
    int pivot = arr[end]; // Choose the last element as the pivot
    int p = start; // Initialize the partition index
    
    for (int i = start; i < end; ++i) {
        if (arr[i] <= pivot) {
            // Swap arr[i] and arr[p] if arr[i] is less than or equal to the pivot
            if (i != p) {
                int temp = arr[p];
                arr[p] = arr[i];
                arr[i] = temp;
            }
            ++p;
        }
    }
    
    // Swap the pivot element with the element at the partition index
    if (p != end) {
        int temp = arr[p];
        arr[p] = pivot;
        arr[end] = temp;
    }
    
    return p; // Return the partition index
}

// Quick Sort algorithm
void quickSort(int* arr, int start, int end) {
    if (start < end) {
        // Output the current state of the array (visualization)
        std::cout << "-> ";
        printArray(arr, start, end);
        
        // Partition the array and get the pivot index
        int p = partition(arr, start, end);
        
        // Recursively sort the subarrays on both sides of the pivot
        quickSort(arr, start, p - 1);
        quickSort(arr, p + 1, end);
        
        // Output the array after partitioning (visualization)
        std::cout << "<- ";
        printArray(arr, start, end);
    }
}

int main() {
    std::cout << "Enter the size of the array: ";
    int sz;
    std::cin >> sz;
    
    int* arr = new int[sz];
    
    for (int i = 0; i < sz; ++i) {
        std::cout << "Enter the value of element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    
    // Perform quick sort
    quickSort(arr, 0, sz - 1);
    
    std::cout << "Sorted array is:" << std::endl;
    printArray(arr, sz);
    
    // Clean up dynamically allocated memory
    delete[] arr;
    
    return 0;
}
