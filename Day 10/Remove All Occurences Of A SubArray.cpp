class Solution {
public:
  void removeOcc(string &s, string &part) {
    int found = s.find(part);
    if (found != string::npos) {
      // Part Of String Has Been Located
      // Please Remove It
      // Left String And Right String
      // Left + Right
      string left_part = s.substr(0, found);
      string right_part = s.substr(found + part.length());
      s = left_part + right_part;
      removeOcc(s, part);
    } else {
      // Base Case
      return;
    }
    // Base Case
  }
  string removeOccurrences(string s, string part) {

    // Given two strings s and part, perform the following operation on s until
    // all occurrences of the substring part are removed:

    // Find the leftmost occurrence of the substring part and remove it from s.
    // Return s after removing all occurrences of part.

    // A substring is a contiguous sequence of characters in a string.
    // Step 1 : Find
    // Step : Remove
    // Step 3: Call Again
    // TC -> O(n/m * nm) -> O(n^2)
    // SP -> O(n/m)
    // n/m Recursive Call 
    removeOcc(s, part);
    return s;
  }
};