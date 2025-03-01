#include <iostream>
using namespace std;

void generateTriangle(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int height = 4;
    generateTriangle(height);
    return 0;
}
