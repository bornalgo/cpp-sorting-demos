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

// Shell Sort using the insertion sort approach
void shellSort(int* arr, int sz) {
    for (int gap = sz / 2; gap > 0; gap /= 2) {
        std::cout << "Gap " << gap << ": ";
        printArray(arr, sz);
        
        // Perform insertion sort with the specified gap
        for (int i = gap; i < sz; ++i) {
            int key = arr[i];
            int j = i;
            
            // Insert the key into its correct position in the sorted subarray
            while (j >= gap && arr[j - gap] > key) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = key;
        }
    }
}

// Shell Sort using the bubble sort approach
void shellSortBubble(int* arr, int sz) {
    for (int gap = sz / 2; gap > 0; gap /= 2) {
        std::cout << "Gap " << gap << ": ";
        printArray(arr, sz);
        
        // Perform bubble sort with the specified gap
        for (int i = 0; i < sz - gap; ++i) {
            for (int j = i + gap; j < sz; j += gap) {
                if (arr[i] > arr[j]) {
                    // Swap elements if they are in the wrong order
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
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
    
    // Perform Shell Sort with insertion sort approach
    shellSort(arr, sz);
    
    std::cout << "Sorted array is:" << std::endl;
    printArray(arr, sz);
    
    delete[] arr;
    return 0;
}
