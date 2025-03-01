#include <bits/stdc++.h>
using namespace std;

bool isNarcissistic(int num) {
    int originalNum = num;
    int sum = 0, digits = to_string(num).length();

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int num;
    cin >> num;

    if (isNarcissistic(num)) {
        cout << "Narcissistic Number" << endl;
    } else {
        cout << "Not a Narcissistic Number" << endl;
    }
}
