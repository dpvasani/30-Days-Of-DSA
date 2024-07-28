#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int binarySearchNearlySortedArray(vector<int> arr, int target) {
  int start = 0;
  int end = arr.size() - 1;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (arr[mid] == target) {
      return mid;
    } else if (mid - 1 >= start && arr[mid - 1] == target) {
      // mid - 1 >= 0
      return mid - 1;
    } else if (mid + 1 <= end && arr[mid + 1] == target) {
      // mid + 1 < arr.size()
      return mid + 1;
    } else if (arr[mid] < target) {
      // Right Search
      start = mid + 2;
    } else {
      // Left Search
      end = mid - 2;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}

int main() {
  // Binary Search In Nearly Sorted Array
  // That Means If Any Element Will Be on Ith Position That Can At Any One From
  // I-1 or I Or I+1
  vector<int> arr{10, 3, 40, 20, 50, 80, 70};
  int target = 40;
  int ans = binarySearchNearlySortedArray(arr, target);
  cout << "Index Of " << target << " Is : " << ans << endl;

  return 0;
}
