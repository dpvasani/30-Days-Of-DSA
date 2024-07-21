#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printSubsequences(string str, string output, int i, vector<string> &v) {
  // Base Case
  if (i >= str.length()) {
    // Store
    v.push_back(output);
    // cout << output << endl;
    return;
  }
  // One Case Solved
  // Exclude -> Exclude First Because Same String We Are Passing To Lower Or For
  // Next i
  printSubsequences(str, output, i + 1, v);
  // Include
  // Below Line Is Responsible For Concatenation Of Output String
  // Output = Output + str[i];
  output.push_back(str[i]);
  printSubsequences(str, output, i + 1, v);
}

int main() {
  // Include Exclude Pattern
  // Pick Not Pick Pattern
  // In DP & In Recursion
  // From ith Position -> Two Option Are There - Include Or Exclude
  // In Vector If I Want To Add Element Through Index Or User Input Through cin
  // Than First We Need To Give Size Of Vector
  string str = "abc";
  string output = "";
  vector<string> v;
  int i = 0;
  printSubsequences(str, output, i, v);
  // Printing All Subsequences
  cout << "All Subsequence are : ";
  for (auto val : v) {
    cout << val << " ";
  }
  cout << endl;
  cout << "Size Of Vector : " << v.size() << endl;
}