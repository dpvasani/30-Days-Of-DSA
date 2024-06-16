#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  // 287. Find the Duplicate Number
  // Given an array of integers nums containing n + 1 integers where each
  // integer is in the range [1, n] inclusive.

  // There is only one repeated number in nums, return this repeated number.

  // You must solve the problem without modifying the array nums and uses only
  // constant extra space.

  // After Sorting Adjustant Element are same than retun that element
  int findDuplicate(vector<int> & nums) {
    sort(nums.begin(), nums.end());
    // TC = nlogn
    // SC = O(n)
    for (int i = 0; i < nums.size() - 1; i++) {
      if (nums[i] == nums[i + 1]) {
        return nums[i];
      }
    }
    return -1;
  }

  // Negetive Marking Method
  int findDuplicate(vector<int> & nums) {
    int ans = 0;
    for (int i = 0; i < nums.size(); i++) {
      int index = abs(nums[i]);
      // Already Visited
      if (nums[index] < 0) {
        ans = index;
        break;
      }
      // Visited Mark
      nums[index] *= -1;
    }
    return ans;
  }

  // Next Soluton
  // Positioning Method
  while (nums[0] != nums[nums[0]]) {
    swap(nums[0], nums[nums[0]]);
  }
  return nums[0];
  return 0;
}