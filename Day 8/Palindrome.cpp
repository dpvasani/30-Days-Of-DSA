#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isPalindrome(string s) {
  int i = 0;
  int j = s.length() - 1;
  while (i < j) {
    if (s[i] != s[j]) {
      return false;
    } else {
      i++;
      j--;
    }
  }
  return true;
}

int main() {
  // Check If String Is Palidrome Or Not?
  // Method 1 :
  // Orignal String
  // Reverse String
  // Compare Orignal String And Reverse String
  // If Orignal String And Reverse String Are Same Then It Is
  // TC -> O(N)
  // SC -> O(N)

  // Method 2 :
  // Compare Directly Character
  // SC -> O(1)
  // TC -> O(N)
  char s[100];
  cin >> s;
  cout << "String is : " << s << endl;
  cout << "Palindrome Check : " << isPalindrome(s) << endl;
}