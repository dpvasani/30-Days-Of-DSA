#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is a perfect square
bool isPerfectSquare(int num) {
    // Negative numbers are not perfect squares
    // Time Complexity: O(1)
    if (num < 0) return false; 
    int sqrtNum = sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPerfectSquare(number)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
