class Solution {
public:
  int strStr(string haystack, string needle) {

    //  Given two strings needle and haystack, return the index of the first
    //  occurrence of needle in haystack, or -1 if needle is not part of
    //  haystack.
    // Method 1 :
    // Sliding window approach
    // Outer Loop
    // Inner Loop
    // TC -> O((n-m+1)*m) -> O(n*m)
    // Method 2 : Rabin Karp Algorithms
    // Method 3 : KMP Algorithm
    int n = haystack.size();
    int m = needle.size();
    for (int i = 0; i < n - m + 1; i++) {
      for (int j = 0; j < m; j++) {
        if (haystack[i + j] != needle[j]) {
          break;
        }
        if (j == m - 1) {
          return i;
        }
      }
    }
    return -1;
  }
};