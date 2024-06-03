#include <iostream>
using namespace std;

int main() {
  // Reverse Array
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = 10;
  int start = 0;
  int end = size - 1;
  while (start <= end) {
    // Step 1: Swap
    swap(arr[start], arr[end]);
    // Step 2: Increment
    start++;
    // Step 3: Decrement
    end--;
  }

  // Printing Array
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}