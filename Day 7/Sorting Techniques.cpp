#include <iostream>
using namespace std;

int main() {
  // Selection Sort
  // Use Case
  // Small Array
  // Put Ith element in its correct position
  // Time Complexity: O(n^2)
  // Space Complexity: O(1)
  // Worst Case In Reverese Sorted Array
  // Pick Minimum Element -> Swap with first element
  // Pick Minimum Element -> Swap with second element
  // Pick Minimum Element -> Swap with third element
  // Pick Minimum Element -> Swap with Their Right Position
  // 5 4 2 1 7 6 -> Original Array
  // 1 4 2 5 7 6 -> First Iteration
  // 1 2 4 5 7 6 -> Second Iteration
  // 1 2 4 5 7 6 -> Third Iteration
  // 1 2 4 5 7 6 -> Fourth Iteration
  // 1 2 4 5 6 7 -> Fifth Iteration -> Sorted
  // Selection Sort
  // Outer Loop Show Rounds n- 1 rounds
  for (int i = 0; i < n - 1; i++) {
    int minIndex = i;
    // Index Of Minimum Elemet From I to N
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        // New Minimum Than Store It
        minIndex = j;
      }
    }
    // Swap
    swap(arr[i], arr[minIndex]);
  }

  cout << "Hello Sorting Techniques!\n";
  return 0;
}