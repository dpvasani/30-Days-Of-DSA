#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int firstOccurence(vector<int> v, int target) {
  int s = 0;
  int e = v.size() - 1;
  int m = s + (e - s) / 2;
  int ans = -1;
  while (s <= e) {
    if (v[m] == target) {
      // TC - >  O(logn)
      // Store Ans And Then Left Search
      ans = m;
      e = m - 1;
    } else if (target > m) {
      
      // Right Search
      s = m + 1;
    } else if (target < m) {
      // Left Search
      e = m - 1;
    }
    m = s + (e - s) / 2;
  }
  return ans;
}

int main() {
  vector<int> v{1, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 6, 7};
  int target = 4;
  int indexOfFirstOccurrence = firstOccurence(v, target);
  // STL Library Function
  //     int indexOfFirstOccurrence =
  //         lower_bound(v.begin(), v.end(), 4) - v.begin();
  cout << "Index of first occurrence of 4 : " << indexOfFirstOccurrence << endl;
  return 0;
}