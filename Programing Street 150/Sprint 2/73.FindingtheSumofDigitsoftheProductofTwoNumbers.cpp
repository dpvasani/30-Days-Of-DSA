#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int number1 = 12, number2 = 34;
    int product = number1 * number2;
    cout << "The sum of digits of the product is " << sumOfDigits(product) << endl;
    return 0;
}
