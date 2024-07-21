#include <bits/stdc++.h> // Includes most of the standard C++ library headers
#include <iostream>      // Includes the input-output stream library

using namespace std;

// Comparator function to sort in ascending order
// in function value is sent by sort function
bool cmp(char first, char second) {
  // value True  -> first value come first
  // value False -> second value Come First
  return first < second;
  // <> -> TC -> O(1)
}

// Comparator function to sort in descending order
bool cmp2(char first, char second) {
  // value True  -> first value come first
  // value False -> second value Come First
  return first > second;
}

int main() {
  // Custom Comparator In String

  // Define a string
  string s = "darshan";

  // Sort the string in ascending order using the custom comparator 'cmp'
  sort(s.begin(), s.end(), cmp);

  // Output the sorted string
  cout << s << endl;

  // Define another string
  string s2 = "darshan";

  // Sort the string in descending order using the custom comparator 'cmp2'
  sort(s2.begin(), s2.end(), cmp2);

  // Output the sorted string
  cout << s2 << endl;

  return 0;
}
