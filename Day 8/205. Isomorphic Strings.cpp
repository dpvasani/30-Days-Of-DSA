class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
        int hash[256] = {0}; // Mapping of each character of string 's' to string 't'
        bool isbCharsMapped[256] = {0}; // To check if a character is already mapped

        for (int i = 0; i < s.size(); i++) {
            if (hash[s[i]] == 0 && !isbCharsMapped[t[i]]) {
                hash[s[i]] = t[i];
                isbCharsMapped[t[i]] = true;
            } else {
                if (hash[s[i]] != t[i]) {
                    return false;
                }
            }
        }
        return true;
    }
};