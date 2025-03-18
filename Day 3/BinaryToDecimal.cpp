#include <iostream>
#include <cmath>
#include <iomanip> // For formatting output
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, power = 0;

    while (binary > 0) {
        int lastDigit = binary % 10;  // Get the last digit
        decimal += lastDigit * pow(2, power);  // Multiply with 2^power
        power++;  // Increase power
        binary /= 10;  // Remove last digit
    }

    return decimal;
}

// Function to convert binary to octal
int binaryToOctal(long long binary) {
    int decimal = binaryToDecimal(binary); // Convert binary to decimal first
    int octal = 0, place = 1;

    while (decimal > 0) {
        int remainder = decimal % 8;
        octal += remainder * place;
        place *= 10;
        decimal /= 8;
    }

    return octal;
}

// Function to convert binary to hexadecimal (as a string)
string binaryToHexadecimal(long long binary) {
    int decimal = binaryToDecimal(binary); // Convert binary to decimal first
    string hex = "";
    char hexDigits[] = "0123456789ABCDEF";

    while (decimal > 0) {
        int remainder = decimal % 16;
        hex = hexDigits[remainder] + hex;  // Append corresponding hex digit
        decimal /= 16;
    }

    return (hex == "") ? "0" : hex; // Return "0" if input was 0
}

int main() {
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    cout << "Decimal equivalent: " << binaryToDecimal(binary) << endl;
    cout << "Octal equivalent: " << binaryToOctal(binary) << endl;
    cout << "Hexadecimal equivalent: " << binaryToHexadecimal(binary) << endl;

    return 0;
}
