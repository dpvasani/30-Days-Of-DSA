#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findPeakElement(vector<int> &arr) {
  int s = 0;
  int e = arr.size() - 1;

  while (s < e) {
    int m = s + (e - s) / 2;

    // Check if mid element is greater than the next element
    if (arr[m] > arr[m + 1]) {
      // We are in the decreasing part of the array, move to the left part
      e = m;
    } else {
      // We are in the increasing part of the array, move to the right part
      s = m + 1;
    }
  }

  // At the end of the while loop, s == e, pointing to the peak element
  return s;
}

int main() {
  // We Can Solve Through Sum
  // You are given an integer mountain array arr of length n where the values
  // increase to a peak element and then decrease.
  // Return the index of the peak element.
  // Your task is to solve it in O(log(n)) time complexity.
  // O(logn) -> Binary Search

  // In This Array Two Sorted Array Exists One In Increasing Order And One Is In
  // Decreasing Order
  // Increasing -> arr[i]<arr[i+1]
  // Decreasing -> arr[i]>arr[i+1]
  // Peak Element -> arr[i]>arr[i-1] && arr[i]>arr[i+1] Or
  // arr[i - 1]<arr[i]> arr[i + 1] -> Dont Use This Condition Because Its
  // Possible That Arr[i - 1] -> May Invalid Index In Case Peak Is On Oth
  // Element

  // arr[i + 1] -> May Be Out Of Range In Case Peak Is On Last Element -> So We
  // Have Not Used That

  // One More Learning For Condition Of While Loop
  // (s<=e) -> s = m + 1 or e = m - 1
  // (s<e) -> s = m or e = m
  // If You Use 1st Conditon With  s = m or e = m -> Infinite Loop

  vector<int> v{1, 3, 5, 7, 6, 4, 2};

  // Finding the index of the peak element
  int peakIndex = findPeakElement(v);
  cout << "Index Of The Peak Element : " << peakIndex << endl;
  return 0;
}