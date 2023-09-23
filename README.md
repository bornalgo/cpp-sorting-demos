# cpp-sorting-demos

## _A collection of well-documented C++ sorting algorithm examples, including bubble, counting, insertion, merge, quick, radix, selection, and shell sorts. Explore, learn, and implement essential sorting algorithms in your projects._

Explore various C++ sorting algorithms, including bubble, counting, insertion, merge, quick, radix, selection, and shell sorts. This repository contains well-documented code examples for each sorting algorithm, making it easy to understand and implement these essential algorithms in your projects. Learn, compare, and improve your sorting algorithm knowledge with this comprehensive collection.

## Usage

To compile and run the sorting algorithms in this repository, follow these steps:

1. **Install Visual Studio Code (VS Code)**:
   If you don't already have VS Code installed, you can download it from [here](https://code.visualstudio.com/).

2. **Install the C/C++ Compile Run extension**:
   - Download and install the C/C++ Compile Run extension from the [Visual Studio Code Marketplace](https://marketplace.visualstudio.com/items?itemName=danielpinto8zz6.c-cpp-compile-run).

3. **Clone the Repository**:
   - Clone this repository to your local machine using the following command:
     ```
     git clone https://github.com/bornalgo/cpp-sorting-demos.git
     ```

4. **Open VS Code at the Repository Directory**:
   - Navigate to the cloned repository's directory using your terminal or file explorer.
   - Open Visual Studio Code by typing `code .` in your terminal (make sure you are at the root of the repository) or by opening the directory in VS Code using the `File` -> `Open Folder` option.

5. **Compile and Run**:
   - Inside the `src` folder, you'll find multiple C++ files for different sorting algorithms (e.g., bubble.cpp, insertion.cpp, merge.cpp, etc.).
   - Open the C++ file for the sorting algorithm you want to run.
   - Press `F5` or use the "Run" option to compile and run the code.
   
   Example:
   - If you want to run the bubble sort, open `bubble.cpp`, press `F5`, and the extension will compile and execute the code.
   
   Repeat step 5 for other sorting algorithms as needed.

By following these steps, you can easily compile and run the sorting algorithms using Visual Studio Code and the C/C++ Compile Run extension.

## Description

###
<details>
  <summary><strong>Bubble Sort</strong></summary>
  
**Bubble Sort** is a simple comparison-based sorting algorithm that repeatedly steps through the list of elements to be sorted, compares adjacent elements,andswaps them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, which means that the list is sorted.
**Time Complexity**:
- Best Case: O(n) - When the input list is already sorted, and no swaps are required.
- Worst Case: O(n^2) - When the input list is sorted in reverse order, and each element needs to be compared and swapped in each pass.
- Average Case: O(n^2) - Typically, bubble sort performs poorly on average.
Bubble sort is not considered an efficient sorting algorithm, especially for large datasets, due to its quadratic time complexity. There are more efficientsortingalgorithms like Quick Sort, Merge Sort, and Heap Sort that are often preferred for larger datasets.
**Space Complexity**:
- Bubble sort is an in-place sorting algorithm, which means it doesn't require additional memory to sort the elements. Hence, its space complexity is O(1)indicating that it uses a constant amount of memory for the sorting process.
**How Bubble Sort Works**:
1. Start at the beginning of the list.
2. Compare the first two elements. If the first element is larger than the second, swap them.
3. Move to the next pair of elements (from the second to the third), and repeat the comparison and swapping process.
4. Continue this process until you reach the end of the list for the first pass. At the end of the first pass, the largest element will have "bubbled up" tothelast position.
5. Repeat steps 1-4 for the remaining unsorted portion of the list (excluding the last element, which is already in its correct position after the first pass).
6. Continue this process until the entire list is sorted.
Bubble sort gets its name from the way smaller elements "bubble" to the top of the list in each pass. It is a straightforward sorting algorithm but notefficientfor large datasets, making it primarily useful for educational purposes or when dealing with small datasets where simplicity is preferred overefficiency.
<details>
  <summary>Illustrate Bubble Sort</summary>
Let's illustrate the Bubble Sort algorithm step by step using a simple example. Consider the following unsorted array:

**Unsorted Array**: [5, 1, 4, 2, 8]

We will use Bubble Sort to sort this array in ascending order. Here's how Bubble Sort works step by step:

**Step 1**:
- Compare the first two elements, 5 and 1.
- Since 5 is greater than 1, we swap them.
- The array becomes: [1, 5, 4, 2, 8]

**Step 2**:
- Compare the second and third elements, 5 and 4.
- Again, we swap them because 5 is greater than 4.
- The array becomes: [1, 4, 5, 2, 8]

**Step 3**:
- Compare the third and fourth elements, 5 and 2.
- Once more, we swap them because 5 is greater than 2.
- The array becomes: [1, 4, 2, 5, 8]

**Step 4**:
- Compare the fourth and fifth elements, 5 and 8.
- This time, there's no need to swap as 5 is less than 8.
- The array remains: [1, 4, 2, 5, 8]

**Step 5** (End of Pass 1):
- We've completed one pass through the array, and the largest element (8) has "bubbled up" to the end.
- We can now consider the remaining sub-array [1, 4, 2, 5] for the next pass.

**Step 6**:
- Compare the first two elements of the sub-array, 1 and 4.
- They are in the correct order, so no swap is needed.
- The sub-array remains: [1, 4, 2, 5]

**Step 7**:
- Compare the second and third elements of the sub-array, 4 and 2.
- We swap them because 4 is greater than 2.
- The sub-array becomes: [1, 2, 4, 5]

**Step 8**:
- Compare the third and fourth elements of the sub-array, 4 and 5.
- They are in the correct order, so no swap is needed.
- The sub-array remains: [1, 2, 4, 5]

**Step 9** (End of Pass 2):
- The second pass is complete, and the second largest element (5) has "bubbled up" to its correct position.

**Step 10** (Pass 3):
- We continue with the remaining sub-array [1, 2, 4] for the third pass.

**Step 11**:
- Compare the first two elements of the sub-array, 1 and 2.
- They are already in the correct order.

**Step 12**:
- Compare the second and third elements of the sub-array, 2 and 4.
- They are also in the correct order.

**Step 13** (End of Pass 3):
- The third pass is complete, and the array is sorted.

**Final Sorted Array**: [1, 2, 4, 5, 8]

Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order. In each pass, the largest unsorted element "bubbles up" to its correct position at the end of the array. This process continues until the entire array is sorted.
</details>
</details>

###
<details>
  <summary><strong>Counting Sort</strong></summary>
  
**Counting Sort** is a non-comparison-based sorting algorithm that works well when the range of input values is known in advance. It counts the occurrences of each element in the input array, then uses this information to construct a sorted output array.

**Time Complexity**:
- Best Case: O(n + k) - When the range of input values is small, and the input is uniformly distributed, counting sort can achieve linear time complexity.
- Worst Case: O(n + k) - Even in the worst case, counting sort is linear, where 'n' is the number of elements to be sorted, and 'k' is the range of input values.
- Average Case: O(n + k) - Counting sort performs consistently well when the range of values is small.

Counting sort is particularly efficient for sorting integers or objects with integer keys. However, it is not suitable for sorting data with a large range or floating-point numbers due to its space complexity.

**Space Complexity**:
- Counting sort has a space complexity of O(k), where 'k' is the range of input values. This additional space is used to create the counting array, which can make it impractical for large ranges of input values.

**How Counting Sort Works**:

1. Find the range of input values (minimum and maximum).
2. Create a counting array of size `k`, where `k` is the range of input values, initialized to all zeros.
3. Iterate through the input array and, for each element, increment the corresponding index in the counting array by 1.
4. Compute the cumulative sum of the counting array. This step helps determine the positions of elements in the sorted output.
5. Create an output array of the same size as the input array.
6. For each element in the input array, use the counting array to determine its sorted position and place it in the output array accordingly.
7. The output array now contains the sorted elements.

Counting sort is highly efficient when the range of input values is small because it avoids comparisons and relies on counting occurrences directly. However, it is not an in-place sorting algorithm, and its space complexity can become a limitation for large ranges of input values. It is best suited for situations where the range of values is relatively small and known in advance.
<details>
  <summary>Illustrate Counting Sort</summary>
Let's illustrate the Counting Sort algorithm step by step using a simple example. Counting Sort is a non-comparative sorting algorithm that works well when the range of input values is small compared to the number of elements in the array.

Consider the following unsorted array:

**Unsorted Array**: [4, 2, 2, 8, 3, 3, 1]

Here's how Counting Sort works step by step:

**Step 1** (Find the range of input values):
- Find the minimum and maximum values in the array.
  - Minimum: 1
  - Maximum: 8

**Step 2** (Create a counting array):
- Create a counting array to store the count of each unique element within the range.
  - Counting Array: [0, 0, 0, 0, 0, 0, 0, 0, 0]
  - The size of the counting array is determined by the range (max - min + 1), so it has 8 elements.

**Step 3** (Count occurrences):
- Traverse the original array and count the occurrences of each element.
  - For each element in the original array, increment the corresponding index in the counting array.
  - After counting, the counting array becomes: [1, 2, 2, 2, 0, 0, 0, 1, 0]
  - Each index represents the count of its corresponding element.

**Step 4** (Calculate cumulative counts):
- Calculate the cumulative counts by summing up the counts in the counting array.
  - Cumulative Counts Array: [1, 3, 5, 7, 7, 7, 7, 8, 8]
  - Each index represents the sum of counts up to that element.

**Step 5** (Place elements in their sorted positions):
- Create a sorted array of the same size as the original array.
  - Sorted Array: [0, 0, 0, 0, 0, 0, 0, 0, 0] (initialized with zeros)
- Traverse the original array from right to left.
  - For each element, find its cumulative count in the cumulative counts array.
  - Use the cumulative count to determine its position in the sorted array.
  - Decrease the cumulative count by 1 for the element.
- After placing all elements, the sorted array becomes: [1, 2, 2, 3, 3, 4, 8]

**Final Sorted Array**: [1, 2, 2, 3, 3, 4, 8]

Counting Sort works by counting the occurrences of each element in the input array and then placing the elements in their correct positions in the sorted array based on their cumulative counts. It is efficient for sorting integers or objects with a small range of possible values.
</details>
</details>

###
<details>
  <summary><strong>Insertion Sort</strong></summary>
  
**Insertion Sort** is a simple comparison-based sorting algorithm that builds the final sorted array one item at a time. It is particularly efficient for small datasets or nearly sorted data.

**Time Complexity**:
- Best Case: O(n) - When the input array is already sorted, and no elements need to be moved.
- Worst Case: O(n^2) - When the input array is sorted in reverse order, and each element needs to be compared and possibly moved to its correct position in each pass.
- Average Case: O(n^2) - In most practical cases, insertion sort exhibits quadratic time complexity.

Insertion sort is efficient for small datasets or datasets that are nearly sorted but becomes inefficient for larger datasets compared to more advanced sorting algorithms like Merge Sort or Quick Sort.

**Space Complexity**:
- Insertion sort is an in-place sorting algorithm, meaning it does not require additional memory for sorting. Its space complexity is O(1), indicating that it uses a constant amount of memory for the sorting process.

**How Insertion Sort Works**:

1. Start with the second element (index 1) in the array. The first element is assumed to be in its correct position since a single element is always sorted.
2. Compare the current element with the elements before it (i.e., elements to its left) and move backward through the array.
3. While moving backward, if an element is greater than the current element, shift the greater element one position to the right.
4. Repeat step 3 until you find an element that is smaller than the current element or until you reach the beginning of the array.
5. Insert the current element in its correct position in the sorted portion of the array.
6. Move to the next unsorted element and repeat steps 2-5 until all elements are in their correct sorted positions.

Insertion sort works like sorting a hand of cards where you start with one card (the first element) and keep adding cards (elements) to your sorted hand while ensuring they are in the correct order relative to the cards you already have. It's an efficient choice for small or nearly sorted lists but becomes inefficient for larger datasets due to its quadratic time complexity.
<details>
  <summary>Illustrate Insertion Sort</summary>
Let's illustrate the Insertion Sort algorithm step by step using a simple example. Insertion Sort is a comparison-based sorting algorithm that builds a sorted array one element at a time by repeatedly taking the next unsorted element and inserting it into its correct position within the sorted part of the array.

Consider the following unsorted array:

**Unsorted Array**: [5, 2, 9, 3, 6]

Here's how Insertion Sort works step by step:

**Step 1** (Start with the first element):
- The first element, 5, is considered sorted by itself.
- Array: [5, 2, 9, 3, 6]

**Step 2** (Insert the next element, 2, into its correct position):
- Compare 2 with the elements to its left.
- Since 2 is smaller than 5, we move 5 one position to the right to make space for 2.
- Array: [2, 5, 9, 3, 6]

**Step 3** (Insert the next element, 9, into its correct position):
- Compare 9 with the elements to its left.
- Since 9 is greater than 5, it's already in the correct position within the sorted part.
- Array: [2, 5, 9, 3, 6]

**Step 4** (Insert the next element, 3, into its correct position):
- Compare 3 with the elements to its left.
- 3 is smaller than 9, so we move 9 one position to the right.
- Next, we compare 3 with 5 and move 5 to the right.
- Finally, we insert 3 into its correct position.
- Array: [2, 3, 5, 9, 6]

**Step 5** (Insert the last element, 6, into its correct position):
- Compare 6 with the elements to its left.
- 6 is smaller than 9, so we move 9 one position to the right.
- Then, we compare 6 with 5 and move 5 to the right.
- Finally, we insert 6 into its correct position.
- Array: [2, 3, 5, 6, 9]

**Final Sorted Array**: [2, 3, 5, 6, 9]

Insertion Sort builds the sorted part of the array incrementally by considering one element at a time and inserting it into its correct position within the sorted part. It repeats this process until the entire array is sorted. The algorithm is efficient for small datasets or partially sorted arrays.
</details>
</details>

###
<details>
  <summary><strong>Merge Sort</strong></summary>
  
**Merge Sort** is a comparison-based, divide-and-conquer sorting algorithm known for its stability and guaranteed performance. It divides the input array into smaller sub-arrays, recursively sorts them, and then merges the sorted sub-arrays to produce a single sorted output array.

**Time Complexity**:
- Best Case: O(n log n) - Merge sort consistently performs at this level regardless of the initial order of elements.
- Worst Case: O(n log n) - Even in the worst case, merge sort's time complexity remains efficient.
- Average Case: O(n log n) - Merge sort has a predictable and consistent average time complexity.

Merge sort is highly efficient and stable, making it suitable for a wide range of sorting scenarios, including large datasets.

**Space Complexity**:
- Merge sort typically has a space complexity of O(n) because it requires additional memory for the temporary storage of sub-arrays during the merging process. This is called "out-of-place" sorting. However, with optimizations, it can be adapted to perform "in-place" sorting with a space complexity of O(1) but at the cost of increased time complexity.

**How Merge Sort Works**:

1. **Divide**: The input array is divided into two equal (or nearly equal) halves until each sub-array contains only one element. This is achieved through recursive calls.
2. **Conquer**: Each sub-array is sorted recursively. The base case for the recursion is a sub-array with a single element, which is considered sorted by definition.
3. **Merge**: The sorted sub-arrays are merged to produce larger sorted sub-arrays until the entire array is sorted. The merging process combines two smaller sorted arrays into a larger sorted array.

The merging step is crucial in merge sort and is performed as follows:
- Create a temporary array to hold the merged results.
- Compare the elements of the two sub-arrays and merge them into the temporary array in sorted order.
- Continue this process until all elements are merged into the temporary array.
- Finally, copy the sorted elements from the temporary array back into the original array.

Merge sort's divide-and-conquer approach ensures that smaller sub-arrays are sorted before merging, making it stable and efficient. It is a popular choice for sorting large datasets, and its consistent time complexity makes it suitable for various applications.
<details>
  <summary>Illustrate Merge Sort</summary>
Let's illustrate the Merge Sort algorithm step by step using a simple example. Merge Sort is a divide-and-conquer sorting algorithm that divides an unsorted array into smaller subarrays, sorts each subarray, and then merges them back together to form a sorted array.

Consider the following unsorted array:

**Unsorted Array**: [38, 27, 43, 3, 9, 82, 10]

Here's how Merge Sort works step by step:

**Step 1** (Split the array):
- Divide the unsorted array into two equal halves.
  - Left Half: [38, 27, 43]
  - Right Half: [3, 9, 82, 10]

**Step 2** (Recursively sort each half):
- Apply Merge Sort to both the left and right halves separately.
- Recursive Sorting (Left Half):
  - Split the left half further.
  - Left Half: [38]
  - Right Half: [27, 43]
  - Continue splitting until each subarray contains one element.
- Recursive Sorting (Right Half):
  - Split the right half further.
  - Left Half: [3, 9]
  - Right Half: [82, 10]
  - Continue splitting until each subarray contains one element.

**Step 3** (Merge the sorted subarrays):
- Merge the sorted subarrays back together to create a single sorted array.
  - Merge [27] and [43] into [27, 43].
  - Merge [3, 9] and [10, 82] into [3, 9, 10, 82].
  - Merge [27, 43] and [3, 9, 10, 82] into [3, 9, 10, 27, 43, 82].
  - The merged array represents the sorted version of the original unsorted array.

**Final Sorted Array**: [3, 9, 10, 27, 43, 82]

Merge Sort works by recursively dividing the unsorted array into smaller subarrays until each subarray contains one element (trivially sorted). Then, it merges these sorted subarrays back together while maintaining their sorted order. The process repeats until the entire array is sorted. Merge Sort is known for its stable and efficient sorting performance.
</details>
</details>

###
<details>
  <summary><strong>Quick Sort</strong></summary>
  
**Quick Sort** is a widely used, efficient, and versatile comparison-based sorting algorithm. It is known for its speed and is often used as the sorting algorithm of choice for many applications.

**Time Complexity**:
- Best Case: O(n log n) - When the pivot element chosen in each step consistently divides the input array into approximately equal halves.
- Worst Case: O(n^2) - Occurs when the pivot element consistently results in imbalanced divisions, such as selecting the smallest or largest element as the pivot.
- Average Case: O(n log n) - In practice, quick sort typically performs with an average time complexity of O(n log n), making it one of the fastest sorting algorithms for large datasets.

Quick sort's average and best-case time complexity are excellent, making it a preferred choice for most sorting applications. However, it's crucial to choose a good pivot strategy to avoid the worst-case scenario.

**Space Complexity**:
- Quick sort is typically an in-place sorting algorithm, meaning it does not require additional memory for sorting. Its space complexity is O(log n), which represents the recursive call stack. In the worst case, when the stack depth reaches 'n,' it can be O(n).

**How Quick Sort Works**:

1. **Partitioning**: Choose a pivot element from the array. The pivot's choice is critical and can significantly affect performance. Common strategies include selecting the first, last, middle, or a random element as the pivot.
2. Rearrange the elements in the array so that elements less than the pivot come before it, and elements greater than the pivot come after it. This process is called partitioning.
3. Recursively apply quick sort to the sub-arrays on either side of the pivot.
4. Continue this process until the entire array is sorted. The base case for the recursion is an array with zero or one element, which is considered sorted.

The partitioning step works by maintaining two pointers, one at the left end and one at the right end of the sub-array. The left pointer moves to the right until it encounters an element greater than or equal to the pivot, while the right pointer moves to the left until it finds an element less than or equal to the pivot. These elements are then swapped, and the process continues until the pointers meet.

Quick sort's performance largely depends on the choice of the pivot and the partitioning process. To improve its performance and reduce the chance of worst-case behavior, various pivot selection strategies, such as the median-of-three or random pivot, are employed. Overall, quick sort is highly efficient and widely used for sorting large datasets.
<details>
  <summary>Illustrate Quick Sort</summary>
Let's illustrate the Quick Sort algorithm step by step using a simple example. Quick Sort is a divide-and-conquer sorting algorithm that works by selecting a "pivot" element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot.

Consider the following unsorted array:

**Unsorted Array**: [6, 1, 7, 4, 3, 9, 2, 8, 5]

Here's how Quick Sort works step by step:

**Step 1** (Select a pivot):
- Choose a pivot element from the array. Let's choose the last element, which is 5, as the pivot.
  - Pivot: 5

**Step 2** (Partition the array):
- Partition the array into two sub-arrays:
  - Elements less than or equal to the pivot (left sub-array).
  - Elements greater than the pivot (right sub-array).
- After partitioning, the array becomes:
  - [1, 4, 3, 2] [5] [6, 7, 9, 8]

**Step 3** (Recursively sort sub-arrays):
- Apply Quick Sort recursively to the left and right sub-arrays.
  - Sort the left sub-array [1, 4, 3, 2]:
    - Choose the last element, 2, as the pivot.
    - Partition it into [1] [2] [4, 3].
    - The sorted left sub-array: [1, 2, 3, 4]
  - Sort the right sub-array [6, 7, 9, 8]:
    - Choose the last element, 8, as the pivot.
    - Partition it into [6, 7] [8] [9].
    - The sorted right sub-array: [6, 7, 8, 9]

**Step 4** (Combine sorted sub-arrays):
- Combine the sorted left sub-array, pivot (5), and sorted right sub-array.
  - [1, 2, 3, 4] [5] [6, 7, 8, 9]

**Final Sorted Array**: [1, 2, 3, 4, 5, 6, 7, 8, 9]

Quick Sort works by selecting a pivot, partitioning the array into two sub-arrays, and then recursively sorting each sub-array. The partitioning process ensures that elements less than the pivot are on the left side, and elements greater than the pivot are on the right side. This process continues until the entire array is sorted. Quick Sort is known for its efficient average and best-case performance, making it a popular sorting algorithm.
</details>
</details>

###
<details>
  <summary><strong>Radix Sort</strong></summary>
  
**Radix Sort** is a non-comparison-based sorting algorithm that works by distributing elements into buckets based on their individual digits or character positions. It sorts elements by processing digits or characters from the least significant to the most significant.

**Time Complexity**:
- Best Case: O(nk) - When the input data is uniformly distributed across all digit positions and 'k' is the number of digits or characters in the maximum element.
- Worst Case: O(nk) - Even in the worst case, radix sort's time complexity remains efficient.
- Average Case: O(nk) - Radix sort's average time complexity is consistent with the best and worst cases.

Radix sort is efficient for sorting integers or objects with multiple character keys, such as strings. It is particularly useful when the range of digits or characters in each position is small and known in advance.

**Space Complexity**:
- Radix sort typically has a space complexity of O(n+k), where 'n' is the number of elements to be sorted, and 'k' is the range of digits or characters at each position.

**How Radix Sort Works**:

1. Determine the maximum number of digits or character positions in the input data. This determines how many passes or iterations are needed to fully sort the elements.
2. Start with the rightmost (least significant) digit or character position and process all elements based on this position.
3. Use a stable sorting algorithm (like counting sort) to sort elements based on the current digit or character position. This involves distributing elements into buckets based on the value of the current position, then collecting them back in order.
4. Repeat step 3 for each digit or character position, moving from right to left.
5. After processing all positions, the elements are sorted in their entirety.

The key concept in radix sort is that it exploits the properties of positional notation. By sorting elements based on individual positions, it effectively sorts elements based on their entire values.

For example, when sorting integers, radix sort starts by sorting based on the least significant digit, then the tens digit, hundreds digit, and so on. After processing all digits, the integers are sorted completely. Similarly, when sorting strings, radix sort sorts based on the rightmost character, then the second rightmost character, and so on, until the strings are sorted.

Radix sort is a stable sort, meaning it preserves the relative order of equal elements. It is efficient and particularly suited for sorting large datasets of integers or objects with multiple character keys.
<details>
  <summary>Illustrate Radix Sort</summary>
Let's illustrate the Radix Sort algorithm step by step using a simple example. Radix Sort is a non-comparative sorting algorithm that sorts integers by processing individual digits. It performs a series of passes through the input data, considering each digit position from the least significant to the most significant.

Consider the following unsorted array:

**Unsorted Array**: [170, 45, 75, 90, 802, 24, 2, 66]

Here's how Radix Sort works step by step:

**Step 1** (Sort by the least significant digit, one's place):
- Group the elements by the last (rightmost) digit:
  - Bucket 0: [170, 90, 802]
  - Bucket 2: [2]
  - Bucket 4: [24]
  - Bucket 5: [45, 75]
  - Bucket 6: [66]

**Intermediate Result** (Sorted by one's place):
- [170, 90, 802, 2, 24, 45, 75, 66]

**Step 2** (Sort by the next significant digit, ten's place):
- Group the elements by the second-to-last digit:
  - Bucket 0: [802, 2]
  - Bucket 4: [24, 45, 66]
  - Bucket 5: [75]
  - Bucket 7: [170, 90]

**Intermediate Result** (Sorted by ten's place):
- [802, 2, 24, 45, 66, 75, 170, 90]

**Step 3** (Sort by the most significant digit, hundred's place):
- Group the elements by the leftmost digit:
  - Bucket 0: [2, 24, 45, 66, 75, 90]
  - Bucket 1: [170]
  - Bucket 8: [802]

**Final Sorted Array**: [2, 24, 45, 66, 75, 90, 170, 802]

Radix Sort works by sorting the elements based on their individual digits, from the least significant digit (rightmost) to the most significant digit (leftmost). It repeatedly groups elements into buckets according to the value of the current digit being considered, maintaining the order of elements within each bucket. After processing all digits, the elements are rearranged to form the sorted array. Radix Sort is efficient for sorting integers with a fixed number of digits and has a time complexity of O(nk), where n is the number of elements and k is the number of digits in the maximum element.
</details>
</details>

###
<details>
  <summary><strong>Selection Sort</strong></summary>
  
**Selection Sort** is a straightforward comparison-based sorting algorithm that repeatedly selects the minimum (or maximum) element from the unsorted portion of the array and moves it to the beginning (or end) of the sorted portion.

**Time Complexity**:
- Best Case: O(n^2) - Occurs when the input array is already sorted in reverse order, and the algorithm has to make many comparisons and swaps.
- Worst Case: O(n^2) - This happens when the input array is sorted in reverse order, and the algorithm has to perform a significant number of comparisons and swaps.
- Average Case: O(n^2) - In most practical cases, selection sort exhibits quadratic time complexity.

Selection sort is straightforward to implement but not efficient, especially for large datasets. It performs the same number of comparisons and swaps regardless of the input's initial order, making it suboptimal for many sorting tasks.

**Space Complexity**:
- Selection sort is an in-place sorting algorithm, meaning it doesn't require additional memory for sorting. Its space complexity is O(1), indicating that it uses a constant amount of memory for the sorting process.

**How Selection Sort Works**:

1. Start with an unsorted portion of the array (initially, the entire array is unsorted) and an empty sorted portion.
2. Find the minimum (or maximum) element in the unsorted portion.
3. Swap this element with the leftmost element in the unsorted portion.
4. Expand the sorted portion to include the newly placed minimum (or maximum) element.
5. Repeat steps 2-4 until the entire array is sorted.

The key characteristic of selection sort is that it minimizes the number of swaps, as it only swaps once per pass, unlike other sorting algorithms that may require multiple swaps per pass.

Selection sort is not efficient for large datasets, as its time complexity is quadratic, and it doesn't perform well compared to more advanced sorting algorithms like merge sort or quick sort. It is mainly used for educational purposes or for sorting small lists where its simplicity may outweigh its performance drawbacks.
<details>
  <summary>Illustrate Selection Sort</summary>
Let's illustrate the Selection Sort algorithm step by step using a simple example. Selection Sort is a comparison-based sorting algorithm that repeatedly selects the minimum element from an unsorted portion of the array and moves it to the beginning of the sorted portion.

Consider the following unsorted array:

**Unsorted Array**: [64, 25, 12, 22, 11]

Here's how Selection Sort works step by step:

**Step 1** (Initial Array):
- [64, 25, 12, 22, 11]

**Step 2** (Select the minimum element):
- Find the minimum element in the unsorted portion (from index 0 to the end):
  - Minimum element: 11

**Step 3** (Swap with the first element):
- Swap the minimum element (11) with the first element (64):
  - [11, 25, 12, 22, 64]

**Step 4** (Repeat for the remaining unsorted portion):
- Repeat the process for the remaining unsorted portion (from index 1 to the end).
- Find the minimum element in the unsorted portion (from index 1 to the end):
  - Minimum element: 12
- Swap the minimum element (12) with the first element in the unsorted portion (index 1):
  - [11, 12, 25, 22, 64]

**Step 5** (Repeat for the remaining unsorted portion):
- Repeat the process for the remaining unsorted portion (from index 2 to the end).
- Find the minimum element in the unsorted portion (from index 2 to the end):
  - Minimum element: 22
- Swap the minimum element (22) with the first element in the unsorted portion (index 2):
  - [11, 12, 22, 25, 64]

**Step 6** (Repeat for the remaining unsorted portion):
- Repeat the process for the remaining unsorted portion (from index 3 to the end).
- Find the minimum element in the unsorted portion (from index 3 to the end):
  - Minimum element: 25
- Swap the minimum element (25) with the first element in the unsorted portion (index 3):
  - [11, 12, 22, 25, 64]

**Step 7** (Final Sorted Array):
- The array is now sorted.

**Final Sorted Array**: [11, 12, 22, 25, 64]

Selection Sort works by repeatedly selecting the minimum element from the unsorted portion and moving it to the beginning of the sorted portion. It iterates through the array, one element at a time, and maintains two portions: the sorted portion on the left and the unsorted portion on the right. This process continues until the entire array is sorted. Selection Sort has a time complexity of O(n^2) and is not the most efficient sorting algorithm for large datasets but is straightforward to implement.
</details>
</details>

###
<details>
  <summary><strong>Shell Sort</strong></summary>
  
**Shell Sort** is an efficient in-place comparison-based sorting algorithm that is an extension of the insertion sort algorithm. It improves upon insertion sort by allowing elements to move more than one position at a time, which reduces the number of comparisons and swaps.

**Time Complexity**:
- Best Case: O(n log^2 n) - The best-case time complexity depends on the gap sequence used, and it can be improved with specific gap sequences.
- Worst Case: O(n^2) - In the worst case, when using a poor gap sequence, shell sort's time complexity can degrade to quadratic time.
- Average Case: It varies depending on the gap sequence used but is generally considered between O(n^1.3) and O(n^2).

The choice of gap sequence has a significant impact on the algorithm's performance. Some gap sequences, like the Knuth sequence or the Sedgewick sequence, yield better results than others.

**Space Complexity**:
- Shell sort is an in-place sorting algorithm, meaning it does not require additional memory for sorting. Its space complexity is O(1), indicating that it uses a constant amount of memory for the sorting process.

**How Shell Sort Works**:

1. Choose a gap sequence (a series of integers) that defines the gaps between elements to be compared and swapped. The choice of gap sequence is crucial for the algorithm's performance.
2. Starting with the largest gap, divide the input array into sub-arrays, each separated by the chosen gap.
3. Sort each sub-array individually using insertion sort. Insertion sort is applied to each sub-array separately, allowing elements to move more than one position at a time.
4. Reduce the gap size and repeat steps 2 and 3 until the gap size becomes 1.
5. The final pass with a gap size of 1 is a regular insertion sort, which efficiently sorts the elements since they are now closer to their correct positions.

The idea behind shell sort is to perform insertion sort on smaller sub-arrays that are already somewhat sorted. By gradually reducing the gap size, the algorithm makes larger and larger portions of the array closer to their sorted positions, leading to an overall efficient sorting process.

Shell sort is a practical sorting algorithm and can be significantly faster than simpler quadratic algorithms like insertion sort or bubble sort, especially for moderately sized datasets. Its performance is influenced by the choice of gap sequence, making it a versatile option for different use cases.

<details>
  <summary>Illustrate Shell Sort</summary>
Let's illustrate the Shell Sort algorithm step by step using a simple example. Shell Sort is an extension of the Insertion Sort algorithm and works by sorting elements that are distant from each other, gradually reducing the gap between elements to improve efficiency.

Consider the following unsorted array:

**Unsorted Array**: [8, 3, 6, 2, 9, 4, 1, 5, 7]

Here's how Shell Sort works step by step:

**Step 1** (Initial Gap):
- Choose an initial gap (also known as the "interval"). In this example, we'll start with a gap of 4.
- The array is divided into subarrays based on the gap:
  - [8, 9] [3, 4] [6, 1] [2, 5] [7]

**Step 2** (Sort subarrays with Insertion Sort):
- Apply Insertion Sort to each subarray independently. This step sorts the elements within each subarray.
  - Subarray 1: [8, 9] (sorted)
  - Subarray 2: [3, 4] (sorted)
  - Subarray 3: [1, 6] (sorted)
  - Subarray 4: [2, 5] (sorted)
  - Subarray 5: [7] (sorted)

**Intermediate Result** (Partially Sorted):
- [8, 3, 6, 2, 7, 4, 1, 5, 9]

**Step 3** (Reduce the gap):
- Reduce the gap to half of its previous value. In this case, the gap becomes 2.
- The array is divided into subarrays based on the new gap:
  - [8, 6, 7, 1] [3, 2, 4, 5] [9]

**Step 4** (Sort subarrays with Insertion Sort):
- Apply Insertion Sort to each subarray independently. This step further sorts the elements within each subarray.
  - Subarray 1: [6, 7, 1] (sorted)
  - Subarray 2: [2, 3, 4, 5] (sorted)
  - Subarray 3: [9] (sorted)

**Intermediate Result** (Partially Sorted):
- [1, 6, 2, 7, 3, 4, 5, 8, 9]

**Step 5** (Final Pass with Gap 1):
- Reduce the gap to 1. Now, the entire array is considered a single subarray.
- Apply Insertion Sort to the entire array:
  - [1, 2, 3, 4, 5, 6, 7, 8, 9]

**Final Sorted Array**: [1, 2, 3, 4, 5, 6, 7, 8, 9]

Shell Sort works by sorting elements that are distant from each other, gradually reducing the gap between elements in each pass until the gap becomes 1. The final pass with a gap of 1 essentially performs an Insertion Sort on the entire array, ensuring that the array is completely sorted. Shell Sort provides better performance than Insertion Sort on large datasets and has a time complexity that depends on the gap sequence used.
</details>
</details>

