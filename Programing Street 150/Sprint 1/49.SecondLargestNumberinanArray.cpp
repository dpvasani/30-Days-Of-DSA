#include <iostream>
#include <limits.h>
using namespace std;

int findSecondLargest(int arr[], int size) {
    int largest = INT_MIN, secondLargest = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main() {
    int arr[] = {10, 20, 4, 45, 99};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Second Largest: " << findSecondLargest(arr, size) << endl;
    return 0;
}
