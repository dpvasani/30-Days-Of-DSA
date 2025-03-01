#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) { 
        // Optimized loop (√n)
        if (num % i == 0) return false;
    }
    return true;
}

// Function to find all prime numbers in a given range
vector<int> findPrimes(int start, int end) {
    vector<int> primes;
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) primes.push_back(i);
    }
    return primes;
}

int main() {
    int start, end;
    cin >> start >> end;

    vector<int> primes = findPrimes(start, end);

    // Print result
    cout << "[ ";
    for (int num : primes) {
        cout << num << " ";
    }
    cout << "]" << endl;

    return 0;
}
