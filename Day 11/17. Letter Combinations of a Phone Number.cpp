class Solution {
public:
  void solve(vector<string> &ans, int index, string output, string digits,
             vector<string> &mapping) {
    // Base case: if the index has reached the length of digits, add the output
    // to the answer
    if (index == digits.length()) {
      ans.push_back(output);
      return;
    }
    // Get the digit from the input string
    int digit = digits[index] - '0';
    // Get the corresponding characters from the mapping
    string value = mapping[digit];
    // Recursively solve for each character in the mapped string
    for (int i = 0; i < value.length(); i++) {
      char ch = value[i];
      output.push_back(ch);
      solve(ans, index + 1, output, digits, mapping);
      // Backtrack
      output.pop_back();
    }
  }

  vector<string> letterCombinations(string digits) {
    // If the input string is empty, return an empty vector
    if (digits.empty()) {
      return {};
    }

    // A mapping of digits to letters (just like on the telephone buttons)
    vector<string> ans;
    string output = "";
    vector<string> mapping(10);
    mapping[2] = "abc";
    mapping[3] = "def";
    mapping[4] = "ghi";
    mapping[5] = "jkl";
    mapping[6] = "mno";
    mapping[7] = "pqrs";
    mapping[8] = "tuv";
    mapping[9] = "wxyz";

    // Start the recursive solving process
    solve(ans, 0, output, digits, mapping);
    return ans;
  }
};

class Solution {
private:
  void solve(string digit, string output, int index, vector<string> &ans,
             string mapping[]) {

    // base case
    if (index >= digit.length()) {
      ans.push_back(output);
      return;
    }

    int number = digit[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++) {
      output.push_back(value[i]);
      solve(digit, output, index + 1, ans, mapping);
      output.pop_back();
    }
  }

public:
  vector<string> letterCombinations(string digits) {
    vector<string> ans;
    if (digits.length() == 0)
      return ans;
    string output;
    int index = 0;
    string mapping[10] = {"",    "",    "abc",  "def", "ghi",
                          "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, mapping);
    return ans;
  }
};
