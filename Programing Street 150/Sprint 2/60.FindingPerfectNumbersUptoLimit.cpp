#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is perfect
bool isPerfect(int num) {
    int sum = 1; // 1 is always a divisor
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) sum += num / i;
        }
    }
    return sum == num && num != 1;
}

// Function to find all perfect numbers up to a given limit
vector<int> findPerfectNumbers(int limit) {
    vector<int> perfectNumbers;
    for (int i = 2; i <= limit; i++) {
        if (isPerfect(i)) {
            perfectNumbers.push_back(i);
        }
    }
    return perfectNumbers;
}

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    vector<int> perfectNumbers = findPerfectNumbers(limit);
    cout << "Perfect numbers up to " << limit << ": ";
    for (int num : perfectNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
