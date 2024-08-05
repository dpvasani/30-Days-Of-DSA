#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Class Creation
// class Animal {
//   // Class Creration
// };

// class className {
//   // Syntex
//   int age;
//   int name;
//   // Size Til -> 8 Bytes
//   char ch;
//   // Size Til -> 12 Bytes -> Becuase of Padding and greedy alignment
// Structure : 4 bytes | 4 bytes | 1 byte | 1 byte padding | 1 byte padding | 1
// byte padding
// };

class Animal {
  // Access Modifiers
  // All Data Below Till Private Access Modifires Will Be Public
public:
  // State or Properties or Data Members
  string name;
  // All Data Below Will Be Private
  // private:

  // To differentiate this keyword is used
  // This -> This Is Pointer To Currunt Object
  // Curren Object -> Jis Bhi Object Ke Liye Set Weight Vala Function Call Usko
  // Current Object Bolte He
  // This -> This Is Pointer To Currunt Object
  int age;
  int weight;
  // int weight(1);
  // Behavior Or Method Or Functions
  void sleep() {
    // cout << "Sleeping" << endl;
    cout << "Sleeping" << endl;
  }
  void setWeight(int weight) {
    // Set The Value Of Weight
    this->weight = weight;
    // void setWeight(int weight(2)) {
    // this->weight(1) = weight(2);
    // (*this).weight = weight; -> Both Are Same
  }
  void eat() { cout << "Eating" << endl; }
  // This Two Function Must Be Defined Inside The Class And Public
  int getWeight() {
    // Get The Valeu Of Weight
    return weight;
  }
  // void setWeight(int w) {
  //   // Set The Value Of Weight
  //   weight = w;
  // }

  // Constructor
  // When We Declared This Constructor -> By Default Vala Override Ho Jata He
  // So Vo Nahi Use Hota User Defined He Vo Use Hota he
  // By Default Constructor -> If We Not Write Any Constructor -> Compiler Will
  // By Default Consctructor -> Create Shellow Copy
  // For Creating Deep Copy -> We Have To Create Our Own Copy Constuctor
  // Defauilt Constructor
  Animal() {
    cout << "Constructor Called" << endl;
    this->age = 1;
    this->weight = 1;
    // Accessing Member And Methods Using This Keyword Is Good Practice
    // Automaically Called When Object Is Created
  }
  // Parameterized Constructor
  Animal(int age) {
    this->age = age;
    cout << "Parameterised Constructor Called" << endl;
  }
  // Parameterized Constructor -2
  Animal(int age, int weight) {
    this->age = age;
    this->weight = weight;
    cout << "Parameterised Constructor 2 Called" << endl;
  }
  // Copy Constructor
  // Animal(Animal obj) { // Pass By Value -> Copy Banegi -> Again Copy
  // Constructor Call Hoga And Infinte Loop Me Chala Jayega
  Animal(Animal &obj) {
    this->age = obj.age;
    this->weight = obj.weight;
    cout << "I am inside Copy Constructor" << endl;
  }
  void print() {
    // Print Function
    cout << this->age << " " << this->name << endl;
  }
  ~Animal() {
    // Destructor
    cout << "Destructor Called" << endl;
  }

private:
  // int weight;
  // Getter And Setter
  // Work Of Getter -> To Fetch The Value And Setter -> To Set The Value ->
  // Basically Its A Function That Can Be Used To Get And Set The Value Of A
  // Private Member
};

int main() {
  // Object Oriented Programming
  // OOPs Level I
  // Programing Technique
  // That Revolves Around Object

  // Object Has Two Thing-> State(Property) + Behavior(Function, Method))

  // Why? -> To Create Real World Entities -> Relate With Real World Problem,
  // Readble, Reusable, Extensible, Maintainable, Easily Debuggable, Easily
  // Testable

  // Class -> Blueprint For Creating Objects
  // Object -> Instance Of Class
  // Properties -> Data Members
  // Behaviour -> Member Functions
  // For Making User Defined Data Type -> Class
  // Artictecure -> Blueprint For Creating Objects -> Class
  // Actual Building -> Object -> Real Actual Entity

  // Class -> Blueprint For Creating Objects -> Lets Say Student Class 9 D
  // Object -> Instance Of Class -> Lets Say Student In 9 D Class

  // Size Of Empty Class -> 1 Byte
  // cout << "Size Of Empty Class -> " << sizeof(Animal) << endl;
  // cout << "Size Of clasName Class -> " << sizeof(className) << endl;

  // Object Creation -> Memory Allocation

  // Static Memory Allocation
  // Animal Type ka Object Jiska Name ramesh
  // Ramesh Belongs To Animal Class -> All Propertiies And Behaviour Of
  // Animal Class raamesh have
  // Accessing Is Possible Through . Operator
  // Animal ramesh;
  // cout << "Age Of Ramesh -> " << ramesh.age << endl;
  // cout << "Name Of Ramesh -> " << ramesh.name << endl;
  // ramesh.eat();
  // ramesh.sleep();

  // Dynamic Memory Allocation

  // Access Modiifiers -> Public, Private, Protected
  // By Defaulf -> Private
  // Public -> Accessible Everywhere
  // Private -> Accessible Only Inside The Class
  // Protected -> Accessible Inside The Class And Inherited Classes
  // Its Define The Scope Of Access -> Where You Can Access The What

  // Private Member Ko Outside Class Access -> I Use Getter And Setter

  // //Padding:
  // The compiler adds padding bytes to align data members to their natural
  // alignment boundaries. In this example, the char c takes 1 byte, but the int
  // i needs to be aligned on a 4-byte boundary. So, the compiler adds 3 padding
  // bytes after c to ensure that i starts at a 4-byte aligned address. Greedy
  // Alignment: The compiler aligns each data member to the largest alignment
  // requirement of any member in the structure. In this example, the largest
  // alignment requirement is 4 bytes (due to int i), so all members are aligned
  // to 4-byte boundaries. Output: The output will likely be 12 bytes, even
  // though the sum of individual member sizes is only 7 bytes. This is due to
  // the padding added by the compiler.

  // Padding: The compiler adds padding bytes to align data members to their

  // cout << "Weight" << ramesh.weight << endl;

  // ramesh.setWeight(101);
  // cout << "Weight : " << ramesh.getWeight() << endl;

  // Dynamical Memory Allocation
  // Stack Memory Is Lesser
  // Heap Memory Is Larger
  // Two Tyeps Of Memory -> Stack Memory And Heap Memory

  // Stack Memory -> Small -> Static Memory Allocation
  // Heap Memory -> Large -> Dynamic Memory Allocation

  // Allocate Memory In Heap -> Using New Keyword and Returns It Memory Location
  // Address
  // new int -> Allocate Memory In Heap -> Returns Address
  // int *ptr = new int;
  // Merge Sort
  // int *left = new int[len1];
  // Inside Stack Memory  -> left Pointer Is There
  // Inside Heap Memory ->new int[len1] Is There
  // len1 -> Array Created In Heap Memory -> So Its Size Is Dynamic -> Its Base
  // Address Is Stored In Left Pointer
  // new int[len1] -> Return Base Address Of Array len1

  // Stack Memory Autometically Deallocated While Function End
  // Space Allocated In Heap Memory Cannot Be CLeaned Automatically Even After
  // Compleation Of Program Or FUnction  -> So Its Must Be Cleaned Manually
  // delete left[];
  // There Is No Garbage Collected in C++

  // Heap Momory -> Allocation -> New Keyword
  // Deallocation -> Delete Keyword
  // Two More Concept -> Memory Leak And Memory Wastage and Garbage Collector

  // Create Object Dynamic Memory Allocation
  Animal *suresh = new Animal;
  // Both Will Give Error -> Suresh Vale Dabbe Me Address Pada He
  // So Usko Dereference Karke Access Kar Sakte Hai
  // suresh is pointer pointing object address present in heap memory
  // suresh.age = 15;
  // suresh.name = "Billi";

  (*suresh).age = 15;
  (*suresh).name = "Billi";

  cout << "Age Of Suresh -> " << suresh->age << endl;
  cout << "Name Of Suresh -> " << suresh->name << endl;

  // Alternate
  suresh->age = 20;
  suresh->name = "Babbar";

  cout << "Age Of Suresh -> " << suresh->age << endl;
  cout << "Name Of Suresh -> " << suresh->name << endl;

  suresh->eat();
  suresh->sleep();

  // This Keyword
  // Only Accesible Inside The Class

  // This -> Kya Hota Hai -> Jis Bhi Object Ke Liye Set Weight Vala Function

  // Object Creation
  // Sabse Pahle Constructor Call Hota He
  // Constructor -> Object Ko Initialize Karne Ka Kam Hota he
  // Function With No Return Type -> Constructor
  // Constructor Is Called Automatically When An Object Is Created
  // Its Name Is Same As Class Name
  // Created By Default
  // Kaam -> Initialize Karna
  // Constructor Call Sabse Pahle Hota he -> In Static And Dynamic Memory
  // Allocation

  Animal a;
  // Animal *b = new Animal(); -> Default Constructor Called
  Animal *b = new Animal(5); // Parameterised Constructor Called
  cout << "Perameterised Constructor Age : " << b->age << endl;

  Animal *c = new Animal(5, 10); // Parameterised Constructor Called
  cout << "Perameterised Constructor 2 Age : " << c->age << endl;
  cout << "Perameterised Constructor 2 Weight : " << c->weight << endl;

  // Good Practice -> To Make Constructor
  // Classes Are There So -> High Chance That Initalization Of Object Will Be
  // Done In Constructor

  // Copy Constructor -> 2 Ways
  Animal d = a; // Copy Constructor Called
  Animal f(a);  // Copy Constructor Called
  Animal g(*b); // Copy constructor called

  // Destructor -> Automatically Called When Object Goes Out Of Scope
  // Free Memory
  // For Static Object Creation It Will Be Called Automatically
  // For Dynamic Object Creation It Will Be Called Manually -> We Have To Call
  // Using Delete objName;
  // No Return Type
  // No Input Peraameter
  // Name -> ~ClassName()
  // Dynamic -> delete b;
  // ~Animal(){
  //   cout << "Destructor Called" << endl;
  // }
}