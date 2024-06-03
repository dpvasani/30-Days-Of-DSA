#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  vector<int> arr1{1, 2, 3, 4, 5, 6};
  vector<int> arr2{4, 6, 7, 8, 9, 1, 11};

  vector<int> ans;
  // Outer Loop
  for (int i = 0; i <= arr1.size(); i++) {
    int element = arr1[i];
    // For Every Element Run On Arr2
    for (int j = 0; j <= arr2.size(); j++) {
      if (element == arr2[j]) {
        arr2[i] = INT_MIN;
        ans.push_back(element);
      }
    }
  }

  // Printing Ans Array
  for (auto value : ans) {
    cout << value << " ";
  }
  cout << endl;

  return 0;
}