#include <iostream>
using namespace std;


int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}


void generateFibonacci(int num) {
    cout << "Fibonacci sequence up to " << num << " terms: ";
    for (int i = 0; i < num; i++) {
        cout << fibonacci(i);
        if (i < num - 1) cout << ", ";
    }
    cout << endl;
}

int main() {
    int number;
    cout << "Enter the number of terms: ";
    cin >> number;

    if (number < 0) {
        cout << "Invalid input! Please enter a non-negative number." << endl;
    } else {
        generateFibonacci(number);
    }

    return 0;
}
