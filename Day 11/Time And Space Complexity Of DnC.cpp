#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  // Time And Space Compelexity Of Recursive Solution
  // Counting , Fectroial , Power , Max , Min , CheckSorted -> O(n)
  // For Space Complexity -> See Depth Of Function Or Make Function Call Stack
  // -> O(n)
  // Auxiliary Space -> Extra Space Taken By My Algorithem
  // function(Normal Space){
  // Auxiliary Space
  // int a = 3
  // }

  // Fibonacci Series -> O(2^(n + 1) - 1) -> TC -> Exponecial TC
  // Fibonacci , Subsequece , Jum Stair -> O(2^n) -> TC
  // SC -> O(n)

  // Recursive Binary Search
  // TC -> O(logn)
  // SC -> O(logn)
  // n/2^a = 1 -> a = logn

  // Merge Sort
  // 2 Work Break And Merge -> O(nlogn)
  // Total Level = logn = a
  // Breaking is take logn time
  // In Every Level -> Total N Element Merge Ho Rahe He ->
  // 1 Level -> n Element Merge
  // logn Level -> nlogn Element Merge

  // Space Complexity -> O(n)

  // Permutation Of String
  // Brutal Bano But Dikho Mat
  // Length Of String = 3 = n
  // Level  0 -> 0 Call
  // Level  1 -> n Call
  // Level  2 -> n(n-1) Call
  // Level  3 -> n(n-1)(n-2) Call
  // Level  4 -> n(n-1)(n-2)(n-3) Call
  //..............
  // Level  n -> n(n-1)(n-2)(n-3)....(n-n+1) -> n! Call
  // Total Call -> n!
  // TC -> O(n!)

  // N^n >> N!
  // Space Complexity -> n Depth -> O(n)

  // Rat In A Maze
  // Rows -> n
  // Cols -> m
  // Total Cells -> n*m
  // For One Cell -> 4 Possible Moves
  // TC -> O(4^n*m)
  // 4 Calls And N Level
  // Same like Fibonacci -> where two calls and n level
  // SC -> O(n*m)
  // Total Calls -> n*m

  // Sudoku
  // 1 Cell 9 Choice
  // Total Cells -> n*m
  // TC -> O(9^(n*m))

  // SC -> O(n*m)

  // N Queen Problem
  // All N Queen Have N Choice -> TC -> O(n^n)
  // 1st Queen -> N Choice
  // 2nd Queen -> N-1 Choice
  // 3rd Queen -> N-2 Choice
  // 4th Queen -> N-3 Choice
  // .........................
  // Nth Queen -> 1 Choice
  // TC -> O(n!) (Ignoring Diagonal Thing Because Its Make Complicate Things)
  // Worst Case -> O(n^n)
  // Avrage Case -> O(n!)

  // Space Complexity
  // O(n*n) ->  When You Passed By References
  // O(n*n*n) -> When You Passed By Value

  // Phone Keypad Problem
  // Number Of Level Is n
  // For Every Level There Is 3 Or 4 Call Going

  // For Upper Bound We Assume That Every Level 4 Calls
  // TC -> O(4^n)
  // SC -> O(4^n) -> Total Answer -> Combination Type

  // Generic Formula
  // TC -> O((Number Of Calls)^(Number Of Levels))

  return 0;
}