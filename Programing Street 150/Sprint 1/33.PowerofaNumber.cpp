#include <bits/stdc++.h>
using namespace std;

long long powerIterative(int base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base = 2, exponent = 3;
    cout << "Power: " << powerIterative(base, exponent) << endl;
    return 0;
}
