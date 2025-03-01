#include <iostream>
using namespace std;

void printAlternatingCharacters(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ((i + j) % 2 == 0 ? 'A' : 'B');
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    printAlternatingCharacters(n);
    return 0;
}
