#if !defined(BIRD_H)
#define BIRD_H
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Interface
class Bird {
public:
  virtual void
  eat() = 0; // Pure virtual function Act As Interface For Outside World
  virtual void fly() = 0;
  // Classes That Inherit This Class Has To Implement These Functions
};

// Implimentation
class Sperrow : public Bird {
private:
  void eat() { cout << "Sperrow eats seeds" << endl; };
  void fly() { cout << "Sperrow flies" << endl; }
};

class Eagle : public Bird {
private:
  void eat() { cout << "Eagle eats seeds" << endl; };
  void fly() { cout << "Eagle flies" << endl; }
};

#endif