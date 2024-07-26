class Solution {
public:
  void solve(vector<string> &ans, int n, int open, int close, string output) {
    // Base Case
    if (open == 0 && close == 0) {
      ans.push_back(output);
      return;
    }
    // Including open bracket
    if (open > 0) {
      output.push_back('(');
      solve(ans, n, open - 1, close, output);
      // Backtracking
      output.pop_back();
    }

    // Include Close bracket
    if (close > open) {
      output.push_back(')');
      solve(ans, n, open, close - 1, output);
      // Backtracking
      output.pop_back();
    }
  }

  vector<string> generateParenthesis(int n) {
    // Given n pairs of parentheses, write a function to generate all
    // combinations of well-formed parentheses.
    vector<string> ans;
    int open = n;
    int close = n;
    string output = "";
    solve(ans, n, open, close, output);
    return ans;
  }
};
