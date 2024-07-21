#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Function to check if it's possible to cook the required PRATAs (nP) in given time (mid)
bool isPossibleSolution(vector<int> cooksRanks, int mid, int nP) {
  int currP = 0; // Initial PRATA Cooked Count
  for (int i = 0; i < cooksRanks.size(); i++) {
    int R = cooksRanks[i], j = 1;
    int timeTaken = 0;
    while (true) {
      if (timeTaken + j * R <= mid) {
        ++currP; // Increment PRATA count
        timeTaken += j * R; // Time taken to cook j-th PRATA by i-th cook
        ++j;
      } else {
        break; // If time taken exceeds mid, stop the loop
      }
    }
    if (currP >= nP) {
      return true; // If required PRATAs are cooked, return true
    }
  }
  return false; // If not enough PRATAs are cooked, return false
}

// Function to find the minimum time required to cook all PRATAs
int minTimeCompleteOrder(int nP, vector<int> &cooksRanks) {
  int s = 0;
  int highestRank = *max_element(cooksRanks.begin(), cooksRanks.end());
  int e = highestRank * (nP * (nP + 1) / 2); // Upper bound of time
  int ans = INT_MAX;

  // Binary search for the minimum time
  while (s <= e) {
    int mid = s + (e - s) / 2;
    if (isPossibleSolution(cooksRanks, mid, nP)) {
      ans = mid; // Update the answer if possible to cook in mid time
      e = mid - 1; // Try for lesser time
    } else {
      s = mid + 1; // Increase the time limit
    }
  }
  return ans; // Return the minimum time required
}

int main() {
  // PRATA SPOJ -> https://copyassignment.com/roti-prata-spoj-problem-solution/
  // SPOJ Question -> https://github.com/atulrulers/spoj
  // Explanation:
  // P -> PRATA <= 1000
  // C -> Cooks <= 50 Or L
  // R -> Rank -> [1,8]
  // Ci -> 1R 2R 3R 4R 5R 6R 7R 8R
  // C1 -> 1 2 3 4 5 6 7 8
  int T;
  cin >> T;
  while (T--) {
    int nP, nC;
    cin >> nP >> nC;
    vector<int> cooksRanks;
    while (nC--) {
      int R;
      cin >> R;
      cooksRanks.push_back(R);
    }
    cout << minTimeCompleteOrder(nP, cooksRanks) << endl; // Print the minimum time required
  }
  return 0;
}
