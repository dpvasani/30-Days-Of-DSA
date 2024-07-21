#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  // Basic Maths For DSA
  // Prime Number
  // 1. Native Approch -> O(n^2)
  // 2. sqrt Approch  -> O(n*n^(1/2))
  // 3. Sieve Of Eratosthenes Approch -> O(n*loglogn)
  // 4. Segmented Sieve Approch -> O(n*loglogn)
  // 1 Is Not Prime
  // Smallest Prime Numer Is 2

  // GCD/HCF
  // Euclid Algorithem To Find GCD
  // gcd(a,b) = gcd(a%b,b) or gcd(a-b,b)
  // LCM(a,b)*gcd(a,b) = a*b

  // Modulo Arithmetic
  // 1. (a%n) -> [0,n-1]
  // 2. Generally To Avoid Overflow While Storing Into Intger We Do Modulo With
  // A Large Number
  // 1. (a + b) % n = (a % n + b % n)
  // 2. (a * b) % n = (a % n * b % n)
  // 3. (a - b) % n = (a % n - b % n)
  // 4. (a / b) % n = (a % n / b % n)
  // 5. ((a % n) % n) % n = (a % n)

  // Fast Exponentiation
  // 1. Normal Solution To Find a^b -> O(b)
  int slowWxponentiation(int a, int b) {
    int ans = 1;
    for (int i = 0; i < b; i++) {
      ans = ans * a;
    }
    return ans;
  }
  // 2. Fast Exponentiation a^b -> O(logb)
  int fastExponeniation(int a, int b) {
    int ans = 1;
    while (b > 0) {
      if (b & 1) {
        // Odd
        ans = ans * a;
      }
      a = a * a;
      b >>= 1; // b = b/2
    }
    return ans;
  }
  // Architecture Dependent
  // Inside Function Array Has Max Size
  // Int Double Char  -> Max Size -> 10^6
  // Bool Array -> Max Size -> 10^7
  // Global Array
  // Int Double Char  -> Max Size -> 10^7
  // Bool Array -> Max Size -> 10^8
}
