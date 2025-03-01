#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int sum = 0;
    int originalN = n;
    int digits = to_string(n).size();
    
    while (n > 0) {
        int digit = n % 10;

        // Compute digit^digits
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= digit;
        }

        sum += power;
        n /= 10;
    }
    
    if (sum == originalN) {
        cout << "Armstrong Number";
    } else {
        cout << "Not an Armstrong Number";
    }
    
    return 0;
}
