#include "Bird.h"
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// int x = 10; // Global Variable

// class abc {
// public:
//   int x;
//   int y;
//   void print() {
//     cout << x << endl;
//     // cout << this->x << endl;
//     cout << y << endl;
//     // cout << this->y << endl;
//   }
// };

// Static Keyword

// class abc {
// public:
//   static int x, y;
//   void print() { cout << x << " " << y << endl; }
// };

// // Definition of static members
// // Class Ke Bahar Initialize Karna Padta He
// int abc::x = 0;
// int abc::y = 0;

// Inline FUnction
// inline void numberShow(int num) { cout << num << endl; }

// Friend Keyword And Function
// class A {
// private:
//   int x;

// public:
//   A(int _val) : x(_val) {}

//   int getX() const { return x; }
//   int setX(int _val) {
//     x = _val;
//     return x;
//   }
//   friend class B;                // Friend Class
//   friend void print(const A &a); // Function Mera Friend Hai
// };

// class B {
// public:
//   void print(const A &a) {
//     // Error Because For Const You Can Take Const Function ->int getX() {
//     return
//     // x; }
//     cout << a.getX() << endl;
//     // int getX() const { return x; }  -> Error Gone
//     // After Friend Keyword
//     cout << a.x << endl;
//     // A And B Are Friend Class
//   }
// };
// void print(const A &a) {
//   // Friend Function
//   cout << a.x << endl;
// }

// ctor Made Private?

// error: calling a private constructor of class 'Box'
//   Box b(5);
//       ^
// ./main.cpp:74:3: note: declared private here
//   Box(int _width) : width(_width) {}
// class Box {
// private:
//   int width;
//   Box(int _width) : width(_width) {}

// public:
//   // Box(int _width) : width(_width) {}
//   int getWidth() const { return width; }
//   void setWidth(int _val) { width = _val; }
//   friend class BoxFactory;
// };

// class BoxFactory {
//   int count;

// public:
//   Box getABox(int _w) {
//     ++count;
//     return Box(_w);
//   }
// };

// Abstraction

// void birdDoesSomething(Bird *&bird) {
//   bird->fly();
//   bird->eat();
//   bird->fly(); // Best Way
//   // Sperrow->eat();  -> Worst Way
//   // In This Case You Need ToChange Everywhere In Code
//   // Buy By Using Birds Interface You Doesnt Need To Change Everywhere
//   cout << "Bird does something" << endl;
// }

// Shellow Copy Vs Deep Copy

class abc {
public:
  int x;
  int *y;
  abc(int _x, int _y) : x(_x), y(new int(_y)) {}

  // Default Dumb Copy Cnstructor -> Shallow Copy
  // abc(const abc &obj) {
  //   x = obj.x;
  //   y = obj.y;
  // }
  // Our Smart Deep Copy Construtor
  // abc(const abc &obj) {
  //   x = obj.x;
  //   y = new int(*obj.y);
  // }

  void print() const {

    // printf("X:%d\nPTR Y:%p\nContent Of Y(*y):%d\n\n", x, y, *y);
    cout << "X: " << x << endl;
    cout << "PTR Y: " << y << endl;
    cout << "Content Of Y (*y): " << *y << endl;
  }
  ~abc() { delete y; }
};

int main() {
  // Local Vs Global Variable
  // Global Variable
  // Wrritem Outside Of A Function
  // Accessible To All Functions(Same Copy)

  // Local Variable
  // Wrritem Inside Of A Function
  // Accessible To Only That Function Scope Only
  // Scoped
  // x = 20; // Global Variable
  //:: x = 20; // Global Variable -> Both Are Same
  // cout << x << endl;
  // int x = 5; // Local Variable To main Function
  // cout << x << endl;
  // cout << ::x << endl; // Accessing Global Variable
  // {
  // int x = 10;
  // cout << x << endl;
  // Most Local Print Hoga
  // cout << ::x << endl; // Global Access Hoga
  // }

  // Static Keyword
  // Static Data Member  -> That Variable Is Going To Share Memory With All of
  // The Class Instance (Object)
  // Static Member Function -> There Is No Instance Of That
  // Class Being passed In To Method

  // abc obj1 = {1, 2};
  // abc obj2 = {3, 4};
  // obj1.print();
  // obj2.print();
  // Obj1 Ka Instance Mein x = 1 Hai and y = 2 Hai -> Hidden Perameter ->
  // This(1) Pointer Thats Why Cpp Is Not Confusing About What To Call Like Obj1
  // Vala X And Y Call Karu Ya Obj2 Vala X And Y Call Karu
  // Obj2 Ka Instance Mein x = 3 Hai and y = 4 Hai->This(2) Pointer
  // Point To Note -> This(2) ! This(1)
  // This Pointer Is Related To That Perticular Instance Of That Class Or That
  // Object Of Class

  // abc obj1;
  // obj1.x = 1;
  // obj1.y = 2;
  // obj1.print(); // Output: 1 2

  // abc obj2;
  // obj2.x = 10;
  // obj2.y = 20;
  // obj1.print(); // Output: 10 20
  // obj2.print(); // Output: 10 20

  // Inshort Earliear Harek Object Ke Liye X and Y Alag The But By Using Static
  // Keyword -> Ab X And Y Harek Object Ke Liye Same He -> Jo Pahle Alag Alag
  // The
  // Wihtout Static Keyword -> One To One Relationship
  // Like 1st Object -> 1st X and Y
  // 2nd Object -> 2nd X and Y
  // With Static Keyword -> Ab X and Y Harek Object Ke Liye Same He
  // Like One To Many Relationship
  // Like 1st Object -> 1st X and Y
  // 2nd Object -> 1st X and Y
  // 3rd Object -> 1st X and Y

  // Use Case Sab Object Ke Between | Sab Class Ke Between Same Variable Use
  // Karna Chahte Ho To Static Keyword Use Karna Padta Hai

  // Static Member Function Or Static Data Member -> No This Pointer Is
  // Available
  // Static Member Function Pure Class Ka Common Hoga abc::print(); ->
  // For Static Member Function Similar Like Above Can Only Access Static Member
  // Only

  // Inline Function -> Smilar Like #Defin  -> Stack Me Entry Hi Nai Hoti
  // Inline functions

  // 1. An inline function is a regular function that is defined by the inline
  // keyword.

  // 2. The code for an inline function is inserted directly into the code of
  // the calling function by compiler while compiling, which can result in
  // faster execution and less overhead compared to regular function calls.

  // 3. Instead of calling function the statements of functions are pasted in
  // calling function.

  // 4. Used with small sized functions. So that executables are small (handled
  // automatically by compiler optimisation levels).

  // numberShow(10);

  // Friend Keyword

  //  1. friend is a keyword in C++ that is used to share the information of a
  //  class that was previously hidden.
  // 2. For example, the private members of a class are hidden from every other
  // class and cannot be modified except through getters or setters. Similarly,
  // the protected members are hidden from all classes other than its children
  // classes.

  // A a(10);
  // B b;
  // b.print(a);

  // print(a);

  // Can ctor Be Made Private? -> Yes
  // Singalton Class Me Use Hota He
  // Use Case : Muje Na Koi Aur Class Jiska Name BoxFactory He Vo Hi Initializes
  // And Mere Name Ke Object Bana Sakta He Baki Aur Koi Nai Main App Bhi Nai
  // ctor -> Constructor
  // dtor -> Destructor

  // BoxFactory bfact;
  // Box b = bfact.getABox(5);
  // cout << b.getWidth() << endl;

  // Memory Layout Of A Program
  // Hello.cpp -> Compile -> Assembly(Machine Code) -> Excuateble Code(Program)

  // exec Name Ka Program OS Ke Kernal Ke Andar Hota he -> Vo Uthake Usko Memory
  // me Load Karta He -> Inshort Ram me Load Karta He

  // int x = 10; // Intialize Data
  // int c; // Uninitialize Vaiable
  // OS Uninitialize Data Ko Automatic 0 Set Kar Deta He BSS Me

  // What Is Abstract Class?

  // 1. Class that contains at least one pure virtual function, and these
  // classes cannot be instantiated.
  // 2. It has come from the idea of Abstraction.

  // Bird.h Kisi ne Implement Karke Di He -> Main.cpp Client He

  // Bird *bird = new Sperrow();
  // birdDoesSomething(bird);
  // Sperrow *sp = new Sperrow();
  // sp->eat(); -> Not Accessible
  // birdDoesSomething(sp); -> Not Accessible

  // We Are Calling Birds Ke Corresponding Fly And Eat Function
  // We Doesnt Need To Call Sperrows Ke Fly And Eat Function -> Automatically
  // Called

  // Sperrow And Eagle Are Private But You Are Accessing Through Bird
  // Here Bird Is Acting Like Interface

  // Design Strategy

  // 1. Abstraction divides code into two categories: interface and
  // implementation. So, when creating your component, keep the interface
  // separate from the implementation so that if the underlying implementation
  // changes, the interface stays the same.

  // 2. In this instance, any program that uses these interfaces would remain
  // unaffected and would require recompilation with the most recent
  // implementation.

  // Abstract Class -> Interface
  // Bird *b2 = new Bird();  -> Not Working
  // Bird Ka Object Nai Ban Sakta Kyu Ki Vo Abstract Class He

  // Virtual In Cpp

  // Way To Achive Runtime Polymorphism
  // Compile Time Pe Table Banega Virtual Table -> Static Array Table ->
  // Functtion Pointer Table -> V Table
  // Program Ke ByteCode Ka Part He

  // Bird *bird = new Sperrow(); ->Yeh Chij Ke Bad Hota he ->  There Is Pointer
  // Hidden Is Added By Compiler
  // -> vptr Is Pointing To Sperrow VTable -> Virtual He To Uska Fly is pointing
  // to Sparrow Vala Fly -> That's Why b->fly() -> Sparrow Fly Call Hota He
  // Isko Late Binding Bhi Bolte He

  // Can We Make a Virtual Constructor?

  // 1. No,
  //   Virtual Constructors Are Not Possible:
  //     1. A constructor cannot be virtual because, when a class's constructor
  //     is executed, the virtual table (vtable) is not yet in memory, and no
  //     virtual pointer (vptr) is defined at that point. Therefore,
  //     constructors must always be non-virtual.

  //     2. The purpose of a virtual call is to allow work to be done with
  //     partial information, enabling function calls based on an interface
  //     without knowing the exact type of the object. However, creating an
  //     object requires complete information, including the exact type of the
  //     object to be created. As a result, a constructor call cannot be
  //     virtual.

  // Can we make virtual dtor?
  // 1. Yes.
  // 2. It is really important to handle proper destruction of Derived classes.
  // To Ensure Memory Leak Use Virtual In Base Class Dtor -> So Pahle Derived
  // Class Ka dtor Call Hota He Uske Bad Base Class Ka Dtor Call Hota He

  // Without Virtual Keyword In Dtor -> Base Class Ka Dtor Call Hota He And
  // Derived Class Ka dtor Delete Nai Hota

  // class Base {
  // public:
  //   Base() { cout << "Base ctor\n"; }
  //   // Jab App Class Ko Construct Kar Rahe Ho Tab  Yani Ki Ap Constructor Ke
  //   // Nadar Ho Tab Virtual Table Memory Me Load Nahi Hota
  //   virtual ~Base() { // Destructor should be virtual to ensure proper
  //   cleanup
  //     cout << "Base dtor\n";
  //   }
  // };

  // class Derived : public Base {
  // public:
  //   Derived() { cout << "Derived ctor\n"; }
  //   ~Derived() { cout << "Derived dtor\n"; }
  // };

  // Base *b = new Derived();
  // delete b;

  // Deep Copy Vs Shallow Copy

  // Shallow Copy -> Copied Only Outer Thing You Didn't Copy Inner Things
  // Like There Is One Box InSide That Box Has Some More X And Y Content
  // So A Box Is There And Inside That Box There Is Some X And Y Content
  // B = A -> Shallow Copy
  // Inside B Box There Is Some X And Y Content Is Not Exist

  // If You Copy Inner Things Inside Outer Things Then You Will Get Deep Copy
  // abc a(1, 2);
  // a.print();
  // abc b = a; // Copy Constructor Call Hota he
  // cout << "Printing b" << endl;
  // b.print();
  // *b.y = 10;
  // cout << "Printing b" << endl;
  // b.print();
  // cout << "Printing a" << endl;
  // a.print();

  // Deconsructor -> Shellow Vs Deep Copy

  abc *a = new abc(1, 2);
  abc b = *a; // Copy Constructor Call Hota he
  delete a;
  cout << "Printing b" << endl;
  b.print();

  // Printing b
  // X: 1
  // PTR Y: 0x8aced0
  // Content Of Y (*y): 2220
  // free(): double free detected in tcache 2

  // In Short Y Ka Vajud Hi Nai He Uske Bad Be Ap Usko b.print() Ke Bad Return 0
  // Me Delete Kar Rahe ho

  return 0;
}