#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  // Time & Space Complexity For Recursive Solution
  // Print Array(Linear Travseral Of Array)
  void printArray(int a[], int n) {
    if (n == 0)
      return;
    cout << *a << " ";
    printArray(a + 1, n - 1);
  }
  // F(n) = K + F(n-1)
  // F(n - 1) = K + F(n-2)
  // F(n - 2) = K + F(n-3
  // .........
  // .........
  // F(0) = K1
  // Sum = nK + K1 -> O(n) -> Formula Based Method

  // Method 2 : Recursive Tree Method
  // F(n) -> K
  // F(n - 1) -> K
  // F(n - 2) -> K
  // .........
  // .........
  // F(0) -> K1
  // Total = K + K1 + K2 + K3 + ......... + Kn -> O(n)

  // Space Complexity For Recursive Solution
  // OS Bethke Stack Maintain Kar raha he
  // F(n) -> M
  // F(n - 1) -> M
  // F(n - 2) -> M
  // .........
  // .........
  // F(0) -> M1
  // Total Space -> O(n + 1) -> O(n)

  // Factorial of a number
  int fact(int n) {
    if (n == 0)
      return 1;
    return n * fact(n - 1);
  }

  // Time Comlexity
  // T(n) = T(n-1) + O(K)
  // T(n - 1) = T(n-2) + O(K)
  // .........
  // T(1) = O(K1)
  // T(n) = Nk -> O(n)

  // Space Complexity
  // N * M(Spaces) -> O(n)

  // Binary Search

  int binarySearch(int arr[], int key, int start, int end) {
    // Base case: If the search space becomes empty (start > end), the key is
    // not found.
    if (start > end) {
      return -1;
    }
    // Calculate the middle index to divide the search space in half.
    int mid = start + (end - start) / 2; // Avoid integer overflow
    // Check if the key is found at the middle index.
    if (arr[mid] == key) {
      return mid; // Key found, return its index.
    } else if (key > arr[mid]) {
      // If the key is greater than the middle element, search the right half.
      return binarySearch(arr, key, mid + 1, end);
    } else {
      // If the key is less than the middle element, search the left half.
      return binarySearch(arr, key, start, mid - 1);
    }
  }

  // Time Complexity
  // T(n) = K + T(n/2)
  // T(n/2) = K + T(n/4)
  // .........
  // T(1) = K1
  // T(n) = K1 + K2 + K3 + ...... + Kn -> A*K -> O(logn * K) -> O(logn)

  // Space Complexity
  // logn * M -> O(logn)

  int fib(int n) {
    if (n == 0 || n == 1)
      return n;
    return fib(n - 1) + fib(n - 2);
  }

  // Time Complexity
  // 2^1 * C
  // 2^2 * C
  // .........
  // 2^n * C
  // Total Is : T(n) <= O((2^n - 1) * C) <= O(2^n) -> Exponential Time Complxity
  // Very High TC

  // Space Complexity
  // SP -> O(n) -> Call Stack Depth 
  return 0;
}