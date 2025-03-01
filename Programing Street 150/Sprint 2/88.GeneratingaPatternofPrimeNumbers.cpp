#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return false;
    return true;
}

void generatePrimePattern(int rows) {
    vector<int> primes;
    int num = 2;
    for (int i = 0; i < rows; i++) {
        while (primes.size() <= i) {
            if (isPrime(num)) primes.push_back(num);
            num++;
        }
        for (int j = 0; j <= i; j++)
            cout << primes[j] << " ";
        cout << endl;
    }
}

int main() {
    int rows = 3;
    generatePrimePattern(rows);
    return 0;
}
