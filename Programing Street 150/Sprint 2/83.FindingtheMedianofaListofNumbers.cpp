#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double findMedian(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    return n % 2 == 1 ? nums[n / 2] : (nums[n / 2 - 1] + nums[n / 2]) / 2.0;
}

int main() {
    vector<int> nums = {3, 1, 4, 1, 5};
    cout << "The median is " << findMedian(nums) << endl;
    return 0;
}
