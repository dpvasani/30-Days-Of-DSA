#include <iostream>
using namespace std;

// Swap using addition and subtraction
void swapAddSub(int &a, int &b) {
  a = a + b;
  b = a - b;
  a = a - b;
}

// Swap using XOR
void swapXOR(int &a, int &b) {
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
}

// Swap using a temporary variable
void swapTemp(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int a, b;

  // Test swap using addition and subtraction
  a = 10;
  b = 20;
  cout << "Before swapAddSub: a = " << a << ", b = " << b << endl;
  swapAddSub(a, b);
  cout << "After swapAddSub: a = " << a << ", b = " << b << endl;

  // Test swap using XOR
  a = 30;
  b = 40;
  cout << "Before swapXOR: a = " << a << ", b = " << b << endl;
  swapXOR(a, b);
  cout << "After swapXOR: a = " << a << ", b = " << b << endl;

  // Test swap using a temporary variable
  a = 50;
  b = 60;
  cout << "Before swapTemp: a = " << a << ", b = " << b << endl;
  swapTemp(a, b);
  cout << "After swapTemp: a = " << a << ", b = " << b << endl;

  // Time Complexity Of Each Method
  // The time complexity for all three swap methods (using addition and
  // subtraction, using XOR, and using a temporary variable) is the same. Here
  // is the detailed analysis for each method:

  // 1.Swap using Addition and Subtraction:
  //    - Operations involved: `a = a + b`, `b = a - b`, `a = a - b`
  //    - Each of these operations is a basic arithmetic operation that takes
  //    constant time. -Time Complexity: \(O(1)\) (constant time)

  // 2.Swap using XOR:
  //    - Operations involved: `a = a ^ b`, `b = a ^ b`, `a = a ^ b`
  //    - Each of these operations is a basic bitwise operation that takes
  //    constant time. -Time Complexity: \(O(1)\) (constant time)

  // 3.Swap using a Temporary Variable:
  //    - Operations involved: `int temp = a`, `a = b`, `b = temp`
  //    - Each of these operations is a basic assignment that takes constant
  //    time. -Time Complexity: \(O(1)\) (constant time)

  // Summary

  // All three methods have a time complexity of \(O(1)\), which means they all
  // run in constant time, regardless of the values of the variables being
  // swapped. This is because each method performs a fixed number of operations
  // (either arithmetic, bitwise, or assignments) which do not depend on the
  // size of the input.

  return 0;
}
