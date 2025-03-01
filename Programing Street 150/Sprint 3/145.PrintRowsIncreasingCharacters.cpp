#include <iostream>
using namespace std;

void printCharacterRows(int n) {
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << ch++;
        }
        cout << endl;
    }
}

int main() {
    int n = 3;
    printCharacterRows(n);
    return 0;
}
