#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findUniqueElement(vector<int> arr) {
  int ans = 0;
  // XOR Is Puting No Impact while Initializing it Zero So Always Use When XOR
  // is Required
  // Solving DSA Question Always Do Trail and Error or Run
  for (int i = 0; i < arr.size(); i++) {
    ans = ans ^ arr[i];
  }
  return ans;
}

int main() {
  // All Element Except One Element are Occuring Twice
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int uniqueElement = findUniqueElement(arr);
  cout << "Unnique Element Is : " << uniqueElement << endl;

  return 0;
}