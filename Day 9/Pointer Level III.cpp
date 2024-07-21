#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// void util(int *p) {
//   cout << "Before In Function" << endl;
//   cout << p << endl;
//   cout << *p << endl;
//   p = p + 1; // Address + 1 -> Next Address -> Here 0x7fffab387cf4 + (1*4) =
//              // 0x7fffab387cf8
//   // (**ptr = **ptr + 1) != (p = p + 1) != (*p = *p + 1)
//   cout << "After In Function" << endl;
//   cout << p << endl;
//   cout << *p << endl; // Garbage Value
// }

// void solve(int *val) { *val = *val + 1; }
void solve(int *&p) {
  // Passed By References
  p = p + 1;
}

int main() {
  // Pointer III
  // Pointer To Function
  // Function Pointer

  // int a = 5;
  // int *p = &a;
  // int **q = &p;  // double pointer
  // int ***r = &q; // triple pointer

  // cout << a << endl;   // 5
  // cout << &a << endl;  // 0x7ffc7fdc21ec
  // cout << p << endl;   // 0x7ffc7fdc21ec
  // cout << &p << endl;  // 0x7ffc7fdc21e0
  // cout << *p << endl;  // 5
  // cout << q << endl;   // 0x7ffc7fdc21e0
  // cout << &q << endl;  // 0x7ffc7fdc21d8
  // cout << *q << endl;  // 0x7ffc7fdc21ec
  // cout << **q << endl; // 5
  // cout << r << endl;   // 0x7ffc7fdc21d8
  // cout << &r << endl;  // 0x7ffc7fdc21d0
  // cout << *r << endl;  // 0x7ffc7fdc21e0

  // Output
  // 5
  // 0x7ffc7fdc21ec
  // 0x7ffc7fdc21ec
  // 0x7ffc7fdc21e0
  // 5
  // 0x7ffc7fdc21e0
  // 0x7ffc7fdc21d8
  // 0x7ffc7fdc21ec
  // 5
  // 0x7ffc7fdc21d8
  // 0x7ffc7fdc21d0
  // 0x7ffc7fdc21e0

  // int a = 5;
  // int *p = &a;

  // cout << "Before" << endl;
  // cout << a << endl;
  // cout << p << endl;
  // cout << *p << endl;
  // cout << "Function Call" << endl;

  // util(p);

  // cout << "Again In Main Function" << endl;
  // cout << "After" << endl;
  // cout << a << endl;
  // cout << p << endl;
  // cout << *p << endl;

  // Output :
  // Before
  // 5
  // 0x7fffab387cf4
  // 5
  // Function Call
  // Before In Function
  // 0x7fffab387cf4
  // 5
  // After In Function
  // 0x7fffab387cf8
  // -2090870528 -> Garbage Value
  // Again In Main Function
  // After
  // 5
  // 0x7fffab387cf4
  // 5

  // ****ptr ->  Value Present At Location Stored in ***ptr
  // **ptr -> Value Present At Location Stored in **ptr
  // *ptr -> Value Present At Location Stored in *ptr
  // Star Star  -> Is Pointer To Pointer

  // For Replacing Concept Of Pointer -> New Concept -> Reference Variable

  // Refereance Variable
  // int a = 5;
  // int &b = a;
  // cout << a << endl; // 5
  // cout << b << endl; // 5
  // Same Memory Location Diffrent Name
  // Same Address
  // Only Entry In Symbol Table
  // Genrally Used In Function Call And To Impliment Pass By Reference Concept
  // Concept Come For Increase Readability and Reducing Complexity
  // Why To Use Refereance VariableRefer Rather Than Pointer
  // 1. First You can Set Any Refereance Variable As NULL -> Safety More -> You
  // Can Set Pointer To NULL
  // 2. Ease Of Use While Pointer Difficult To Understand And Use

  // solve(int a) {
  //   // Passed By Value
  // }
  // solve(int &a) {
  //   // Passed By Refereance
  // }

  // int a = 12;
  // solve(&a);         // Pointer Has Been Created
  // cout << a << endl; // 13
  // return 0;

  // Pointer Passed By Value -> By Default
  // Pointer Passed By Refereance
  int a = 5;
  int *p = &a;
  cout << "Before :" << p << endl;
  solve(p);
  cout << "After :" << p << endl;

  // Output :
  // Before :0x7fffdf39602c
  // After :0x7fffdf396030

  // Return By Reference
  // Famous Example
  int *solve() {
    // Local Varible Block Scope -> Dead After Function End
    int a = 5;
    int *ans = &a;
    return ans;
  }
}