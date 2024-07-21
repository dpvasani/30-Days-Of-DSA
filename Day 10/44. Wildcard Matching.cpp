class Solution {
public:
  bool isMatchHelper(string &s, int si, string &p, int pi) {
    
    // Base Case
    if (si == s.size() && pi == p.size()) {
      return true;
    }
    if (si == s.size() && pi < p.size()) {
      while (pi < p.size()) {
        if (p[pi] != '*') {
          return false;
        }
        pi++; // Move to the next character in pattern
      }
      return true;
    }

    // Single Char Matching
    if (si < s.size() && (s[si] == p[pi] || '?' == p[pi])) {
      return isMatchHelper(s, si + 1, p, pi + 1);
    }

    // "*" Case
    if (pi < p.size() && p[pi] == '*') {
      // Treat Case As Null Or Empty
      bool caseA = isMatchHelper(s, si, p, pi + 1);
      // Let * Consume One Character
      bool caseB = si < s.size() && isMatchHelper(s, si + 1, p, pi);
      return caseA || caseB;
    }

    return false;
  }

  bool isMatch(string s, string p) {
    // 44. Wildcard Matching
    // if p[i] =='*' ->
    int si = 0; // Pointer Index For S String
    int pi = 0; // Pointer Index For Pattern String
    return isMatchHelper(s, si, p, pi);
  }
};

class Solution {
public:
  bool isMatch(string s, string p) {
    int m = s.length(), n = p.length();
    int i = 0, j = 0, star = -1, matched = 0;
    while (i < m) {
      if (j < n && p[j] == '*') {
        matched = i;
        star = j++;
      } else if (j < n && s[i] == p[j] || p[j] == '?') {
        i++;
        j++;
      } else if (star >= 0) {
        i = ++matched;
        j = star + 1;
      } else
        return false;
    }
    while (j < n && p[j] == '*')
      j++;
    return j == n;
  }
};