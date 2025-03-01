#include <iostream>
using namespace std;

void printAlternatingPattern(int n) {
    for (int i = 0; i < n; i++) {
        char first = (i % 2 == 0) ? 'A' : 'B';
        char second = (first == 'A') ? 'B' : 'A';
        for (int j = 0; j < n; j++) {
            cout << ((j % 2 == 0) ? first : second);
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    printAlternatingPattern(n);
    return 0;
}
