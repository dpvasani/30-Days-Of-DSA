#include <iostream>
#include <vector>
using namespace std;

int differenceEvenOddSum(vector<int>& arr) {
    int evenSum = 0, oddSum = 0;
    for (int num : arr) {
        if (num % 2 == 0) evenSum += num;
        else oddSum += num;
    }
    return evenSum - oddSum;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    cout << "Difference between sum of even and odd numbers: " << differenceEvenOddSum(arr) << endl;
    return 0;
}
