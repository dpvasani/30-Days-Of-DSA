#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int sumOfPrimeFactors(int num) {
    int sum = 0;
    for (int i = 2; i <= num; i++) {
        while (num % i == 0 && isPrime(i)) {
            sum += i;
            num /= i;
        }
    }
    return sum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Sum of prime factors: " << sumOfPrimeFactors(number) << endl;
    return 0;
}
