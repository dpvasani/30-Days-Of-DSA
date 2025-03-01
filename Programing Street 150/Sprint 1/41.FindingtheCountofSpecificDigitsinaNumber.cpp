#include <iostream>
using namespace std;

// Function to count occurrences of a specific digit
int countDigitOccurrences(int num, int digit) {
    int count = 0;
    while (num > 0) {
        if (num % 10 == digit) { 
            // Check if last digit matches the given digit
            count++;
        }
        // Remove last digit
        num /= 10; 
    }
    return count;
}

int main() {
    int number, digit;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit to count: ";
    cin >> digit;

    if (digit < 0 || digit > 9) {
        cout << "Invalid digit! Please enter a single digit (0-9)." << endl;
    } else {
        int result = countDigitOccurrences(number, digit);
        cout << "The digit " << digit << " occurs " << result << " times in " << number << "." << endl;
    }

    return 0;
}
