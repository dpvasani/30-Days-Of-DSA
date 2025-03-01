#include <iostream>
using namespace std;

// Function to calculate the sum of squares of digits
int sumOfSquaresOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        // Extract last digit
        int digit = num % 10;  
        // Square it and add to sum
        sum += digit * digit;  
        // Remove last digit
        num /= 10;             
    }
    return sum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = sumOfSquaresOfDigits(number);
    cout << "The sum of the squares of digits is: " << result << endl;

    return 0;
}
