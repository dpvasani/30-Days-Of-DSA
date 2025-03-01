#include <iostream>
using namespace std;

void printZigzagStars(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ((i % 2 == 0) ? "* " : " *");
        }
        cout << endl;
    }
}

int main() {
    int n = 3;
    printZigzagStars(n);
    return 0;
}
