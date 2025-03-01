#include <iostream>
using namespace std;


long long largestPrimeFactor(long long n) {
    long long maxPrime = -1;

    // Check for divisibility by 2
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }

    // Check for odd factors from 3 to sqrt(n)
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2) {
        maxPrime = n;
    }

    return maxPrime;
}

int main() {
    long long number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Largest prime factor: " << largestPrimeFactor(number) << endl;
    return 0;
}
