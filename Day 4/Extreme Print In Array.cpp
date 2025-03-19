#include <iostream>
using namespace std;

int main() {
  // Two Pointer Approach
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = 10;
  int start = 0;
  int end = size - 1;

  while (start <= end) {
    if (start == end) {
      cout << arr[start];  // Print middle element once (if odd-sized array)
    } else {
      cout << arr[start] << " " << arr[end] << " ";
    }
    start++;
    end--;
  }

  return 0;
}
