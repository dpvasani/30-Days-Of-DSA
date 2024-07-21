class Solution {
public:
  string reorganizeString(string s) {
    // Given a string s, rearrange the characters of s so that any two adjacent
    // characters are not the same.
    // Return any possible rearrangement of s or return "" if not possible.
    // Method 1 : Using Priority Queue
    // O(nlogn) time | O(n) space

    // Method 2 : Greedy Approach
    // Most Occurred Character And Try to Fit It Not Adjucently In One Go
    // Fill The Rest Character In The Ordrer Of Occurence
    // aaabc
    // a_a_a -> Step 1
    // abaca -> Step 2
    // O(N)

    int hash[26] = {0};
    for (char c : s) {
      // O(n)
      hash[c - 'a']++;
    }

    // Try To Place Most Occurent Character First -> Find
    char max_freq_char;
    int max_freq = 0;
    for (int i = 0; i < 26; i++) {
      // Constant Time
      if (hash[i] > max_freq) {
        max_freq = hash[i];
        max_freq_char = i + 'a';
      }
    }

    // If the most frequent character is more than half the length (rounded up),
    // it's impossible
    if (max_freq > (s.size() + 1) / 2) {
      return "";
    }

    // Try To Place Other Character In The Order Of Occurence.
    int index = 0;
    while (max_freq > 0 && index < s.size()) {
      // O(n/2) -> O(n)
      s[index] = max_freq_char;
      index += 2;
      max_freq--;
    }

    hash[max_freq_char - 'a'] =
        0; // Set the count of the most frequent character
    // to 0

    // Fill The Rest Character In The Order Of Occurence.

    for (int i = 0; i < 26; i++) {
      // O(26*n) -> O(n)
      while (hash[i] > 0) {
        if (index >= s.size()) {
          index = 1; // Start filling odd indices
        }
        s[index] = i + 'a';
        index += 2;
        hash[i]--;
      }
    }

    return s;
  }
};
