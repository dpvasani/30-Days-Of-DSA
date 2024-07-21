class Solution {
public:
  int expandAroundIndex(string s, int i, int j) {
    int count = 0;
    while (i >= 0 && j < s.length() && s[i] == s[j]) {
      count++;
      i--;
      j++;
    }
    return count;
  }

  int countSubstrings(string s) {
    // Given a string s, return the number of palindromic substrings in it.

    // A string is a palindrome when it reads the same backward as forward.

    // A substring is a contiguous sequence of characters within the string.
    // Approach 1 : Find All Substrings and Check if they are Palindromes
    // Time Complexity: O(n^3)
    // Substring -> 0(n^2)
    // Palindrome -> 0(n)

    // Approach 2 : Find All Palindromes and Count Them
    // Odd Substeing i == j
    // Even Substring i == j+1
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
      // Odd
      int oddKaAns = expandAroundIndex(s, i, i);
      count = count + oddKaAns;
      // Even
      int evenKaAns = expandAroundIndex(s, i, i + 1);
      count = count + evenKaAns;
    }
    return count;
  }
};