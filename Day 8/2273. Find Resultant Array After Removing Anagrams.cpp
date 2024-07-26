
class Solution {
public:
  std::vector<std::string> removeAnagrams(std::vector<std::string> &words) {
    auto isAnagram = [](const std::string &a, const std::string &b) {
      if (a.length() != b.length())
        return false;
      std::string sortedA = a;
      std::string sortedB = b;
      std::sort(sortedA.begin(), sortedA.end());
      std::sort(sortedB.begin(), sortedB.end());
      return sortedA == sortedB;
    };

    std::vector<std::string> result;
    result.push_back(words[0]);

    for (size_t i = 1; i < words.size(); ++i) {
      if (!isAnagram(words[i], result.back())) {
        result.push_back(words[i]);
      }
    }

    return result;
  }
};
