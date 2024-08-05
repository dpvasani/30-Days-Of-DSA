#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define PI 3.1415926535897932384626433832795
#define MAXX(x, y) (x > y ? x : y)

class abc {

  int x;
  int y;

public:
  abc() {
    x = 0;
    y = 0;
  }
  int getX() const {
    // By Using Const -> Un Method/Function Ko AP Const Banao Ge Jiske Member
    // Variable Change Na Ho Sake
    return x;
  }
  int getY() { return y; }
  void setX(int x) { this->x = x; }
  void setY(int y) { this->y = y; }
};

float area(float r) { return PI * r * r; }
void fun() {
  int x = 6;
  int b = 17;
  // int c = x > b ? x : b;
  int c = MAXX(x, b);
}
void fun2() {
  int a = 6;
  int b = 17;
  // int c = x > b ? x : b;
  int c = MAXX(a, b);
}
void fun3() {
  int x = 6;
  int b = 17;
  // int c = x > b ? x : b;
  int c = MAXX(x, b);
}

int main() {
  // OOPs Homework Level I
  // const keyword

  // 1. The const keyword is used to declare that a variable, function, or
  // object is immutable, i.e., its value cannot be changed after
  // initialisation.

  // 2. E.g., if you declare a variable as const int x = 5;, you cannot modify
  // the value of x later in the program. Any attempt to modify the value will
  // result in a compilation error.

  // 3. You can declare a function as const, which means that it does not modify
  // the state of the object it is called on.

  // 4. Compiler may be able to store const variables in read-only memory, which
  // can result in faster access time.

  // Like A Promise
  // To Simplyfy the code -> Const Keyword Used

  // const int x = 5;
  // cout << x << endl;
  // Initialization Can Be Done But We Can Re Assign Value
  // int *p = &x; -> Work In Old Compiler But Not Now
  // *p = 10;

  // Lvalue -> Variable Having Memory Location -> int x; int y; char z;
  // Rvalue -> Variable Does Not Have Memory Location -> 5; int &a=b;

  // Const With Pointer
  // const int *a = new int(5); // Const Data And Non Const Pointer
  // int const *a = new int(5); // Second Way To Write Const Pointer
  // Data / Content -> Constant
  // Pointer -> Non Constant -> So We Can Re assign Pointer
  // *a = 10; -> Not Working
  // cout << *a << endl;
  // int b = 20;
  // a = &b; // Working
  // cout << *a << endl;

  // Pointer Constant But Data Not Constant
  // int *const a = new int(5);
  // cout << *a << endl;
  // *a = 10; // Working
  // cout << *a << endl;
  // int b = 20;
  // a = &b; // Not Working

  // Const Pointer And Const Data
  // const int *const a = new int(5);
  // cout << *a << endl;
  // *a = 10; // Not Working
  // int b = 20;
  // a = &b; // Not Working

  // Const Function
  // abc a;
  // cout << a.getX() << endl;
  // cout << a.getY() << endl;

  // Const Object Le Liya -> Kisi Function Ke Andar -> Usme Andar Jo Bhi
  // Function Call Ho Wo Sab Const Honi Chahiye

  // By Using Mutable Keyword We Can Change Member Values If It Is Const
  // Good Practice to Not Use Mutable Keyword
  // Mutable Keyword Only Use When You Need To Debug The Code

  // Initialization List
  // ctor -> Constructor -> Old Style
  // New Way -> Initialization List -> New Style
  // abc(int x, int y, int z = 0) : x(x), y(new int(y)), z(z) {}

  // MACROS

  // MACROS keyword
  // 1. In C++, macros are preprocessor directives that allow you to define
  // constants, functions, or code snippets that can be used throughout your
  // code. They are typically defined using the #define directive and are
  // evaluated by the preprocessor before the code is
  // 2. Macros can be used for a variety of purposes, such as defining constants
  // or creating shorthand for commonly used expressions.
  // 3. Macros can also be used to create reusable code snippets that can be
  // called multiple times throughout your program.

  // 4. Macros are often used to improve code readability and maintainability by
  // replacing repeated code with a macro definition.

  // 5. Macros can also be used to create custom data types, such as
  // enumerations or structures, that can be used to store and manipulate data.

  cout << area(5) << endl;
  // Compilar Pre Process Macros And Replace Them In Code Than Code Is Compiled
  // By Compilar
  // Pre Processing Is Done By Pre Processor
  // #Define -> Matlab Pre Processing Karni Hei

  return 0;
}