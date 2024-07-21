#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int solve(vector<int> arr, int target) {
  // Base Case
  if (target == 0) {
    return 0;
  }
  if (target < 0) {
    return INT_MAX;
  }
  // One Case Solve Karo
  // For All Element Array Me Jitnie Element He Uski Call Ja Rahi Hai
  int mini = INT_MAX;
  for (int i = 0; i < arr.size(); i++) {
    int ans = solve(arr, target - arr[i]);
    if (ans != INT_MAX)
      mini = min(mini, ans + 1);
  }
  return mini;
}

int main() {
  // Target Sum -> Asked In Adobe
  // 2 Base Case -> == 0; and < 0;
  // Two Ways
  // If Target Is  = 5
  // 5 Ko Zero Tak Le Jao = 5 to -> 0 -> Mo Additional Variable Required
  // 0 Ko 5 Tak Le Jao = 0 to -> 5 -> Need Aditional Variable
  // Array Contain Distiinct Elements
  // In Case Of Negetive  We -Vc -> INT_MAX
  // For Every Target -> Array Ki All Elements Ki Call Jayegi
  vector<int> arr{1, 2, 3, 4};
  int target = 5;
  int ans = solve(arr, target);
  cout << "Answer Is : " << ans << endl;
}