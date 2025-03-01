#include <iostream>
using namespace std;

int countDigitsGreaterThan(int num, int value) {
    int count = 0;
    while (num) {
        if (num % 10 > value) count++;
        num /= 10;
    }
    return count;
}

int main() {
    int number = 54321, value = 3;
    cout << "The count of digits greater than " << value << " is " << countDigitsGreaterThan(number, value) << endl;
    return 0;
}
