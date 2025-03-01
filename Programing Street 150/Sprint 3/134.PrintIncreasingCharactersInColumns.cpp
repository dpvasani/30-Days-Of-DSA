#include <iostream>
using namespace std;

void printCharacterPattern(int n) {
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 3;
    printCharacterPattern(n);
    return 0;
}
