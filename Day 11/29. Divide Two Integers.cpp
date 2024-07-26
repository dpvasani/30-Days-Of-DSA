class Solution {
public:
  int divide(int dividend, int divisor) {
    if (divisor == 0) {
      throw std::overflow_error("Division by zero");
    }
    if (dividend == 0) {
      return 0;
    }
    if (dividend == INT_MIN && divisor == -1) {
      return INT_MAX;
    }

    bool negative = (dividend < 0) ^ (divisor < 0);

    long long dividendLL = abs((long long)dividend);
    long long divisorLL = abs((long long)divisor);

    long long result = 0;

    while (dividendLL >= divisorLL) {
      long long tempDivisor = divisorLL, numDivisors = 1;
      while (dividendLL >= (tempDivisor << 1)) {
        tempDivisor <<= 1;
        numDivisors <<= 1;
      }
      dividendLL -= tempDivisor;
      result += numDivisors;
    }

    if (negative) {
      result = -result;
    }

    if (result > INT_MAX) {
      return INT_MAX;
    }
    if (result < INT_MIN) {
      return INT_MIN;
    }

    return (int)result;
  }
};