// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int size, int target) {
//   for (int i = 0; i < size; i++) {
//     if (arr[i] == target) {
//       return i; // Return the index where the target is found
//     }
//   }
//   return -1; // Return -1 if the target is not found
// }

// int main() {
//   int arr[] = {10, 20, 30, 40, 50};
//   int size = sizeof(arr) / sizeof(arr[0]);
//   int target = 30;

//   int result = linearSearch(arr, size, target);

//   if (result != -1) {
//     cout << "Element found at index: " << result << endl;
//   } else {
//     cout << "Element not found in the array" << endl;
//   }

//   return 0;
// }

#include <iostream>
using namespace std;

int main() {

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = 10;
  int key;
  cin >> key;
  bool flag = 0;
  // Linear Search
  for (int i = 0; i < size; i++) {
    if (arr[i] == key) {
      // Found
      flag = 1;
      break;
    }
  }
  if (flag) {
    cout << "Present" << endl;
  } else {
    cout << "Absent" << endl;
  }

  return 0;
}