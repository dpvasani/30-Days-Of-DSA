#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void moveNegetiveLeft(int *arr, int n) {
  // Dutch Natinal Flag Algo
  int l = 0, h = n - 1;
  while (l < h) {
    if (arr[l] < 0) {
      l++;
    } else if (arr[h] > 0) {
      h--;
    } else {
      swap(arr[l], arr[h]);
    }
  }
}

int main() {

  // Move All Negetive Number to Left Side Of Array
  // Assumption No Need to Maintain Order
  // dutch National Flag -> Simply Know as Two Pointer Approach
  // Two Pointer Low And High
  // Low Maintain -ve Number
  // High Maintain +ve Number
  int arr[] = {1, 2, -3, 4, -5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  moveNegetiveLeft(arr, n);

  // Printing Array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  // TC = O(n)
  // SC = O(1)

  return 0;
}