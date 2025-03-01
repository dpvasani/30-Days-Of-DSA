#include <bits/stdc++.h>
using namespace std;

void generatePattern(int rows) {
    int num = 1;
    for (int i = 1; i <= rows; i++) {  
        for (int j = 1; j <= i; j++) { 
            cout << num << " ";
            num++; 
        }
        cout << endl; 
        
    }
}

int main() {
    int rows;
    cin >> rows;
    generatePattern(rows);
    return 0;
}
