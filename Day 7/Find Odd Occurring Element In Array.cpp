#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int solve(vector<int> arr) {

  // Even Odd Even Odd Even Odd Even Odd Ans Odd Even Odd Even Odd Even Odd
  int s = 0;
  int e = arr.size() - 1;
  int m = s + (e - s) / 2;
  while (s <= e) {
    // Single Element
    if (s == e) {
      return s;
    }
    // 2nd Case Mid Is Even Or Odd
    if (m % 2 == 0) {
      // m = m + 1 ->
      // even == Odd -> I am Standing At Left -> Search On Right
      if (arr[m] == arr[m + 1]) {
        // I Have Checked m and m + 1 So Start From m + 2
        s = m + 2;
      } else {
        // Two Possibility -> Mid Itself Is Answer Or Left Search -> Answer In
        // Left
        e = m;
      }
    } else {
      // Even Odd Pair -> Standing At Left -> Answer In Right-> Right Search
      if (arr[m] == arr[m - 1]) {
        s = m + 1;
      } else {
        // Two Possibilities Itself Ans Or Ans Lies On Left -> Left Search
        // Ans On Even Number So First Possibility Is Gone -> Ans Exist On Left
        // Side
        e = m - 1;
      }
    }
    m = s + (e - s) / 2;
  }
  return -1;
}

int main() {
  // Find The Odd Occuring Element In The Array
  // All Element Occur Even Number Of Time Except One
  // All Repetating Element Occurs In Pair & Pair Is Not Adjutant -> There can
  // Not Be More Than Two Occusrence Of Any Element
  // FInd Element That Occurs Odd Number Of Time
  // One Method Is XOR -> TC -> 0(n)

  vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4};
  // Index Observation
  // Before Ans
  // First Element of Pair On Even Index And Seconde Element of Pair On Odd
  // Index
  // After Ans
  // First Element of Pair On Odd Index And Seconde Element of Pair On Even
  // Index
  // Ans On Even Index

  int ans = solve(arr);
  cout << "Ans Is : " << ans << endl;
  cout << "Value Is : " << arr[ans] << endl;

  return 0;
}