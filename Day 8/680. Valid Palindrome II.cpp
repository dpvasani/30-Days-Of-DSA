class Solution {
public:
  bool isPalindrome(string s, int i, int j) {
    while (i <= j) {
      if (s[i] != s[j]) {
        return false;
      } else {
        i++;
        j--;
      }
    }
    return true;
  }
  bool validPalindrome(string s) {
    // Given a string s, return true if the s can be palindrome after deleting
    // at most one character from it.
    int i = 0, j = s.length() - 1;
    while (i < j) {
      if (s[i] != s[j]) {
        // Ek Bar I Ko Remove Ek bar J Ko Remove
        return isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1);
      } else {
        // s[i] == s[j]
        // No Need To Remove
        i++;
        j--;
      }
    }
    // O Removal Case
    return true;
  }
};