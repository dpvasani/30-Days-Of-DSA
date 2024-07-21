// C++ program to print all primes smaller than
// n using segmented sieve
#include <bits/stdc++.h>
using namespace std;

vector<bool> Sieve(int n) {
  // Create Sieve Array Of N Size Telling IsPrime
  vector<bool> sieve(n + 1, true);
  sieve[0] = sieve[1] = false;

  for (int i = 2; i * i <= n; i++) {
    if (sieve[i]) {
      for (int j = i * i; j <= n; j += i) {
        sieve[j] = false;
      }
    }
  }
  return sieve;
}

vector<bool> segSieve(int L, int R) {
  // Step 1: Create Sieve Array Of sqrt(R) Size Telling IsPrime
  vector<bool> sieve = Sieve(sqrt(R));
  vector<int> basePrimes;
  for (int i = 0; i < sieve.size(); i++) {
    if (sieve[i]) {
      basePrimes.push_back(i);
    }
  }
  // Step 2: Create Segments Of Primes
  vector<bool> segSieve(R - L + 1, true);
  if (L == 0)
    segSieve[0] = false;
  if (L == 1)
    segSieve[1 - L] = false;

  for (auto prime : basePrimes) {
    int first_mul = max(prime * prime, (L + prime - 1) / prime * prime);
    for (int j = first_mul; j <= R; j += prime) {
      segSieve[j - L] = false;
    }
  }
  return segSieve;
}

// Driver program to test above function
int main() {

  // Step 1 :
  // Generate All Prime Responsible To Mark Seg Sieve
  // -   Using Normal Sieve N = Root(R)

  // Step 2 :
  // Find First Index To Start Marking
  // Index 0 -> Resemble Frist Prime
  // Normal Sieve -> j = i * i
  // Here -> j = First Multiple, or prime * prime

  int L = 110;
  int R = 130;
  vector<bool> ss = segSieve(L, R);
  for (int i = 0; i < ss.size(); i++) {
    if (ss[i]) {
      cout << i + L << " ";
    }
  }
  cout << endl;

  return 0;
}
