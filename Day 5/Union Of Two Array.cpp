#include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

  // Union Of Two Array No Duplicates
  int arr1[] = {1, 2, 3, 4, 5};
  int size1 = 5;
  int arr2[] = {4, 5, 6, 7, 8};
  int size2 = 5;
  vector<int> ans;
  unordered_set<int> elements_set; // Set to keep track of unique elements

  // Push All Unique Elements from arr1 into Ans Array
  for (int i = 0; i < size1; i++) {
    if (elements_set.find(arr1[i]) == elements_set.end()) {
      ans.push_back(arr1[i]);
      elements_set.insert(arr1[i]);
    }
  }

  // Push All Unique Elements from arr2 into Ans Array
  for (int i = 0; i < size2; i++) {
    if (elements_set.find(arr2[i]) == elements_set.end()) {
      ans.push_back(arr2[i]);
      elements_set.insert(arr2[i]);
    }
  }

  // Printing Ans Array
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
  return 0;
}
