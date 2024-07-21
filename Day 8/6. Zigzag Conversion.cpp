class Solution {
public:
  string convert(string s, int numRows) {
    // Approach:
    // Step 1: If numRows is 1, return the original string as there is no zigzag
    // pattern
    if (numRows == 1)
      return s;

    // Step 2: Create a vector of strings to represent the rows
    vector<string> rows(min(numRows, int(s.size())));

    // Step 3: Initialize variables for current row and direction
    int curRow = 0;
    bool goingDown = false;

    // Step 4: Iterate over each character in the input string
    for (char c : s) {
      // Step 4.1: Append the character to the current row
      rows[curRow] += c;

      // Step 4.2: Change direction if we are at the top or bottom row
      if (curRow == 0 || curRow == numRows - 1)
        goingDown = !goingDown;

      // Step 4.3: Move up or down depending on the direction
      curRow += goingDown ? 1 : -1;
    }

    // Step 5: Concatenate all rows to get the final zigzag string
    string result;
    for (string row : rows) {
      result += row;
    }

    return result;
  }
};
