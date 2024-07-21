

class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    // Given an array of strings strs, group the anagrams together. You can
    // return the answer in any order.

    // An Anagram is a word or phrase formed by rearranging the letters of a
    // different word or phrase, typically using all the original letters
    // exactly once.
    // Sorted String (Key) | Vector Of Strings (Value)
    map<string, vector<string>> mp;
    for (auto str : strs) {
      // O(n*klogk) -> klogk -> Sorting
      // SP -> O(nk)
      string s = str;
      sort(s.begin(), s.end());
      mp[s].push_back(str);
    }
    vector<vector<string>> ans;
    for (auto it = mp.begin(); it != mp.end(); it++) {
      ans.push_back(it->second);
    }
    return ans;
  }
};

#include <array>
#include <map>
#include <string>
#include <vector>

class Solution {
public:
  std::array<int, 256> hash(const std::string &s) {
    // Create a hash array for character frequencies
    std::array<int, 256> hash = {0};
    for (char c : s) {
      hash[c]++;
    }
    return hash;
  }

  std::vector<std::vector<std::string>>
  groupAnagrams(std::vector<std::string> &strs) {
    std::map<std::array<int, 256>, std::vector<std::string>> mp;
    // 2nd Solution
    // Without Sorting
    // Anagram -> Hash map
    // In M2
    // Hash 256 Key | Vector Of Strings (Value)
    // eat
    // TC -> O(n*k)
    // SC -> O(n*k)
    // e - 1 a - 1 t - 1 | eat
    // If Hash Is Same Make Group
    for (const auto &str : strs) {
      mp[hash(str)].push_back(str);
    }

    std::vector<std::vector<std::string>> ans;
    for (const auto &it : mp) {
      ans.push_back(it.second);
    }
    return ans;
  }
};
