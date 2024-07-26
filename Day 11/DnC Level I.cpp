#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Function to merge two sorted subarrays
void merge(int arr[], int s, int e) {
  int mid = s + (e - s) / 2;
  int len1 = mid - s + 1;
  int len2 = e - mid;
  int *left = new int[len1];  // New Return Address
  int *right = new int[len2]; // Dynamically creating arrays

  // Copy Values Unsorted Part Copy Hua -> Original Array Copy Hua
  // Left Array
  int k = s;
  for (int i = 0; i < len1; i++) {
    left[i] = arr[k];
    k++;
  }

  // Right Array
  k = mid + 1;
  for (int i = 0; i < len2; i++) {
    right[i] = arr[k];
    k++;
  }

  // Merge 2 sorted arrays
  int leftIndex = 0;
  int rightIndex = 0;
  int mainArrayIndex = s;
  // Comparing and merging
  while (leftIndex < len1 && rightIndex < len2) {
    if (left[leftIndex] < right[rightIndex]) {
      // Smaller value placed in main array
      arr[mainArrayIndex++] = left[leftIndex++];
    } else {
      // Smaller value placed in main array
      arr[mainArrayIndex++] = right[rightIndex++];
    }
  }

  // Copy remaining elements of left array
  while (leftIndex < len1) {
    arr[mainArrayIndex++] = left[leftIndex++];
  }

  // Copy remaining elements of right array
  while (rightIndex < len2) {
    arr[mainArrayIndex++] = right[rightIndex++];
  }

  delete[] left;  // Free dynamically allocated memory
  delete[] right; // Free dynamically allocated memory
}

// Function to perform merge sort
void mergeSort(int arr[], int s, int e) {
  // Base Case
  if (s >= e) {
    // Array is sorted -> Single element always sorted s == e
    // Invalid array -> s > e
    return;
  }

  int mid = s + (e - s) / 2;
  // Left part sort
  mergeSort(arr, s, mid);
  // Right part sort
  mergeSort(arr, mid + 1, e);
  // Merge 2 sorted arrays
  merge(arr, s, e);
}

int main() {
  // Count Inversion Often In Pyq At Airtel
  // Merge Sort
  // Based On Divide And Conquer -> DnC
  // Array -> A[0] A[1] A[2] A[3] A[4] A[5]
  // Divide
  // A[0] A[1] A[2]  ||  A[3] A[4] A[5]
  // Tell Recursion To Sort Left And Right Part
  // Then Merge It

  // Step 1: Find Mid
  // Step 2: Break In Two Halves
  // Step 3: Recursively Sort Both Halves
  // Step 4: Merge Both Halves -> Using Two Pointer Approach

  // Time Complexity:

  // Best Case: O(n log n), When the array is already sorted or nearly sorted.
  // Average Case: O(n log n), When the array is randomly ordered.
  // Worst Case: O(n log n), When the array is sorted in reverse order.
  // Space Complexity: O(n), Additional space is required for the temporary
  // array used during merging.

  // In Place Merge Sort
  // Inversion Count

  int arr[] = {4, 5, 13, 2, 12};
  int n = 5;
  int s = 0;
  int e = n - 1;
  mergeSort(arr, s, e);

  // Output the sorted array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
