#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is a perfect number
bool isPerfectNumber(int num) {
    if (num <= 1) return false; // Perfect numbers are > 1
    int sum = 1; // 1 is always a divisor

    // Find divisors up to sqrt(num) for efficiency
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) sum += num / i; // Add corresponding divisor
        }
    }

    return sum == num;
}

int main() {
    int num;
    cin >> num;

    if (isPerfectNumber(num))
        cout << "Perfect Number" << endl;
    else
        cout << "Not a Perfect Number" << endl;

    return 0;
}
