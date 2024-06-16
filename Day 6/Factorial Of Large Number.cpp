#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Function to calculate the factorial of a number
  // Fectorial Of Large Number
  // Storing Large Fectorial In Array -> Sowe can Find Large Nuber Factorial
  vector<int> factorial(int N) {
    vector<int> ans;  // Vector to store the result
    ans.push_back(1); // Initial factorial value for 0! and 1!
    int carry = 0;    // Variable to handle carry during multiplication

    // Loop through all numbers from 2 to N
    for (int i = 2; i <= N; i++) {
      // Multiply current number with each digit of the current result
      for (int j = 0; j < ans.size(); j++) {
        int x = ans[j] * i + carry; // Multiply and add carry
        ans[j] = x % 10;            // Update the digit with remainder
        carry = x / 10;             // Update carry
      }
      // Add remaining carry to the result
      while (carry) {
        ans.push_back(carry % 10);
        carry /= 10;
      }
    }

    // Reverse the result to get the correct order
    reverse(ans.begin(), ans.end());
    return ans;
  }
};

// Driver Code
int main() {
  Solution solution;
  int N = 50; // Example input for factorial calculation
  vector<int> result = solution.factorial(N);

  // Print the result as a number
  for (int digit : result) {
    cout << digit;
  }
  cout << endl;

  return 0;
}
