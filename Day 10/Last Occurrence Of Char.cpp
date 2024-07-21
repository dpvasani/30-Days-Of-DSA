#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void lastOccurrenceLTR(string &s, char x, int i, int &ans) {
  // Base Case
  if (i >= s.size()) {
    return;
  }
  // One Case Solved
  if (s[i] == x) {
    ans = i;
  }
  // Recursive Call
  lastOccurrenceLTR(s, x, i + 1, ans);
}

void lastOccurrenceRTL(string &s, char x, int i, int &ans) {
  // Base Case
  if (i < 0) {
    return;
  }
  // One Case Solved
  if (s[i] == x) {
    ans = i;
    return;
  }
  // Recursive Call
  lastOccurrenceRTL(s, x, i - 1, ans);
}

int main() {
  // Last Occurrence Of Char In String
  // Method 1 : Search Left to Right
  // Method 2 : Search Right to Left
  // Use Function strrchr()
  // TC -> O(n)
  // SC -> O(n)
  // M1 :
  string s;
  cin >> s;
  int ans = -1;
  char x;
  cin >> x;
  int i = 0;
  lastOccurrenceLTR(s, x, i, ans);
  cout << "Last Occurrence of " << x << " is at index " << ans << endl;
  lastOccurrenceRTL(s, x, i, ans);
  cout << "Last Occurrence of Using RTL " << x << " is at index " << ans
       << endl;
}