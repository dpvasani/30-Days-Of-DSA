#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
  // TC -> O(logn)
  // n/2, n/4, n/8, n/16, n/32, n/64, n/128 -> n/2^k = 1
  // n = 2^k
  // logn = k

  int s = 0;
  int e = size - 1;
  int m = s + (e - s) / 2;
  while (s <= e) {
    int element = arr[m];
    if (key == element) {
      return m;
    } else if (key < element) {
      // Left Search
      e = m - 1;
    } else {
      // Right Search
      s = m + 1;
    }
    // After Updation Of Start MId Gain Calculated
    // Mid -> Index
    m = s + (e - s) / 2;
  }
  return -1;
}

int binaryStlSearch(vector<int> v) {
  // Predifined Function For Binary Search
  // For Array (arr, Arr+size, key)
  // arr -> Denotes Starting Address Of Array
  // arr + 1 -> Denotes Starting Address Of Next Element -> Its Add size of that
  // Like Lets Take For Int Array -> arr + 1 -> arr + 4 -> arr + 8 -> arr + 12
  if (binary_search(v.begin(), v.end(), 5)) {
    cout << "Found" << endl;
    return 1; // indicating that the value was found
  } else {
    cout << "Not Found" << endl;
    return 0; // indicating that the value was not found
  }
}

int main() {
  // Sorting And Searching Class 1
  // Binary Search -> Condition -> Element Should Be In Monotoniacal Increasing
  // Or Decreasing Order
  int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
  int key = 2;
  int size = 10;
  int indexOfTarget = binarySearch(arr, size, key);

  if (indexOfTarget == -1) {
    cout << "Target Not Found" << endl;
  } else {
    cout << "Target Found At Index " << indexOfTarget << endl;
  }

  // Vector Bhaiya
  vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  binaryStlSearch(v);
  return 0;
}