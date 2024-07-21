#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int factorial(int n) {
  if (n == 0) {
    return 1;
  }
  return n * factorial(n - 1);
}

void reversePrint(int n) {
  if (n == 0) {
    return;
  }
  cout << n << endl;
  reversePrint(n - 1);
}

void normalPrint(int n) {
  if (n == 0) {
    return;
  }
  normalPrint(n - 1);
  cout << n << endl;
}

int main() {
  // Recursion Level I
  // Bookish language : When Function Call Itself
  // Desi language : Bigger Problem Solution Dependet on Choti And Same Type Ki
  // Smaller Problem Par
  // n! = n * (n-1)!
  // Bigher Problem = n * Smaller Problem
  // Fibo(n) = Fibo(n-1) + Fibo(n-2)
  int n;
  cout << "Enter The Number : ";
  cin >> n;
  int ans = factorial(n);
  cout << "Fectorial Is : " << ans << endl;

  // Components Of Recusion
  // 1. Base Case/Stoping Condition -> Return Statement -> On Top Return
  // Statement Must On Base Case
  // 2. Recursive Relation -> Recursive Call
  // 3. Processing (Optional)

  // Recursive Solution Take Extra Space On Stack This Is Drawback Of Recursion

  // usage of reversePrint and normalPrint
  cout << "Reverse Print:" << endl;
  reversePrint(n);
  cout << "Normal Print:" << endl;
  normalPrint(n);

  // Tail Recursion
  // 1. Base Case
  // 2. Processing
  // 3. Recursive Call

  // Head Recursion
  // 1. Base Case
  // 2. Recursive Call
  // 3. Processing

  // Ek Case Solve Kardo Baki Sab Recursion Sambhal Leta Hai
  // Just Believe On It Dont Doubt On Recursion

  return 0;
}
