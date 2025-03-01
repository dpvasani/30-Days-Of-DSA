#include <iostream>
using namespace std;

int fibonacciSum(int N) {
    if (N <= 0) return 0;
    int a = 1, b = 1, sum = a + b;
    for (int i = 3; i <= N; i++) {
        int next = a + b;
        sum += next;
        a = b;
        b = next;
    }
    return sum;
}

int main() {
    int N = 5;
    cout << "The sum of the first " << N << " Fibonacci numbers is " << fibonacciSum(N) << endl;
    return 0;
}
