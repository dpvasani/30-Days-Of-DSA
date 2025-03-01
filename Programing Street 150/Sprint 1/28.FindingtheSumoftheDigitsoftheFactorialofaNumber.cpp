#include <bits/stdc++.h>
using namespace std;


long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}


int sumOfDigits(long long num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10; 
        num /= 10;      
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    
    long long fact = factorial(n);    
    int sum = sumOfDigits(fact);     
    
    cout << sum << endl;
    return 0;
}
