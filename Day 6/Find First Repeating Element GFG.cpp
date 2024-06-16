#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int firstRepeated(int *arr, int n) {
  // Method 1
  // TC -> O(n^2)
  // SP -> O(1)
  for (int i = 0; i < n; i++) {
    bool isRepeated = false;
    for (int j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        isRepeated = true;
        return i + 1;
      }
    }
  }

  // Method 2 : Using Hashing
  // Hashing Is Un Ordered Map
  // By Default Occurrence Is Zero
  // TC -> O(n)
  // SP -> O(n)
  // Table
  // Item | Int Value - > Occurrence
  // 1    | 1
  // 2    | 0
  // 3    | 2
  // 4    | 1
  // 5    | 2
  // 6    | 1
  unordered_map<int, int> hash;
  for (int i = 0; i < n; i++) {
    hash[arr[i]]++;
  }
  for (int i = 0; i < n; i++) {
    if (hash[arr[i]] > 1) {
      return i + 1;
    }
  }

  // Method 3
  // Make Our Self Hash
  // Find Max Number From Array
  // Make hash[maxNumber + 1]
  // Every Iteration hash[arr[i]]++
  int maxNumber = *max_element(arr, arr + n);
  vector<int> selfHash(maxNumber + 1, 0);
  for (int i = 0; i < n; i++) {
    selfHash[arr[i]]++;
  }
  for (int i = 0; i < n; i++) {
    if (selfHash[arr[i]] > 1) {
      return i + 1;
    }
  }

  return -1;
}

int main() {
  // Given an array of integers arr[], The task is to find the index of first
  // repeating element in it i.e. the element that occurs more than once and
  // whose index of the first occurrence is the smallest.
  // Note:- The position you return should be according to 1-based indexing
  int arr[] = {1, 5, 3, 4, 3, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]); // Proper calculation of array size

  int result = firstRepeated(arr, n);
  cout << "The first repeating element is at position: " << result << endl;

  return 0;
}
