class Solution {
public:
  bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
  }
  string reverseVowels(string s) {
    // Given a string s, reverse only all the vowels in the string and return
    // it.

    // The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both
    // lower and upper cases, more than once.
    int l = 0;
    int h = s.length() - 1;
    while (l < h) {
      if (isVowel(s[l]) && isVowel(s[h])) {
        swap(s[l], s[h]);
        l++;
        h--;
      } else if (isVowel(s[l]) == 0) {
        l++;
      } else {
        h--;
      }
    }
    return s;
  }
};