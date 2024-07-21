class Solution {
public:
  bool isAnagram(string s, string t) {
    // Given two strings s and t, return true if t is an anagram of s, and false
    // otherwise.

    // An Anagram is a word or phrase formed by rearranging the letters of a
    // different word or phrase, typically using all the original letters
    // exactly once.

    // Method 1: Sort And Then Compare
    // TC -> O(NlogN)
    // SC -> O(1)

    // Method 2: Hash Map
    // TC -> O(N)
    // SC -> O(N)

    // Method 3: Counting
    // TC -> O(N)
    // SC -> O(N)
    // Making Frequency Table And Compare Both Table

    // If the sizes of the strings are different, they can't be anagrams
    if (s.size() != t.size()) {
      return false;
    }

    // Initialize a frequency table for counting characters
    int freqTable[256] = {0};

    // Count the frequency of each character in string s
    for (int i = 0; i < s.size(); i++) {
      freqTable[s[i]]++;
    }

    // Subtract the frequency of each character in string t
    for (int i = 0; i < t.size(); i++) {
      freqTable[t[i]]--;
    }

    // Check if all counts are zero, which means the strings are anagrams
    for (int i = 0; i < 256; i++) {
      if (freqTable[i] != 0) {
        return false;
      }
    }

    return true;
  }
};
