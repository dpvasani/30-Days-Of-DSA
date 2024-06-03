// 7. Reverse Integer
// Given a signed 32-bit integer x, return x with its digits reversed. If
// reversing x causes the value to go outside the signed 32-bit integer range
// [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or
// unsigned).

class Solution {
public:
  int reverse(int x) {
    long long ans = 0; // Use long long to handle overflow
    while (x != 0) {
      int digit = x % 10;
      ans = ans * 10 + digit;
      if (ans > INT_MAX || ans < INT_MIN) {
        return 0; // Overflow condition
      }
      x /= 10;
    }
    return static_cast<int>(ans); // Cast back to int for return
  }
};

// Or

class Solution {
public:
  int reverse(int x) {
    bool isNeg = false;
    if (x == INT_MIN) { // Directly handle INT_MIN case
      return 0;
    }
    if (x < 0) {
      isNeg = true;
      x = -x;
    }

    int ans = 0; // Initialize ans to 0
    while (x > 0) {
      int digit = x % 10;
      // Check for overflow before updating ans
      if (ans > (INT_MAX - digit) / 10) {
        return 0;
      }
      ans = ans * 10 + digit;
      x /= 10;
    }
    return isNeg ? -ans : ans;
  }
};

// Sure, let's break down and explain the key lines within the loop that process
// the digits of the number: int digit = x % 10; ans = ans * 10 + digit; x /= 1
//  Step-by-Step Explanation

// 1. Extract the Last Digit:

//    int digit = x % 10;
//    - `x % 10` calculates the remainder when `x` is divided by 10.
//    - This operation effectively extracts the last digit of `x`.
//    - For example, if `x` is 123, `x % 10` will yield 3.

// 2. Append the Digit to the Reversed Number**:

//    ans = ans * 10 + digit;
//    - This line updates the variable `ans` by shifting its digits one place to
//    the left and adding the newly extracted digit.
//    - `ans * 10` shifts the current digits of `ans` left by one decimal place
//    (e.g., if `ans` is 12, `ans * 10` becomes 120).
//    - Adding `digit` appends the last digit extracted from `x` to the
//    rightmost position of `ans`.
//    - Continuing the example where `x` is 123 and `digit` is 3: if `ans` was
//    initially 0, after this line, `ans` becomes 0 * 10 + 3 = 3. On the next
//    iteration, if `digit` is 2, `ans` becomes 3 * 10 + 2 = 32, and so on.

// 3. Remove the Last Digit from `x`:

//    x /= 10;
//    - This operation divides `x` by 10 and discards the remainder.
//    - Effectively, this removes the last digit from `x`.
//    - Using integer division, if `x` is 123, `x /= 10` will update `x` to 12.
//  Looping Through the Number

// When combined in a loop, these steps reverse the digits of `x` one by one:

// - In each iteration, the last digit of `x` is extracted and appended to
// `ans`.
// - `x` is then truncated by removing the last digit.
// - The loop continues until `x` is reduced to 0, at which point all digits
// have been processed and `ans` contains the reversed number.
//  Example Walkthrough

// Let's go through an example where `x = 123`:

// 1. Initial Values:
//    - `x = 123`
//    - `ans = 0`

// 2. First Iteration:
//    - `digit = 123 % 10 = 3`
//    - `ans = 0 * 10 + 3 = 3`
//    - `x = 123 / 10 = 12`

// 3. Second Iteration:
//    - `digit = 12 % 10 = 2`
//    - `ans = 3 * 10 + 2 = 32`
//    - `x = 12 / 10 = 1`

// 4. Third Iteration:
//    - `digit = 1 % 10 = 1`
//    - `ans = 32 * 10 + 1 = 321`
//    - `x = 1 / 10 = 0`

// The loop terminates because `x` is now 0, and `ans` contains the reversed
// number, 321.