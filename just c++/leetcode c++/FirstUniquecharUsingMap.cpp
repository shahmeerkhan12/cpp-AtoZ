//I donot understand because it uses maps(advanced conept)
#include <iostream>
#include <string>
#include <unordered_map>

int firstUniqueCharIndex(const std::string& str) {
    std::unordered_map<char, int> charCount;

    // Count frequency of each character
    for (char c : str) {
        charCount[c]++;
    }

    // Find the index of the first unique character
    for (size_t i = 0; i < str.length(); ++i) {
        if (charCount[str[i]] == 1) {
            return i;
        }
    }

    // No unique character found
    return -1;
}

int main() {
    std::string str = "llccdde";
    int index = firstUniqueCharIndex(str);
    if (index != -1) {
        std::cout << "First unique character found at index: " << index << std::endl;
    } else {
        std::cout << "No unique character found in the string." << std::endl;
    }
    return 0;
}
