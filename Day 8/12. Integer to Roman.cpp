class Solution {
public:
    string intToRoman(int num) {
        // Seven different symbols represent Roman numerals with the following
        // values:
        // I -> 1
        // V -> 5
        // X -> 10
        // L -> 50
        // C -> 100
        // D -> 500
        // M -> 1000
        // Larger to smaller values

        // Define the Roman numeral symbols and their corresponding values
        pair<int, string> romanSymbols[] = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };

        string result;

        // Loop through each symbol, starting with the largest value
        for (auto& symbol : romanSymbols) {
            // While the number is larger than or equal to the symbol's value
            while (num >= symbol.first) {
                result += symbol.second; // Append the symbol to the result
                num -= symbol.first; // Subtract the value from the number
            }
        }

        return result;
    }
};
