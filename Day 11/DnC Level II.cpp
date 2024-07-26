#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int partition(int arr[], int s, int e) {
  // Partition Logic
  // Step 1: Choose Pivot Element
  int pivotIndex = s;
  int pivotElement = arr[s];
  // Step 2: Find Right Position for Pivot Element and Place it there
  int count = 0;
  for (int i = s + 1; i <= e; i++) {
    if (arr[i] <= pivotElement) {
      count++;
    }
  }
  // Jab Mai Pivot Element ka Index Find Ho Gaya, Tabhi Mai Pivot Element ko
  // Sahi Jagah Pehle Shift Kar Do
  int rightIndex = s + count;
  swap(arr[pivotIndex], arr[rightIndex]);
  pivotIndex = rightIndex;
  // Step 3: Left me chote and Right me bade
  int i = s;
  int j = e;
  while (i < pivotIndex && j > pivotIndex) {
    // Left Part -> Chote Hai
    while (arr[i] <= pivotElement) {
      i++;
    }
    // Right Part -> Bada Hai
    while (arr[j] > pivotElement) {
      j--;
    }
    // 2 case ho sakte hai
    // A-> You found the elements to swap
    // B-> No need to swap
    if (i < pivotIndex && j > pivotIndex) {
      swap(arr[i], arr[j]);
    }
  }
  return pivotIndex;
}

void quickSort(int arr[], int s, int e) {
  // Base Case
  if (s >= e) {
    // s == e -> Singal Element -> Already SOrted
    // s > e -> Invalid Array
    return;
  }
  // Partition
  int pivot = partition(arr, s, e);
  // Recursive Call
  // Left Part
  quickSort(arr, s, pivot - 1);
  // Right Part
  quickSort(arr, pivot + 1, e);
}

int main() {
  // Quick Sort
  // Divide and Conquer
  // Ek Number Ko Sahi Jagah Pahunch De -> Partition Logic
  // Baki Recursion Sambhal Lega
  // Partition -> Element -> Pivot Element -> Random Or In Between Or From Start
  // Or End

  // Two Logic In Quick Sort
  // 1. Partition Logic
  // 2. Recursion Logic
  // Step 1: Choose Pivot Elements
  // Step 2: Pivot Element Ko Right (Sahi) Jagah Pahuchana
  // Step 3: Pivot Element Ke Left -> Sare Element Pivot Se Chote
  // Step 4: Pivot Element Ke Right -> Sare Element Pivot Se Bade
  // Step 5: Repeat Step 1 To 4 Until All Elements Are Sorted
  // Time Complexity: O(nlogn) best and avrage case
  // Space Complexity: O(logn)

  // Worst Case: O(n^2)
  // TC -> Partition Logic * Recursion Logic
  // TC -> O(logn) * O(2n) = O(nlogn) -> Best And Avg Case
  // TC -> O(n) * O(n) = O(n^2) -> Worst Case

  int arr[] = {8, 1, 3, 4, 20, 50, 30, 550, 50, 50, 30};
  int s = 0;
  int n = sizeof(arr) / sizeof(int);
  int e = n - 1;

  quickSort(arr, s, e);
  // Printing Array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}