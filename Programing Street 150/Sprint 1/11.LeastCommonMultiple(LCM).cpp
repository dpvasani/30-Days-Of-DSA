#include <bits/stdc++.h>
using namespace std;

// ✅ Method 1: LCM using GCD (Efficient) - O(log(min(a, b)))
int Gcd(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int Lcm_Using_Gcd(int a, int b) {
    return (a / Gcd(a, b)) * b; // Formula: LCM(a, b) = (a * b) / GCD(a, b)
}

// ✅ Method 2: Iterative Approach (Brute Force) - O(a * b)
int Lcm_BruteForce(int a, int b) {
    int maxVal = max(a, b);
    while (true) {
        if (maxVal % a == 0 && maxVal % b == 0)
            return maxVal;
        maxVal++;
    }
}

// ✅ Method 3: Prime Factorization Method - O(log(min(a, b))) (If optimized using Sieve)
map<int, int> PrimeFactorize(int num) {
    map<int, int> factors;
    for (int i = 2; i * i <= num; i++) {
        while (num % i == 0) {
            factors[i]++;
            num /= i;
        }
    }
    if (num > 1) factors[num]++;
    return factors;
}

int Lcm_Using_PrimeFactorization(int a, int b) {
    map<int, int> factorsA = PrimeFactorize(a);
    map<int, int> factorsB = PrimeFactorize(b);
    map<int, int> lcmFactors;

    for (auto &factor : factorsA) {
        lcmFactors[factor.first] = max(factor.second, factorsB[factor.first]);
    }
    for (auto &factor : factorsB) {
        lcmFactors[factor.first] = max(factor.second, lcmFactors[factor.first]);
    }

    int lcm = 1;
    for (auto &factor : lcmFactors) {
        lcm *= pow(factor.first, factor.second);
    }
    return lcm;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << "LCM Using GCD: " << Lcm_Using_Gcd(a, b) << endl;
    cout << "LCM Using Brute Force: " << Lcm_BruteForce(a, b) << endl;
    cout << "LCM Using Prime Factorization: " << Lcm_Using_PrimeFactorization(a, b) << endl;

    return 0;
}
