#include <iostream>
using namespace std;

void findDivisors(int num) {
    cout << "Divisors of " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    findDivisors(number);
    return 0;
}
