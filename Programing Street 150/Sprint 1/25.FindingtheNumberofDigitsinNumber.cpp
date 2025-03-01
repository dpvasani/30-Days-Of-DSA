#include <bits/stdc++.h>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int num;
    cin >> num;
    cout << countDigits(num) << endl;
}
