#include <bits/stdc++.h>
using namespace std;


int sumOfEvens(int start, int end) {
    int sum = 0;
    
    // Ensure the start is even
    if (start % 2 != 0) start++;

    for (int i = start; i <= end; i += 2) {
        sum += i;
    }

    return sum;
}

int main() {
    int start, end;
    cin >> start >> end;

    cout << sumOfEvens(start, end) << endl;

    return 0;
}
