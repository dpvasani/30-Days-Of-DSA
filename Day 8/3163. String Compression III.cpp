class Solution {
public:
  string compressedString(string word) {
    // Given a string word, compress it using the following algorithm:

    // Begin with an empty string comp. While word is not empty, use the
    // following operation: Remove a maximum length prefix of word made of a
    // single character c repeating at most 9 times. Append the length of the
    // prefix followed by c to comp. Return the string comp.

    string comp; // Resulting compressed string
    int i = 0;

    // Iterate through the input word
    while (i < word.size()) {
      char currentChar = word[i];
      int count = 0;

      // Count occurrences of the current character, up to 9 times
      while (i < word.size() && word[i] == currentChar && count < 9) {
        i++;
        count++;
      }

      // Append the count and the character to the result string
      comp += to_string(count) + currentChar;
    }

    return comp;
  }
};
