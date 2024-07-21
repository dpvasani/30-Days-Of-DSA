class Solution {
public:
  string reverseOnlyLetters(string s) {
    // Given a string s, reverse the string according to the following rules:

    // All the characters that are not English letters remain in the same
    // position. All the English letters (lowercase or uppercase) should be
    // reversed. Return s after reversing it.
    int l = 0;
    int h = s.size() - 1;
    while (l < h) {
      // Both s[l] and s[h] are letters
      if (isalpha(s[l]) && isalpha(s[h])) {
        swap(s[l], s[h]);
        l++;
        h--;
      } else if (!isalpha(s[l])) {
        // s[l] is not a letter, move left pointer to the right
        l++;
      } else {
        // s[h] is not a letter, move right pointer to the left
        h--;
      }
    }
    return s;
  }
};
