class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    // Write a function to find the longest common prefix string amongst an
    // array of strings.

    // If there is no common prefix, return an empty string "".
    // TC -> O(n*m)
    // SC -> O(1)
    // If the input vector is empty, return an empty string
    if (strs.empty()) {
      return "";
    }

    // Initialize the answer string
    string ans;
    int i = 0;

    while (true) {
      // Check if we have reached the end of the first string
      if (i >= strs[0].size()) {
        return ans;
      }

      // Get the current character from the first string
      char curr_ch = strs[0][i];

      // Check the current character against all other strings
      for (auto &str : strs) {
        // If the current character doesn't match or we reached the end of one
        // of the strings
        if (i >= str.size() || str[i] != curr_ch) {
          return ans;
        }
      }

      // If the current character matches in all strings, add it to the answer
      ans += curr_ch;
      // Move to the next character
      i++;
    }

    // Return the answer (this line is technically unreachable due to the while
    // loop structure)
    return ans;
  }
};
