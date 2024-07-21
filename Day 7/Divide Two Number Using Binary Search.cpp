#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int solve(int dividend, int diviser) {
  int s = 0;
  int e = abs(dividend);
  int ans = 0;
  int m = s + (e - s) / 2;
  while (s <= e) {
    // Perfect Solution
    if (abs(m * diviser) == abs(dividend)) {
      ans = m;
      break;
    }
    // Not Perfect Solution
    if (abs(m * diviser) > abs(dividend)) {
      // Left
      e = m - 1;
    } else {
      // Ans Store
      ans = m;
      // Right Search
      s = m + 1;
    }
    m = s + (e - s) / 2;
  }
  if ((diviser < 0 && dividend < 0) || (diviser > 0 && dividend > 0)) {
    return ans;
  } else {
    return -ans;
  }
}

int main() {
  // 10/2 = 5
  // Dividende = 10
  // Divisor = 2
  // Quotient = 5
  // Remainder = 0
  // Quotient * Divisor + Reminder = Dividende
  // Quotient * Divisor <= Dividende
  // Search Space -> Dividend
  // Question Is To Find The Quotient
  // For That Search Space Is 0 To Dividende

  int dividend = -21;
  int diviser = 7;
  int ans = solve(dividend, diviser);
  cout << "Ans Is : " << ans << endl;

  return 0;
}