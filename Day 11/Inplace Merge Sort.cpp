class Solution {
public:
  // Normal
  // void merge(vector<int> &v, vector<int> &temp, int start, int mid, int end)
  // {
  //   int i = start, j = mid + 1, k = start;
  //   while (i <= mid && j <= end) {
  //     if (v[i] <= v[j]) {
  //       temp[k++] = v[i++];

  //     } else {
  //       temp[k++] = v[j++];
  //     }
  //   }
  //   while (i <= mid) {
  //     temp[k++] = v[i++];
  //   }
  //   while (j <= end) {
  //     temp[k++] = v[j++];
  //   }
  //   for (int i = start; i <= end; i++){
  //     v[i] = temp[i];
  //   }
  // }

  void mergeInPlace(vector<int> &v, int start, int mid, int end) {
    // In Place
    int total_len = end - start + 1;
    int gap = total_len / 2 + total_len % 2;
    while (gap > 0) {
      int i = start;
      int j = start + gap;
      while (j <= end) {
        if (v[i] > v[j]) {
          swap(v[i], v[j]);
        }
        i++;
        j++;
      }
      gap = gap <= 1 ? 0 : gap / 2 + gap % 2;
    }
  }
  void mergeSort(vector<int> &v, int start, int end) {
    if (start >= end) {
      return;
    }
    int mid = (start + end) / 2;
    mergeSort(v, start, mid);
    mergeSort(v, mid + 1, end);
    mergeInPlace(v, start, mid, end);
  }
  vector<int> sortArray(vector<int> &nums) {
    // 912. Sort an Array
    // https://leetcode.com/problems/sort-an-array/
    mergeSort(nums, 0, nums.size() - 1);
    return nums;
  }
};

#include <iostream>
using namespace std;

// Function to merge two sorted subarrays in-place
void mergeInPlace(int arr[], int s, int mid, int e) {
  int start2 = mid + 1;

  // If the direct merge is already sorted
  if (arr[mid] <= arr[start2]) {
    return;
  }
  // Two pointers to maintain start of both arrays to merge
  // Two pointers to maintain start
  // of both arrays to merge
  while (s <= mid && start2 <= e) {

    // If element 1 is in right place
    if (arr[s] <= arr[start2]) {
      s++;
    } else {
      int value = arr[start2];
      int index = start2;

      // Shift all the elements between element 1
      // element 2, right by 1.
      while (index != s) {
        arr[index] = arr[index - 1];
        index--;
      }
      arr[s] = value;

      // Update all the pointers
      s++;
      mid++;
      start2++;
    }
  }
}

// Function to perform merge sort
void mergeSortInPlace(int arr[], int s, int e) {
  // Base Case
  if (s >= e) {
    return;
  }

  int mid = s + (e - s) / 2;
  // Left part sort
  mergeSortInPlace(arr, s, mid);
  // Right part sort
  mergeSortInPlace(arr, mid + 1, e);
  // Merge 2 sorted arrays
  mergeInPlace(arr, s, mid, e);
}

int main() {
  int arr[] = {4, 5, 13, 2, 12};
  int n = 5;
  int s = 0;
  int e = n - 1;
  mergeSortInPlace(arr, s, e);

  // Output the sorted array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
