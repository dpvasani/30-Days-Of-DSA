

class Solution {
public:
    static constexpr int MOD = 1000000007;

    // Function to compute factorial % MOD
    long long factorial(int n) {
        long long res = 1;
        for (int i = 1; i <= n; ++i) {
            res = (res * i) % MOD;
        }
        return res;
    }

    // Function to compute modular inverse using Fermat's Little Theorem
    long long modInverse(long long a, long long m) {
        long long m0 = m, t, q;
        long long x0 = 0, x1 = 1;

        if (m == 1)
            return 0;

        // Apply extended Euclid Algorithm
        while (a > 1) {
            // q is quotient
            q = a / m;
            t = m;

            // m is remainder now, process same as euclid's algo
            m = a % m, a = t;
            t = x0;

            x0 = x1 - q * x0;
            x1 = t;
        }

        // Make x1 positive
        if (x1 < 0)
            x1 += m0;

        return x1;
    }

    // Function to calculate the number of distinct anagrams for a word
    long long countAnagramsForWord(const std::string& word) {
        std::unordered_map<char, int> freq;
        for (char c : word) {
            freq[c]++;
        }

        long long result = factorial(word.size());
        for (auto& pair : freq) {
            result = (result * modInverse(factorial(pair.second), MOD)) % MOD;
        }
        return result;
    }

    int countAnagrams(std::string s) {
        std::istringstream iss(s);
        std::string word;
        long long totalAnagrams = 1;

        while (iss >> word) {
            totalAnagrams = (totalAnagrams * countAnagramsForWord(word)) % MOD;
        }

        return static_cast<int>(totalAnagrams);
    }
};
