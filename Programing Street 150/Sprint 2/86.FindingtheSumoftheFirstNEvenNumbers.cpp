#include <iostream>
using namespace std;

int sumEvenNumbers(int N) {
    return N * (N + 1);
}

int main() {
    int N = 4;
    cout << "The sum of the first " << N << " even numbers is " << sumEvenNumbers(N) << endl;
    return 0;
}
