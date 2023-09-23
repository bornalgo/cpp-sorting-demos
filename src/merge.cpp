#include <iostream>

static int* temp; // Temporary array for merging

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

// Merge two sorted subarrays into one
void merge(int* arr, int left, int middle, int right) {
    int i = left;
    int j = middle + 1;
    int k = left;
    
    // Merge the two subarrays into the temporary array
    while (i <= middle && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            ++i;
        } else {
            temp[k] = arr[j];
            ++j;
        }
        ++k;
    }
    
    // Copy any remaining elements from the left subarray
    while (i <= middle) {
        temp[k] = arr[i];
        ++i;
        ++k;
    }
    
    // Copy any remaining elements from the right subarray
    while (j <= right) {
        temp[k] = arr[j];
        ++j;
        ++k;
    }
    
    // Copy the merged elements back to the original array
    for (int k = left; k <= right; ++k) {
        arr[k] = temp[k];
    }
}

// Merge Sort algorithm
void mergeSort(int* arr, int left, int right) {
    if (left < right) {
        // Output the current state of the array (visualization)
        std::cout << "-> ";
        printArray(arr, left, right);
        
        // Calculate the middle index
        int middle = (left + right) / 2;
        
        // Recursively sort the left and right subarrays
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        
        // Merge the sorted subarrays
        merge(arr, left, middle, right);
        
        // Output the array after merging (visualization)
        std::cout << "<- ";
        printArray(arr, left, right);
    }
}

int main() {
    std::cout << "Enter the size of the array: ";
    int sz;
    std::cin >> sz;
    
    int* arr = new int[sz];
    temp = new int[sz];
    
    for (int i = 0; i < sz; ++i) {
        std::cout << "Enter the value of element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    
    // Perform merge sort
    mergeSort(arr, 0, sz - 1);
    
    std::cout << "Sorted array is:" << std::endl;
    printArray(arr, sz);
    
    // Clean up dynamically allocated memory
    delete[] temp;
    delete[] arr;
    
    return 0;
}
