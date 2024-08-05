#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Animal {
  // private: -> Full Encapsulation
  //   int age;
  //   int weight;
  //   void eat() {
  //     // Function
  //     cout << "Eating" << endl;
  //   }

public:
  int age;
  int weight;
  void eat() {
    // Function
    cout << "Eating" << endl;
  }
};
// class ClassName:ModeOfInheritance PerentClass{
//   //body
// }
class Dog : public Animal {
  // Chiild Class
};

int main() {
  // OOPs Level II
  // 4 Pillar Of OOPs
  // 1. Encapsulation
  // 2. Abstraction
  // 3. Inheritance
  // 4. Polymorphism
  // All Piller Inter Related
  // If We Want to Say Then We Can Say That Everything Lies On Absraction
  // Abstraction Is The Process Of Hiding The Implementation Details And Focus
  // Encapsulation
  // Wrap Data Members And Member Function In A Single Unit/ One Perent
  // Entity(Class)
  // Object -> Data Hiding
  // Perfect Encapsulation -> All Data Members Are Private And Member Function
  // Are Also Private -> Access Them Using Getter And Setter

  // Benefits
  // 1. Security
  // 2. Privacy
  // 3. Can Read Only
  // 4. Can Decide What To Show And What To Hide
  // 5. Work With Perent Entity Is Simple

  // Objective Of Class -> Encpsulation

  // Encapsulation Is The Process Of Hiding The Implementation Details And Focus
  // Encapsulation -> Data Hiding
  // Abstraction -> Focus On The Implementation Details -> Hiding Implemetation

  // Encapsulation -> Medicine Hided In Capsule
  // Data Wraping -> We Use Clases And Access Modifiers

  // Inheritance
  // 1. Parent Class
  // 2. Child Class
  // 3. Base Class
  // 4. Derived Class
  // Parent Class -> Super Class
  // Child Class -> Sub Class
  // Base Class -> Super Class
  // Derived Class -> Sub Class

  // Child Class Can Inherit All The Properties Of Parent Class
  // Inherit Some Properties (Data Member And Member Function) From
  // Parent/Super/ Base Class To Sub/Child/Derived Class
  // Objective -> Code Reusability
  // Is A Relationship

  // Syntex
  // class ClassName:ModeOfInheritance PerentClass{
  //   //body
  // }

  Dog d1;
  d1.eat();

  // Protected:
  // Members declared as protected are accessible within the class itself and
  // by
  // Private :
  // Members declared as private are only accessible within the class
  // itself
  // Public :
  // Members declared as public are accessible from outside the class.

  // Type Of Inheritance
  // 1. Single Inheritance
  // 2. Multiple Inheritance
  // 3. Multilevel Inheritance
  // 4. Hierarchical Inheritance
  // 5. Hybrid Inheritance -> Combination Of All The Above

  // 1. Single Inheritance
  // A class inherits from one base class.

  // class Base {
  // public:
  //     void display() {
  //         cout << "Base class display function" << endl;
  //     }
  // };

  // class Derived : public Base {
  // public:
  //     void show() {
  //         cout << "Derived class show function" << endl;
  //     }
  // };

  // int main() {
  //     Derived obj;
  //     obj.display();
  //     obj.show();
  //     return 0;
  // }

  // 2. Multiple Inheritance
  // A class inherits from more than one base class.

  // class Base1 {
  // public:
  //     void display() {
  //         cout << "Base1 class display function" << endl;
  //     }
  // };

  // class Base2 {
  // public:
  //     void show() {
  //         cout << "Base2 class show function" << endl;
  //     }
  // };

  // class Derived : public Base1, public Base2 {
  // public:
  //     void print() {
  //         cout << "Derived class print function" << endl;
  //     }
  // };

  // int main() {
  //     Derived obj;
  //     obj.display();
  //     obj.show();
  //     obj.print();
  //     return 0;
  // }

  // 3. Multilevel Inheritance
  // A class is derived from a class which is also derived from another class.

  // class Base {
  // public:
  //     void display() {
  //         cout << "Base class display function" << endl;
  //     }
  // };

  // class Intermediate : public Base {
  // public:
  //     void show() {
  //         cout << "Intermediate class show function" << endl;
  //     }
  // };

  // class Derived : public Intermediate {
  // public:
  //     void print() {
  //         cout << "Derived class print function" << endl;
  //     }
  // };

  // int main() {
  //     Derived obj;
  //     obj.display();
  //     obj.show();
  //     obj.print();
  //     return 0;
  // }

  // 4. Hierarchical Inheritance
  // Multiple classes inherit from a single base class.

  // class Base {
  // public:
  //     void display() {
  //         cout << "Base class display function" << endl;
  //     }
  // };

  // class Derived1 : public Base {
  // public:
  //     void show() {
  //         cout << "Derived1 class show function" << endl;
  //     }
  // };

  // class Derived2 : public Base {
  // public:
  //     void print() {
  //         cout << "Derived2 class print function" << endl;
  //     }
  // };

  // int main() {
  //     Derived1 obj1;
  //     Derived2 obj2;
  //     obj1.display();
  //     obj1.show();
  //     obj2.display();
  //     obj2.print();
  //     return 0;
  // }

  // 5. Hybrid Inheritance
  // A combination of more than one type of inheritance.

  // class Base {
  // public:
  //     void display() {
  //         cout << "Base class display function" << endl;
  //     }
  // };

  // class Derived1 : public Base {
  // public:
  //     void show() {
  //         cout << "Derived1 class show function" << endl;
  //     }
  // };

  // class Derived2 {
  // public:
  //     void print() {
  //         cout << "Derived2 class print function" << endl;
  //     }
  // };

  // class Hybrid : public Derived1, public Derived2 {
  // public:
  //     void hybridFunction() {
  //         cout << "Hybrid class function" << endl;
  //     }
  // };

  // int main() {
  //     Hybrid obj;
  //     obj.display();
  //     obj.show();
  //     obj.print();
  //     obj.hybridFunction();
  //     return 0;
  // }

  // Summary
  // Single Inheritance: One class inherits from one base class.
  // Multiple Inheritance: One class inherits from more than one base class.
  // Multilevel Inheritance: A class is derived from another derived class.
  // Hierarchical Inheritance: Multiple classes inherit from a single base
  // class. Hybrid Inheritance: A combination of two or more types of
  // inheritance.

  // Dimond Problem/Inheritance Ambiguity Problem
  // If Multiple Perent Have Same Property Than How To Access Then
  // We Use Scope Resolution Operator
  // objectName.ParentClassName::PropertyName;

  // If Parent And Child Have Same Property Then Perent Property Inside Child
  // Class Will Get Overwrite By Child Property

  // Multiple Inheritance Is Possible In C++ Not In Java

  // Polymorphism -> Many Forms -> Existing In Many Form
  // Polymorphism Is An Ability Of An Object To Take Many Forms
  // Two Types
  // 1. Compile Time Polymorphism
  // 2. Run Time Polymorphism

  // Compile Time Polymorphism
  // 1. Operaion Overloading
  // 2. Function Overloading

  // Function Overloading
  // Same Name Functions But Signature Is Deferent or Parameter Is Different Or
  // Type Of Parameter Is Different
  // Type Of Variable Or Number Of Variable

  // Function Overloading
  // class Print {
  // public:
  //   void print(int i) { cout << "Printing int: " << i << endl; }

  //   void print(double f) { cout << "Printing float: " << f << endl; }

  //   void print(string s) { cout << "Printing string: " << s << endl; }
  // };
  // class Maths {
  // public:
  //   // Function to calculate sum of two integers
  //   int sum(int a, int b) { return a + b; }

  //   // Function to calculate sum of three integers
  //   int sum(int a, int b, int c) { return a + b + c; }

  //   // Function to calculate sum of an integer and a float
  //   float sum(int a, float b) { return a + b; }
  // };

  // Operator Overloading
  // syntex
  // return_type operator operator_name(parameter_list){
  //   // body of the function
  // }
  class Param {
  public:
    int val;
    void operator+(Param &Obj2) {
      int value1 = this->val;
      int value2 = Obj2.val;
      cout << (value1 - value2) << endl;
    }
  };

  Param Obj1, Obj2;
  Obj1.val = 30;
  Obj2.val = 20;
  // This Should Print Difference Between Them
  Obj1 + Obj2;
  // Obj1 + Obj2; -> Obj1.Add(Obj2); -> Current Object.Function Call(Input
  // Parameter)
  // a + b -> a vale current object ke liye + operator ki defination ko class me
  // dekha jayega - jaha par b as input perameter dekha jayega

  return 0;
}