#include <iostream>
using namespace std;

int triangularNumber(int N) {
    return (N * (N + 1)) / 2;
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    int result = triangularNumber(N);
    cout << "The " << N << "-th triangular number is: " << result << endl;

    return 0;
}
