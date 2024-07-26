#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // map to store the number and its index
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i}; // return the indices of the two numbers
            }
            numMap[nums[i]] = i; // store the index of the current number
        }
        return {}; // in case no solution is found (though the problem guarantees one solution)
    }
};
