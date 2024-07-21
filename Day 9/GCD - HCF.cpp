class Solution {
public:
  int gcd(int a, int b) {
    // code here
    if (a == 0) {
      return b;
    }
    if (b == 0) {
      return a;
    }
    while (a > 0 && b > 0) {
      if (a > b) {
        a = a - b;
      } else {
        b = b - a;
      }
    }
    return a == 0 ? b : a;
  }
};