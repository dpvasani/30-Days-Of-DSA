#include <iostream>
using namespace std;


bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Sum Of First N Elements
int sumOfNPrimes(int n) {
    int sum = 0, count = 0, num = 2;
    while (count < n) {
        if (isPrime(num)) {
            sum += num;
            count++;
        }
        num++;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    cout << "Sum of first " << n << " prime numbers: " << sumOfNPrimes(n) << endl;
    return 0;
}
