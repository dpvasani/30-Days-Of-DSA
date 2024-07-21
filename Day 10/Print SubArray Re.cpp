#include <iostream>
#include <vector>
using namespace std;

// Function to print subarrays
void printSubArray(vector<int> &arr, int start, int end) {
  // Base Case
  if (end == arr.size()) {
    return;
  }

  // One Case Solved
  for (int i = start; i <= end; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // Recursive Call
  printSubArray(arr, start, end + 1);
}

int main() {
  // Print Sub Arrays
  vector<int> nums{1, 2, 3, 4, 5};

  // Start from each index
  for (int start = 0; start < nums.size(); start++) {
    printSubArray(nums, start, start);
  }

  return 0;
}
