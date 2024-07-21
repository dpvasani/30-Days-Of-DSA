class Solution {
public:
  void addRe(string &num1, int p1, string &num2, int p2, string &ans,
             int carry = 0) {
    // Base Case
    if (p1 < 0 && p2 < 0) {
      if (carry != 0) {
        ans.push_back(carry + '0');
      }
      return;
    }

    // One Case Solved
    int n1 = (p1 >= 0 ? num1[p1] - '0' : 0);
    int n2 = (p2 >= 0 ? num2[p2] - '0' : 0);
    int sum = n1 + n2 + carry;
    int digit = sum % 10;
    carry = sum / 10;
    ans.push_back(digit + '0');
    addRe(num1, p1 - 1, num2, p2 - 1, ans, carry);
  }

  string addStrings(string num1, string num2) {
    // 415. Add Strings
    // Given two non-negative integers, num1 and num2 represented as strings,
    // return the sum of num1 and num2 as a string.

    // You must solve the problem without using any built-in library for
    // handling large integers (such as BigInteger). You must also not convert
    // the inputs to integers directly.

    // Time Complexity: O(max(N, M))
    // Space Complexity: O(max(N, M))

    string ans = "";
    addRe(num1, num1.size() - 1, num2, num2.size() - 1, ans);
    reverse(ans.begin(), ans.end());
    return ans;
  }
};
