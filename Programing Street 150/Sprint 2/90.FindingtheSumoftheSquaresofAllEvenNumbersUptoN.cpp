#include <iostream>
using namespace std;

int sumSquaresOfEvenNumbers(int N) {
    int sum = 0;
    for (int i = 2; i <= N; i += 2)
        sum += i * i;
    return sum;
}

int main() {
    int N = 4;
    cout << "The sum of squares of even numbers up to " << N << " is " << sumSquaresOfEvenNumbers(N) << endl;
    return 0;
}
