// CPP program to sum two numbers represented by two arrays.
#include <bits/stdc++.h>
using namespace std;

// Return sum of two numbers represented by the arrays.
// Size of a[] is greater than b[]. It is made sure to
// be the wrapper function
int calSumUtil(int a[], int b[], int n, int m) {
  // Array to store sum.
  int sum[n];

  int i = n - 1, j = m - 1, k = n - 1;

  int carry = 0, s = 0;

  // Until we reach the beginning of the array.
  // We are comparing only for the second array
  // because we have already compared the size
  // of the array in the wrapper function.
  while (j >= 0) {
    // Find the sum of the corresponding elements
    // of both arrays.
    s = a[i] + b[j] + carry;
    sum[k] = (s % 10);

    // Finding carry for the next sum.
    carry = s / 10;

    k--;
    i--;
    j--;
  }

  // If the second array size is less than the first
  // array size.
  while (i >= 0) {
    // Add carry to the first array elements.
    s = a[i] + carry;
    sum[k] = (s % 10);
    carry = s / 10;

    i--;
    k--;
  }

  int ans = 0;

  // If there is carry on adding 0 index elements,
  // append 1 to the total sum.
  if (carry)
    ans = 10;

  // Converting array into a number.
  for (int i = 0; i <= n - 1; i++) {
    ans += sum[i];
    ans *= 10;
  }

  return ans / 10;
}

// Wrapper Function
int calSum(int a[], int b[], int n, int m) {
  // Making first array which has
  // a greater number of elements
  if (n >= m)
    return calSumUtil(a, b, n, m);
  else
    return calSumUtil(b, a, m, n);
}

// Driven Program
int main() {
  int a[] = {9, 3, 9};
  int b[] = {6, 1};

  int n = sizeof(a) / sizeof(a[0]);
  int m = sizeof(b) / sizeof(b[0]);

  cout << calSum(a, b, n, m) << endl;

  return 0;
}
