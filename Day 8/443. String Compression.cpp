class Solution {
public:
  int compress(vector<char> &chars) {
    // Given an array of characters chars, compress it using the following
    // algorithm: Begin with an empty string s. For each group of consecutive
    // repeating characters in chars: If the group's length is 1, append the
    // character to s. Otherwise, append the character followed by the group's
    // length. The compressed string s should not be returned separately, but
    // instead, be stored in the input character array chars. Note that group
    // lengths that are 10 or longer will be split into multiple characters in
    // chars. After you are done modifying the input array, return the new
    // length of the array. You must write an algorithm that uses only constant
    // extra space.

    // Initialize variables
    int index = 0; // Index to keep track of the position in the input array
    int count = 1; // Counter for consecutive characters

    // Iterate over the input array
    for (int i = 1; i <= chars.size(); i++) {
      // If we reach the end of the array or the current character is different
      // from the previous one
      if (i == chars.size() || chars[i] != chars[i - 1]) {
        // Append the previous character to the array
        chars[index++] = chars[i - 1];
        // If the count is greater than 1, append the count as well
        if (count > 1) {
          string countStr = to_string(count);
          for (char c : countStr) {
            chars[index++] = c;
          }
        }
        // Reset the count
        count = 1;
      } else {
        // If the current character is the same as the previous one, increment
        // the count
        count++;
      }
    }

    // Return the new length of the array
    return index;
  }
};
