#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<bool> Sieve(int n) {
  // Create Sieve Array Of N Size Telling IsPrime
  vector<bool> sieve(n + 1, true);
  sieve[0] = sieve[1] = false;

  for (int i = 2; i <= n; i++) {
    if (sieve[i]) {
      for (int j = i * 2; j <= n; j += i) {
        sieve[j] = false;
      }
    }
  }
  return sieve;
}

int main() {
  vector<bool> sieve = Sieve(25);
  // Printing
  for (int i = 0; i < sieve.size(); i++) {
    if (sieve[i]) {
      cout << i << " ";
    }
  }
  // Optimization 1: Inner Loop
  // Some Number Already Marked
  // for (int i = 2; i <= n; i++) { Outer Loop
  //   if (sieve[i]) {
  //     for (int j = i * i; j <= n; j += i) {
  //       sieve[j] = false;
  //     }
  //   }
  // }

  // j = i * i; -> Start Karna
  // Because Already marked By Earliear I
  // From 2 To (i - 1) Already Marked
  // i * (i - 1) -> Already Marked
  // i * (i - 2) -> Already Marked
  // i * (i - 3) -> Already Marked
  // i * (i - 4) -> Already Marked
  // .........
  // .........
  // i * (2) -> Already Marked

  // Optimization 2: Outer Loop
  // for (int i = 2; i * i <= n; i++) { Outer Loop
  //   if (sieve[i]) {
  //     for (int j = i * i; j <= n; j += i) {
  //       sieve[j] = false;
  //     }
  //   }
  // }
}