#include <iostream>
using namespace std;

// Function to calculate the sum of digits until a single digit is obtained
int sumOfDigitsUntilSingle(int num) {
    while (num >= 10) { 
        // Keep summing until a single digit remains
        int sum = 0;
        while (num > 0) {
            // Extract last digit and add to sum
            sum += num % 10; 
             // Remove last digit
            num /= 10;      
        }
        // Update number with the new sum
        num = sum; 
    }
    return num;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = sumOfDigitsUntilSingle(number);
    cout << "The single-digit sum is: " << result << endl;

    return 0;
}
