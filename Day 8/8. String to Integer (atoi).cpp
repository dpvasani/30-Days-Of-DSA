class Solution {
public:
  //   Implement the myAtoi(string s) function, which converts a string to a
  //   32-bit signed integer.

  //   The algorithm for myAtoi(string s) is as follows:

  //   Whitespace: Ignore any leading whitespace (" ").
  //   Signedness: Determine the sign by checking if the next character is '-'
  //   or '+', assuming positivity is neither present. Conversion: Read the
  //   integer by skipping leading zeros until a non-digit character is
  //   encountered or the end of the string is reached. If no digits were
  //   read, then the result is 0. Rounding: If the integer is out of the
  //   32-bit signed integer range [-231, 231 - 1], then round the integer to
  //   remain in the range. Specifically, integers less than -231 should be
  //   rounded to -231, and integers greater than 231 - 1 should be rounded to
  //   231 - 1. Return the integer as the final result.
  int myAtoi(string s) {
    // Ignore leading whitespaces
    int i = 0;
    while (s[i] == ' ') {
      i++;
    }

    // Check for sign (optional + or mandatory - or none)
    int sign = 1;
    if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
      sign = s[i] == '+' ? 1 : -1;
      i++;
    }

    // Convert digits to integer and handle overflow
    long long num = 0; // Use long long for intermediate calculations
    while (i < s.size() && isdigit(s[i])) {
      // Check for overflow before multiplication
      if (num > INT_MAX / 10 ||
          (num == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10)) {
        return sign == -1 ? INT_MIN : INT_MAX;
      }
      num = num * 10 + (s[i] - '0');
      i++;
    }

    // Cast to int and handle overflow after conversion
    if (num > INT_MAX) {
      return INT_MAX;
    } else if (num < INT_MIN) {
      return INT_MIN;
    }

    return num * sign;
  }
};
