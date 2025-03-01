#include <bits/stdc++.h>
using namespace std;


int calculateSum(const vector<int> &arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);     

    // Input
    for (int &num : arr) {
        cin >> num;
    }

    // Output sum
    cout << calculateSum(arr) << endl;

    return 0;
}
