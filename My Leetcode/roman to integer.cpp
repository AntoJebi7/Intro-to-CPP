//
// Created by antoa on 14-02-2024.
//
#include <iostream>
#include <unordered_map>

int romanToInt(std::string s) {
    std::unordered_map<char, int> romanMap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
    };

    int result = 0;
    int prevValue = 0;

    for (int i = s.size() - 1; i >= 0; --i) {
        int value = romanMap[s[i]];
        if (value < prevValue) {
            result -= value;
        } else {
            result += value;
        }
        prevValue = value;
    }

    return result;
}

int main() {
    std::string romanNumeral;
    std::cout << "Enter a Roman numeral: ";
    std::cin >> romanNumeral;

    int integerEquivalent = romanToInt(romanNumeral);
    std::cout << "Integer equivalent: " << integerEquivalent << std::endl;

    return 0;
}
