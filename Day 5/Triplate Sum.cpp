#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Find The Pair In Which Sum Is Equal To Given Value Of Any Two Element
  // Pair Sum = 9
  int sum;
  cout << "Enter The Sum: ";
  cin >> sum;
  vector<int> arr{10, 20, 30, 40, 50, 60};
  // Outer Loop Traverse For Each Element
  for (int i = 0; i < arr.size(); i++) {
    // cout << "We Are At Element " << arr[i] << endl;
    int element = arr[i];
    // For Every Element  We Will Traverse On Next Element
    for (int j = i + 1; j < arr.size(); j++) {
      // For Every Element  We Will Traverse On Next Element
      for (int k = j + 1; k < arr.size(); k++) {
        if (element + arr[j] + arr[k] == sum) {
          cout << "Pair Found: "
               << "(" << element << "," << arr[j] << "," << arr[k] << ")"
               << endl;
        }
      }
    }
  }

  return 0;
}