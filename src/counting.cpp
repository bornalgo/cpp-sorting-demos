#include <iostream>
#include <climits> // Include the necessary header for INT_MIN and INT_MAX

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

// Function to find the range (min and max values) of the input array
void getRange(int* arr, int sz, int& min, int& max) {
    max = INT_MIN;
    min = INT_MAX;
    for (int i = 0; i < sz; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        } 
        if (arr[i] > max) {
            max = arr[i];
        }
    }
}

// Slow Counting Sort with high time complexity and low space complexity
void slowCountingSort(int* arr, int sz) {
    int min, max;
    getRange(arr, sz, min, max);
    int range = max - min + 1;
    
    if (range > 1) {
        // Create a count array to store the count of each element
        int* countArray = new int[range] {0};
        
        // Count the occurrences of each element
        for (int i = 0; i < sz; ++i) {
            countArray[arr[i] - min]++;
        }
        
        // Print the count array
        printArray(countArray, range);
        
        // Reconstruct the sorted array based on counts
        int currentIndex = 0;
        for (int i = 0; i < range; ++i) {
            for (int j = 0; j < countArray[i]; ++j) {
                arr[currentIndex++] = i + min;
            }
        }
        
        // Clean up dynamically allocated memory
        delete[] countArray;
    }
}

// Counting Sort with low time complexity and high space complexity
void countingSort(int* arr, int sz) {
    int min, max;
    getRange(arr, sz, min, max);
    int range = max - min + 1;
    
    if (range > 1) {
        // Create a count array to store the count of each element
        int* countArray = new int[range] {0};
        
        // Create an output array to store the sorted elements
        int* outArray = new int[sz];
        
        // Count the occurrences of each element
        for (int i = 0; i < sz; ++i) {
            countArray[arr[i] - min]++;
        }
        
        // Calculate cumulative counts
        for (int i = 1; i < range; ++i) {
            countArray[i] += countArray[i - 1];
        }
        
        // Build the output array by placing elements in their correct positions
        for (int i = sz - 1; i >= 0; --i) {
            outArray[--countArray[arr[i] - min]] = arr[i];
        }
        
        // Copy the sorted elements back to the original array
        for (int i = 0; i < sz; ++i) {
            arr[i] = outArray[i];
        }
        
        // Clean up dynamically allocated memory
        delete[] outArray;
        delete[] countArray;
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
    
    // Perform counting sort
    countingSort(arr, sz);
    
    std::cout << "Sorted array: " << std::endl;
    printArray(arr, sz);
    
    // Clean up dynamically allocated memory
    delete[] arr;
    return 0;
}
