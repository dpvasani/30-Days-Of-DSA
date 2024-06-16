#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string calc_Sum(int *a, int n, int *b, int m) {
  int carry = 0;
  string ans;
  int i = n - 1;
  int j = m - 1;

  // Process both arrays from the end
  while (i >= 0 && j >= 0) {
    int x = a[i] + b[j] + carry;
    int digit = x % 10;
    ans.push_back(digit + '0');
    carry = x / 10;
    i--, j--;
  }

  // Process remaining elements of a[]
  while (i >= 0) {
    int x = a[i] + 0 + carry;
    int digit = x % 10;
    ans.push_back(digit + '0');
    carry = x / 10;
    i--;
  }

  // Process remaining elements of b[]
  while (j >= 0) {
    int x = b[j] + carry;
    int digit = x % 10;
    ans.push_back(digit + '0');
    carry = x / 10;
    j--;
  }

  // If there is any carry left
  if (carry) {
    ans.push_back(carry + '0');
  }

  // Remove leading zeros if any
  while (ans.size() > 1 && ans.back() == '0') {
    ans.pop_back();
  }

  // Reverse the result since we added digits from the end
  reverse(ans.begin(), ans.end());

  return ans;
}

int main() {
  int a[] = {9, 3, 9};
  int b[] = {6, 1};

  int n = sizeof(a) / sizeof(a[0]);
  int m = sizeof(b) / sizeof(b[0]);

  cout << calc_Sum(a, n, b, m) << endl;

  return 0;
}
