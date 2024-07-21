#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findSqrt(int n) {
  int s = 0;
  int e = n;
  int ans = -1;
  long m = s + (e - s) / 2;

  while (s <= e) {
    if (m * m == n) {
      return m;
    } else if (m * m > n) {
      // Left search
      e = m - 1;
    } else {
      // Store answer and right search
      ans = m;
      s = m + 1;
    }
    m = s + (e - s) / 2;
  }
  return ans;
}

int main() {
  // Find square root of a number using binary search
  // Find Square Root Of A Number Using Binary Search
  // Searching Space Where We Are Searching The Number
  // For Example If We Are Searching For Square Root Of 4
  // Searching Space is 0 to 4
  // Mid*Mid > Target Search Left
  // Mid*Mid < Target Store Answer And Search Right
  // Spoon Feeding Not Working
  int n;
  cout << "Enter the number: ";
  cin >> n;
  cout << endl;

  int precision;
  cout << "Enter the number of precision places you want: ";
  cin >> precision;

  // Find integer part of square root
  int integerPart = findSqrt(n);
  double finalAns = integerPart;

  // Incrementally refine the result to the desired precision
  double step = 0.1;
  for (int i = 0; i < precision; i++) {
    for (double j = finalAns; j * j <= n; j += step) {
      finalAns = j;
    }
    step /= 10;
  }

  cout << "Answer is " << finalAns << endl;

  return 0;
}
