#include <iostream>
using namespace std;

void generateTrianglePattern(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}

int main() {
    int height = 4;
    generateTrianglePattern(height);
    return 0;
}   
