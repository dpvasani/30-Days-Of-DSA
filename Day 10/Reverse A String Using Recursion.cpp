#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void reverseRe(string &s, int start, int end) {
  // Base Case
  if (start >= end) {
    return;
  }
  // One Case Solved
  swap(s[start], s[end]);
  // Recursion
  reverseRe(s, start + 1, end - 1);
}

int main() {
  // Reverse A String Using Recursion
  // TC -> n/2 Calls -> O(n)
  // SC -> O(n)
  string str = "Hello World";
  int start = 0;
  int end = str.length() - 1;
  cout << "Original String: " << str << endl;
  reverseRe(str, start, end);
  cout << "Reversed String: " << str << endl;
  return 0;
}
