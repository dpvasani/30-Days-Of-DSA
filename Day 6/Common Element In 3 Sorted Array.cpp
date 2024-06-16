#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3) {
  // Expected Time Complexity: O(n1 + n2 + n3)
  // Expected Auxiliary Space: O(n1 + n2 + n3)
}

int main() {
  // 3 Sorted Array In Increasing Order
  // Common Element GFG
  // Given three arrays sorted in increasing order. Find the elements that are
  // common in all three arrays. Note: can you take care of the duplicates
  // without using any additional Data Structure?
  // Method 1
  vector<int> commonElements(int A[], int B[], int C[], int n1, int n2,
                             int n3) {
    set<int> st;
    // Time Complexity: O(n1 + n2 + n3)
    // Auxiliary Space: O(Min(n1,n2, n3))
    vector<int> ans;
    int i = 0, j = 0, k = 0;
    // SET - No Duplicate Exist
    while (i < n1 && j < n2 && k < n3) {
      if (A[i] == B[j] && B[j] == C[k]) {
        st.insert(A[i]);
        // ans.push_back(A[i]);
        i++;
        j++;
        k++;
      } else if (A[i] < B[j]) {
        i++;
      } else if (B[j] < C[k]) {
        j++;
      } else {
        k++;
      }
    }
    for (auto i : st) {
      ans.push_back(i);
    }

    return ans;
  }
  // Auto Keyword -> CPP 11th Version
  // for(int i=0; i<n1; i++)
  // for (auto i =1; i<n1; i++)
  // Take Data Type AUtomatically
  // for(int i : st)  -> If St was array but st is not array
  // for(auto i : st) -> for each Loop

  return 0;
}