#include <iostream>
using namespace std;

bool isPalindrome(string str, int s, int e) {
  // Base Case
  if (s >= e) {
    return true;
  }
  // One Case Solve
  if (str[s] != str[e]) {
    return false;
  }
  // Recursive Call
  return isPalindrome(str, s + 1, e - 1);
}

int main() {
  // Palindrome Check
  string s;
  cin >> s;
  cout << (isPalindrome(s, 0, s.length() - 1) ? "true" : "false") << endl;
  return 0;
}
