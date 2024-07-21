#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int cutIntoSegment(int n, int x, int y, int z) {
  // Base Case
  if (n == 0) {
    return 0;
  }
  if (n < 0) {
    return INT_MIN;
  }

  // Recursively cut the segments
  int cutX = cutIntoSegment(n - x, x, y, z) + 1;
  int cutY = cutIntoSegment(n - y, x, y, z) + 1;
  int cutZ = cutIntoSegment(n - z, x, y, z) + 1;

  // Return the maximum number of segments
  return max({cutX, cutY, cutZ});
}

int main() {
  // Cut Into Segment
  int n = 7;
  int x = 5;
  int y = 2;
  int z = 2;
  int ans = cutIntoSegment(n, x, y, z);

  // If ans is negative, that means no solution was found
  if (ans < 0) {
    ans = 0;
  }

  cout << "Answer is: " << ans << endl;
  return 0;
}
