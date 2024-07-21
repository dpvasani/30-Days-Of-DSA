#include <iostream>

int main() {
  // Count Primes
  // Given an integer n, return the number of prime numbers that are strictly
  // less than n.
  // Neive Approch
  // TC -> O(n^2)
  class Solution {
  public:
    bool isPrime(int n) {
      if (n <= 1)
        return false;
      for (int i = 2; i < n; i++) {
        if (n % i == 0) {
          return false;
        } else {
          return true;
        }
      }
      return true;
    }

    int countPrimes(int n) {
      int c = 0;
      for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
          c++;
        } else {
          continue;
        }
      }
      return c;
    }
  };

  // Method 2 :
  // TC -> O(n*n^(1/2))
  class Solution {
  public:
    bool isPrime(int n) {
      if (n <= 1)
        return false;
      int sqrtN = sqrt(n);
      for (int i = 2; i < N; i++) {
        if (n % i == 0) {
          return false;
        } else {
          return true;
        }
      }
      return true;
    }

    int countPrimes(int n) {
      int c = 0;
      for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
          c++;
        } else {
          continue;
        }
      }
      return c;
    }
  };

  // Method 3 :
  // TC -> O(n*loglogn)
  class Solution {
  public:
    int countPrimes(int n) {
      if (n == 0) {
        return 0;
      }
      vector<bool> prime(n, true);
      prime[0] = prime[1] = false;
      int ans = 0;
      for (int i = 2; i < n; i++) {
        if (prime[i]) {
          ans++;
          for (int j = 2 * i; j < n; j += i) {
            prime[j] = false;
          }
        } else {
          continue;
        }
      }
      return ans;
    }
  };

  // Method 4 :

  void segmentedSieve(int n) {
    // Compute all primes smaller than or equal
    // to square root of n using simple sieve
    int limit = floor(sqrt(n)) + 1;
    vector<int> prime;
    prime.reserve(limit);
    simpleSieve(limit, prime);

    // Divide the range [0..n-1] in different segments
    // We have chosen segment size as sqrt(n).
    int low = limit;
    int high = 2 * limit;

    // While all segments of range [0..n-1] are not processed,
    // process one segment at a time
    while (low < n) {
      if (high >= n)
        high = n;

      // To mark primes in current range. A value in mark[i]
      // will finally be false if 'i-low' is Not a prime,
      // else true.
      bool mark[limit + 1];
      memset(mark, true, sizeof(mark));

      // Use the found primes by simpleSieve() to find
      // primes in current range
      for (int i = 0; i < prime.size(); i++) {
        // Find the minimum number in [low..high] that is
        // a multiple of prime[i] (divisible by prime[i])
        // For example, if low is 31 and prime[i] is 3,
        // we start with 33.
        int loLim = floor(low / prime[i]) * prime[i];
        if (loLim < low)
          loLim += prime[i];

        /* Mark multiples of prime[i] in [low..high]:
            We are marking j - low for j, i.e. each number
            in range [low, high] is mapped to [0, high-low]
            so if range is [50, 100] marking 50 corresponds
            to marking 0, marking 51 corresponds to 1 and
            so on. In this way we need to allocate space only
            for range */
        for (int j = loLim; j < high; j += prime[i])
          mark[j - low] = false;
      }

      // Numbers which are not marked as false are prime
      for (int i = low; i < high; i++)
        if (mark[i - low] == true)
          cout << i << " ";

      // Update low and high for next segment
      low = low + limit;
      high = high + limit;
    }
  }
}