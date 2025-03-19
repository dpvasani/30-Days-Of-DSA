#include <iostream>
#include <limits.h>
using namespace std;

int main() {

  // MAX_INT And MIN_INT
  // Starting My Max Number Will Be INT_MIN
  // Starting My Min Number Will Be INT_MAX
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = 10;
  int mex = INT_MIN;

  for (int i = 0; i < size; i++) {
    if (arr[i] > mex) {
      // Found Number Greater Than MIN_INT,  Update Mex
      mex = arr[i];
    }
  }
  cout << "Max Number Is: " << mex << endl;
  return 0;
}