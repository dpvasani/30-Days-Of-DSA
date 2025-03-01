#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    int original = num, sum = 0, digits = to_string(num).size();

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return sum == original;
}

int main() {
    int start, end;
    cin >> start >> end;

    vector<int> armstrongNumbers;
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            armstrongNumbers.push_back(i);
        }
    }

    // Print result
    cout << "[ ";
    for (int num : armstrongNumbers) {
        cout << num << " ";
    }
    cout << "]" << endl;

    return 0;
}
