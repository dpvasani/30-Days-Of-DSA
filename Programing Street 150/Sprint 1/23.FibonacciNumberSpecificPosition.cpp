#include <bits/stdc++.h>
using namespace std;

int Fibonacci(int position) {
    // Base Cases
    if (position == 0) return 0;
    if (position == 1) return 1;

    int a = 0, b = 1, sum;
    
    for (int i = 2; i <= position; i++) {
        sum = a + b;
        a = b;
        b = sum;
    }

    return b; 
}

int main() {
    int position;
    cin >> position;  
    cout << Fibonacci(position) << endl;  
}
