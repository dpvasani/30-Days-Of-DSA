#include <iostream>
#include <vector>
#include <algorithm> // For __gcd function
using namespace std;

// Function to compute GCD of two numbers
int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

// Function to compute GCD of an array
int findGCD(vector<int> &arr) {
    int result = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        result = gcd(result, arr[i]);
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int &num : arr) {
        cin >> num;
    }

    cout << "GCD of the array: " << findGCD(arr) << endl;
    return 0;
}
