#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool checkSorted(vector<int> &v, int &n, int i) {
  // Base Case
  if (i == n - 1) {
    return true;
  }
  // 1 case solve kardo
  if (v[i + 1] < v[i]) {
    return false;
  }
  // Baki recursion sambhal lega
  return checkSorted(v, n, i + 1);
}

int binarySearch(vector<int> &v, int s, int e, int &key) {
  // Base Case -> Key Not Found
  if (s > e) {
    return -1;
  }
  // Base Case 2 -> Key Found
  int mid = s + (e - s) / 2;
  if (v[mid] == key) {
    return mid;
  } else if (v[mid] < key) {
    // Right me jao
    return binarySearch(v, mid + 1, e, key);
  } else if (v[mid] > key) {
    // Left me jao
    return binarySearch(v, s, mid - 1, key);
  }
  // This return statement is redundant but required to satisfy all control
  // paths.
  return -1;
}

int main() {
  // Recursion Level III
  // Find Maximum Number Using Recursion
  // vector<int> v{10, 20, 30, 40, 50, 60};
  // int n = v.size();
  // int i = 0;
  // bool isSorted = checkSorted(v, n, i);
  // if (isSorted) {
  //   cout << "Array is sorted" << endl;
  // } else {
  //   cout << "Array is not sorted" << endl;
  // }

  // Binary Seach Using Recursion
  vector<int> v{10, 20, 30, 40, 50, 60, 70, 80, 90};
  int target = 90;
  int n = v.size();
  int s = 0;
  int e = n - 1;
  int ans = binarySearch(v, s, e, target);
  cout << "Answer is: " << ans << endl;
}