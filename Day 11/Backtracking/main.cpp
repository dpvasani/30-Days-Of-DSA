#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printPermutation(string &str, int i){
  // Base Case
  if(i >= str.length()){
    cout << str << " ";
    return;
  }
  // Swapping
  // According To J Variable
  for(int j = i; j < str.length(); j++){
    // Swap
    swap(str[i], str[j]);
    // Recursion
    printPermutation(str, i+1);
    // Backtracking -> Why This?
    // To Recreate Original Input
    swap(str[i], str[j]);
  }
}

int main() {
  // Backtracking
  // Specific Form Of Recursion
  // Recursion Code + 1 Or 2 Statement Extra -> Recursion
  // Common Practice -> Explores All Possible Solutions
  // One Soution -> Discarded -> Usko Vapis Check Nai Karoge
  // Bahot Ghatiya TC Ke Solution Ham Backtracking Se Banate he
  // Some Problem Are Only Solved Through This Method
  // Bruth Force Method -> Explores All Possible Solutions

  // Basic Clasical Question -> Permutation 
  // 1. Print All Permutation Of A String

  string str = "abc";
  int i = 0;
  printPermutation(str, i);
  return 0;
}