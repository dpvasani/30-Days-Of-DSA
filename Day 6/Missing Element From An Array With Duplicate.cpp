#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void findMissing(int a[], int n) {
  // Visited Method
  // TC -> O(n)
  // SP -> O(1)
  // for (int i = 0; i < n; i++){
  //   int index = abs(a[i]);
  //   if(a[index - 1] > 0){
  //     // Visit -> Mark Them As Negative
  //     a[index - 1] *= -1;
  //   }
  // }
  // for(int i = 0; i < n; i++){
  //   if(a[i] > 0){
  //     cout << i + 1 << " ";
  //   }
  // }

  // Method 2
  // TC -> O(n)
  // SP -> O(1)
  int i = 0;
  while (i < n) {
    int index = a[i] - 1;
    if (a[i] != a[index]) {
      swap(a[i], a[index]);
    } else {
      i++;
    }
  }
  for (int i = 0; i < n; i++) {
    if (a[i] != i + 1) {
      cout << i + 1 << " ";
    }
  }
}

int main() {
  // Mising Element From An Array With Duplicates
  // N Size Of Array
  // A Array A ∈ [1, N] -> Institution We Can Treat Array Element As Index
  int n;
  int a[] = {1, 2, 3, 4, 4, 6, 7, 8, 9, 10, 11, 12, 13, 14};
  n = sizeof(a) / sizeof(a[0]);

  findMissing(a, n);

  // Method 2 Sorting + Swapping Method
  return 0;
}