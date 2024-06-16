#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

  // 75. Sort Colors
  // Given an array nums with n objects colored red, white, or blue, sort
  // them in-place so that objects of the same color are adjacent, with the
  // colors in the order red, white, and blue.

  // We will use the integers 0, 1, and 2 to represent the color red, white,
  // and blue, respectively.

  // You must solve this problem without using the library's sort function.
  // Sort 0, 1, 2
  // 0 -> Red
  // 1 -> White
  // 2 -> Blue
  // Sorting Algorithm Later Came in Syllabus
  void sortColors(vector<int> & nums) {
    // Here Nums Passed by Reference ->  That Means If You Change Anything That
    // will Reflecet On Original Array ->  & Is Shows That This Array passed By
    // Refernece

    // sort(nums.begin(), nums.end());
    // Tiem Coplexity -> O(NlogN)
    // Space Complexity -> O(n)
    // STL Sort Function Uses -> Mix Of Quick Sort Heap Sort Insertion Sort

    // Counting Method
    // We Knwos That ARray Has 0 1 and 2 So We Can Use Count Method
    // Modifies The Array In Place
    // This Is not In Place Solution
    int zeros = 0, ones = 0, twos = 0;

    // Count the number of 0s, 1s, and 2s
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == 0) {
        zeros++;
      } else if (nums[i] == 1) {
        ones++;
      } else {
        twos++;
      }
    }

    // Spread the values back into the array
    int i = 0;
    while (zeros--) {
      nums[i++] = 0;
    }
    while (ones--) {
      nums[i++] = 1;
    }
    while (twos--) {
      nums[i++] = 2;
    }

    // Time Complexity -> O(N(Counting Loop)+N(Spreading Loop)) -> O(N)
    // Space Complexity -> O(1)
  }

  // Inplace Solution
  // Three Pointer Approach
  // Low Medium High
  int l = 0, m = 0, h = nums.size() - 1;

  while (m <= h) {
    if (nums[m] == 0) {
      swap(nums[m], nums[l]);
      l++;
      m++;
    } else if (nums[m] == 1) {
      m++;
    } else {
      swap(nums[m], nums[h]);
      h--;
    }
  }
  return 0;
}