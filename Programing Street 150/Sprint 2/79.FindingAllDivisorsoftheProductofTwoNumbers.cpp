#include <iostream>
#include <vector>
using namespace std;

vector<int> findDivisors(int num) {
    vector<int> divisors;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisors.push_back(i);
        }
    }
    return divisors;
}

int main() {
    int number1 = 6, number2 = 10;
    int product = number1 * number2;
    vector<int> divisors = findDivisors(product);
    for (int divisor : divisors)
        cout << divisor << " ";
    cout << endl;
    return 0;
}
