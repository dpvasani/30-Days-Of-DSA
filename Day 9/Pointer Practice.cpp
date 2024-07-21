#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// ✅ MCQ 01 : What Will Be The Output?
// Pointer Pracice
int main() {
  float f = 10.5;
  float p = 2.5;
  float *ptr = &f;
  (*ptr)++;
  *ptr = p;
  cout << *ptr << " " << f << " " << p << endl;

  int a = 7;
  int b = 17;
  int *c = &b;
  *c = 7;
  cout << a << " " << b << endl;

  int *ptr = 0;
  int a = 10;
  *ptr = a;
  cout << *ptr << endl;

  int b = 10;
  int *a = &b;

  char ch = 'a';
  char *ptr = &ch;
  ch++;
  cout << *ptr << endl;
}