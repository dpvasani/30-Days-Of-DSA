#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findPivot(vector<int> arr) {
  int s = 0;
  int e = arr.size() - 1;
  int mid = s + (e - s) / 2;
  while (s < e) {
    // Single Element
    if (s == e) {
      return s;
    }
    if (mid <= e && arr[mid] >= arr[mid + 1]) {
      return mid;
    }
    if (mid - 1 >= s && arr[mid - 1] > arr[mid]) {
      return mid - 1;
    }
    if (arr[s] > arr[mid]) {
      // Left search
      e = mid - 1;
    } else {
      // Right search
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  return -1;
}

int main() {
  // Given a sorted and rotated array arr[] of size N and a key, the task is to
  // find the key in the array.

  // Note: Find the element in O(logN) time and assume that all the elements are
  // distinct.
  vector<int> arr{9, 10, 2, 4, 6, 8};
  int ans = findPivot(arr);
  cout << "Ans Is : " << ans << endl;
  cout << "Ans At Index : " << arr[ans] << endl;
  return 0;
}