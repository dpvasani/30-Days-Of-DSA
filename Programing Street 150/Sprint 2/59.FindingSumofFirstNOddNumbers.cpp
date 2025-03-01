#include <iostream>
using namespace std;

// Function to compute the sum of the first N odd numbers
int sumOfOddNumbers(int n) {
    return n * n; // Sum of first N odd numbers = N^2
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    cout << "Sum of the first " << n << " odd numbers: " << sumOfOddNumbers(n) << endl;
    return 0;
}
