#include <iostream>
#include <climits>

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

// Function to find the maximum value in the array
int getMax(int* arr, int sz) {
    int max = INT_MIN;
    for (int i = 0; i < sz; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Counting Sort for Radix Sort
void countingSort(int* arr, int sz, int div) {
    const int range = 10; // Number of digits from 0 to 9
    int* countArray = new int[range] {0};
    int* outArray = new int[sz];
    
    // Count the occurrences of each digit at the specified position (div)
    for (int i = 0; i < sz; ++i) {
        countArray[(arr[i] / div) % range]++;
    }
    
    // Calculate the cumulative counts
    for (int i = 1; i < range; ++i) {
        countArray[i] += countArray[i - 1];
    }
    
    // Build the output array by placing elements in the correct order
    for (int i = sz - 1; i >= 0; --i) {
        outArray[--countArray[(arr[i] / div) % range]] = arr[i];
    }
    
    // Copy the sorted elements back to the original array
    for (int i = 0; i < sz; ++i) {
        arr[i] = outArray[i];
    }
    
    // Clean up dynamically allocated memory
    delete[] outArray;
    delete[] countArray;
}

// Radix Sort algorithm
void radixSort(int* arr, int sz) {
    int max = getMax(arr, sz);
    
    // Perform counting sort for each digit position (starting from the least significant)
    for (int div = 1; (max / div) > 0; div *= 10) {
        printArray(arr, sz);
        countingSort(arr, sz, div);
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
    
    // Perform radix sort
    radixSort(arr, sz);
    
    std::cout << "Sorted array is:" << std::endl;
    printArray(arr, sz);
    
    // Clean up dynamically allocated memory
    delete[] arr;
    
    return 0;
}
