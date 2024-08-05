#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Animal {
public:
  Animal() {
    // cout << "Animal constructor called" << endl;
    cout << "Animal constructor called" << endl;
  }
  void speak() {
    // cout<<"Speaking"<<endl;
    cout << "Speaking" << endl;
  }
};

class Dog : public Animal {
public:
  Dog() {
    // cout << "Dog constructor called" << endl;
    cout << "Dog constructor called" << endl;
  }
  void speak() {
    // Function Overriding
    cout << "Barking" << endl;
  }
};

int main() {
  // OOPs Level III
  // Polimorphism
  // Polymorphism is the ability of a class to take on many forms.
  // Two Type
  // 1. Compile Time Polymorphism
  //   I. Function Overloading
  //   II. Operator Overloading
  // 2. Run Time Polymorphism

  // Run Time Poloymorphism
  // Dynamic Binding
  // After Excuation of a function call, the compiler determines which function
  // to call at run time.
  // Function Overriding
  // Dog a;
  // a.speak();

  // Animal *a = new Animal();
  // a->speak();
  // Dog *b = new Dog();
  // b->speak();
  // // Upcasting
  // // If Virtual Is Not Used Than Always Called FUnction From Perent Class
  // Animal *c = new Dog();
  // c->speak(); // Speaking

  // class Animal {
  // public:
  //   virtual void speak() {
  //     // cout<<"Speaking"<<endl;
  //     cout << "Speaking" << endl;
  //   }
  // };

  // Animal *c = new Dog();
  // c->speak(); // Barking

  // Downcasting
  // If Virtual Is Used Than Always Called Function From Child Class
  // Dog *d = new Dog();
  // Dog *e = (Dog *)new Animal();
  // d->speak();
  // e->speak();

  // Jab Bhi Upcasting Or Downcasting Karte Hai Without Virtual Keyword Hamesha
  // Pointer Ka Method Call Ho Jata He Jab Bhi Upcasting Or Downcasting Karte
  // Hai With Virtual Keyword Hamesha Jis Type Ka Object Banaya He Us Type Ka
  // Method Call Ho Jata He

  // Static And Dynamic Ceation -> Both Case Behavoir Is Same
  // Animal *a = new Animal(); -> Normal Behaviour -> Animal Constructor Called
  // Animal Type Ka Object Kisi Pe Depend Nai Karta So Animal Constructor Called
  Animal *a = new Dog();
  a->speak();
  // Object Dog Type Ka Object Depend On Animal -> So Both Called
  // Dog Dependent On Animal So Both Constructor Will Be Called
  // Animal constructor called
  // Dog constructor called
  // Speaking

  Dog *b = new Dog();
  // Dog Dependent On Animal So Both Constructor Will Be Called
  // Actual Object Is Type Of Dog In Heap Memory
  // Dog Type Ke Object Ko Animal Ke Pointer Se Refer Kar Rahe Ho
  b->speak();
  // Animal constructor called
  // Dog constructor called
  // Barking

  Dog *c = (Dog *)new Animal(); // -> Animal Constructor Called
  c->speak();
  // Object Type Is Animal But Animal Type Ka Object Is Indepeendent So Animal
  // Called

  // Abstraction

  // Implementation Hiding
  // Encapsulation Is A Subset Of Abstraction
  // Abstraction
  // Example : Key Ko Kese Car Me Lagake Start Karna he Vo Bataya
  // But Baki Ki Chij Like Power Transmision, Engine, Seat, Wheels, etc. Nai
  // Bataya
  // Sirf Essential Chij Batayi Baki San Hide Kar diya Jo Needed Nahi Tha

  // Encapsulation -> We wrap the data and function in a class And Acess
  // Modifires
  // One Of The Way Achive Abstraction Is By Using Access Modifiers

  // A Container Containing Multiple Things -> Abstraction Ex: Gift Box
  // Inside Gift Box What Is There We Dont Know

  // A Group Of Many Things -> Abstraction

  // Absraction -> Generalization
  // Encapsulation -> Peren Me Sab Kuch Wrap Up Ho Gaya -> Bahot Sare Data Ko
  // Wrap Karrke Singal Entity Me Dal Dunga Beg Ke Andar Books Dal Di ->
  // Encapaulasion Konsi Book Dali Vo Nahi Pata -> Abstraction Thali Me Sabji ->
  // Abstraction Thali Me Alu Gobby Matter He -> Encapsulation Wallet Me Paise
  // He -> Encapsulation Wallet Me Different Type Of Notes He Jo Hame Nai Pata
  // He -> Abstaction

  // Dynamic Memory Allocation
  // Stack Memory -> Local Variable , Function Parameter ->By Default Lesser
  // Memory

  // Heap Memory -> By Default Greater Memory

  // We Can Change It -> Compiler Setting or OS Config Me Jake
  // int *a = new int;
  // new int -> return address

  // Best Practice If We Need Memory At Rn Time Use Heaap Memmory
  // int arr[n] // Bed Practice
  // int *arr = new int[n] // Best Practice

  // 2-D Array
  int **arr = new int *[n];
  // Pointer To Pointer -> Double Pointer = Array Of Pointer(int*)
  for (int i = 0; i < n; i++) {
    arr[i] = new int[n];
    // Arr[i] -> Pointer
    // *Arr[i] -> Value
    // new int[m] -> Array
    // 0 to n - 1 -> Row
    // 0 to m - 1 -> Column
  }

  // Deallocaion
  for (int i = 0; i < n; i++) {
    delete[] arr[i];
  }
  delete[] arr;

  // Encapsulation: Wrapping code and data together into a single unit. Class is
  // an example of encapsulation, because it wraps the method and property.

  // Abstraction: Hiding internal details and showing functionality only.
  // Abstraction focus on what the object does instead of how it does. It
  // provides generalized view of classes.

  // int number = 5;
  // string aStringNumber = number.ToString();
  // Here, ToString() is abstraction. And how this mechanism number variable
  // converted to string and initialize into aStringNumber is encapsulation.

  // Let us take a real world example of calculator. Encapsulation is the
  // internal circuits, battery, etc., that combine to make it a calculator.
  // Abstraction is the different buttons like on-off, clear and other buttons
  // provided to operate it.

  return 0;
}