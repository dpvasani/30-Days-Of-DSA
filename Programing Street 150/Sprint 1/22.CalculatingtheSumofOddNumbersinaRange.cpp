#include <bits/stdc++.h>
using namespace std;

// Function to calculate sum of odd numbers in a given range
int sumOfOdds(int start, int end) {
    int sum = 0;

    // Ensure the start is odd
    if (start % 2 == 0) start++;

    for (int i = start; i <= end; i += 2) {
        sum += i;
    }

    return sum;
}

int main() {
    int start, end;
    cin >> start >> end;

    cout << sumOfOdds(start, end) << endl;

    return 0;
}
