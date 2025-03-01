#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}


int sumOfPrimes(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int start, end;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    int result = sumOfPrimes(start, end);
    cout << "The sum of prime numbers between " << start << " and " << end << " is: " << result << endl;

    return 0;
}
