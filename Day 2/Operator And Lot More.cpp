#include <iostream>
using namespace std;

int main() {
  // Bitwise Operators:
  // AND  &
  // OR   |
  // NOT  ~
  // XOR  ^
  // Left Shift  <<
  // Right Shift >>
  // % Is Heavy Operator Try to Use Less

  int a = 5; // binary: 0101
  int b = 3; // binary: 0011

  int c = false;
  cout << (~c) << endl;
  // The reason why the output of ~c is -1 when c is false is due to the way
  // bitwise NOT (~) operates on binary representations of integers and how
  // Boolean values are represented in C++.

  // Explanation:
  // Boolean to Integer Conversion:

  // In C++, the boolean value false is equivalent to the integer 0.
  // When false is assigned to an integer variable, it is effectively 0.
  // Binary Representation of 0:

  // The integer 0 in binary (assuming a 32-bit integer for example) is 00000000
  // 00000000 00000000 00000000. Bitwise NOT Operation:

  // The bitwise NOT operator (~) inverts each bit of the operand.
  // Inverting the binary representation of 0 (00000000 00000000 00000000
  // 00000000) results in 11111111 11111111 11111111 11111111. Two's Complement
  // Representation:

  // In two's complement representation, which is used to represent signed
  // integers in most systems, the binary value 11111111 11111111 11111111
  // 11111111 corresponds to -1. This is because in two's complement, the most
  // significant bit (leftmost bit) indicates the sign of the number (1 for
  // negative, 0 for positive), and the value is calculated as the negative of
  // the inverted bits plus one. Detailed Steps: int c = false;

  // c is assigned the integer value 0.
  // cout << (~c) << endl;

  // The bitwise NOT of 0 (~0) is computed.
  // Binary 0 is 00000000 00000000 00000000 00000000.
  // Applying bitwise NOT results in 11111111 11111111 11111111 11111111.
  // In two's complement, 11111111 11111111 11111111 11111111 represents -1.
  // Therefore, the output of ~c when c is false (or 0) is -1.

  // Here's the relevant code snippet to demonstrate this:

  // cpp
  // Copy code
  // #include <iostream>
  // using namespace std;

  // int main() {
  //     int c = false;  // equivalent to int c = 0;
  //     cout << (~c) << endl;  // ~0 = 11111111 11111111 11111111 11111111 in
  //     binary (32-bit), which is -1 in two's complement return 0;
  // }
  // Running this code will output -1 for the reasons explained above.

  // Bitwise AND
  int andResult = a & b; // binary: 0001, decimal: 1
  cout << "Bitwise AND of " << a << " and " << b << " is " << andResult << endl;

  // Bitwise OR
  int orResult = a | b; // binary: 0111, decimal: 7
  cout << "Bitwise OR of " << a << " and " << b << " is " << orResult << endl;

  // Bitwise NOT
  int notResult =
      ~a; // binary: 1010, decimal: -6 (2's complement representation)
  cout << "Bitwise NOT of " << a << " is " << notResult << endl;

  // Bitwise XOR
  int xorResult = a ^ b; // binary: 0110, decimal: 6
  cout << "Bitwise XOR of " << a << " and " << b << " is " << xorResult << endl;

  // Left Shift
  int leftShiftResult = a << 1; // binary: 1010, decimal: 10 Multiplication by
                                // 2-positive number only
  cout << a << " left shifted by 1 is " << leftShiftResult << endl;

  // Right Shift
  int rightShiftResult =
      a >> 1; // binary: 0010, decimal: 2 Division by 2 -Positive Number Only
  cout << a << " right shifted by 1 is " << rightShiftResult << endl;

  // // bitwise operators
  // bool a = true;
  // bool b = false;
  // cout << (a & b) << '\n';
  // cout << (a | b) << '\n';
  // cout << (~a) << '\n';
  // cout << (a ^ b) << "\n\n";

  // cout << (2 & 3) << '\n';
  // cout << (5 & 10) << '\n';
  // cout << (3 | 4) << '\n';

  // // left and right shift operators
  // // left shift operator
  // int a = 5;
  // a = a << 1;
  // cout << a << '\n';
  // a = 5;
  // a = a << 2;
  // cout << a << '\n';
  // a = 5;
  // a = a << 3;
  // cout << a << '\n';

  // // when MSB is 1 and 2nd MSB is 0
  // a = -2147483640;
  // a = a << 1;
  // cout << a << '\n';

  // // right shift operator
  // int b = 25;
  // b = b >> 1;
  // cout << b << '\n';
  // b = 25;
  // b = b >> 2;
  // cout << b << '\n';
  // b = 25;
  // b = b >> 3;
  // cout << b << '\n';

  // // for negative numbers -> compiler is smart so shows divide by 2
  // b = -12;
  // b = b >> 1;
  // cout << b << '\n';

  // // pre / post -> increament / decreament operators
  // Pahle Use karo Than Increment karo -> Post Increment
  // Pahle Use karo Than Increment karo -> Pre Increment
  // Pahle Decrement karo Than Use karo -> Pre Decrement
  // Pahle Use karo Than Decrement karo->Post Decrement

  // int a = 11;
  // cout << a << '\n';

  // // pre increament
  // int a = 11;
  // cout << ++a << '\n';
  // cout << a << '\n';

  // // pre increament
  // int a = 11;
  // cout << a++ << '\n';
  // cout << a << '\n';

  // // examples
  // int a = 6;
  // int c = ++a + 1;
  // cout << c << '\n';

  // int a = 6;
  // int c = a++ + 1;
  // cout << c << '\n';

  // int a = 3;
  // int b = 4;
  // int c = (++a) * (--b);
  // cout << c << '\n';

  // int a = 3;
  // int b = 4;
  // int c = (--a) * (b++);
  // cout << c << '\n';

  // int a = 5;
  // cout << (++a) * (++a) << '\n';
  // https://gynvael.coldwind.pl/?id=372

  // // break and continue
  // // break
  // int n = 5;
  // for (int i = 0; i < n; i++) {
  //   cout << "Babbar" << '\n';
  //   break;
  // }
  // cout << "Love" << '\n';

  // Break -> Exit From That Loop
  // Continu -> Skip The Remaining Code Inside The Loop

  // // continue
  // int n = 5;
  // for (int i = 0; i < n; i++) {
  //   if (i == 2)
  //     continue;
  //   cout << i << '\n';
  // }

  // // variable scoping
  // // declaration
  // int a;

  // // initialization
  // int b = 5;

  // // updatation
  // b = 10;

  // // redefination is not allowed
  // // int b = 15;

  // if (true) {
  //   int b = 15;
  //   cout << b << '\n';
  // }
  // cout << b << '\n';

  // // switch case
  // int val;
  // cin >> val;
  // switch (val + 1) {
  // case 2:
  //   cout << "Love" << '\n';
  //   break;
  // case 4:
  //   cout << "Babbar" << '\n';
  //   break;
  // case 5:
  //   cout << "Ramesh" << '\n';
  //   // continue;
  //   cout << "Keshav" << '\n';
  // case 8:
  //   cout << "Suresh" << '\n';
  //   break;
  // default:
  //   cout << "Darshan Vasani" << '\n';
  // }
  // Variable Scope
  // Global Scope
  // Local Scope
  // Making Global Scope VariableIs Bed Practice
  //  Redefine Is Not Allowed
  // Updation Is Allowed
  // Declaration
  // int a;
  // initialization
  // int b = 10;
  // Updation
  // b = 10;

  // Operator Precedence
  // Use Bracket to Solve

  return 0;
}
