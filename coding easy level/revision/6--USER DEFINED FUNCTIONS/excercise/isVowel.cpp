#include <iostream>
#include <cctype>  // For the isalpha and tolower functions

bool isVowel(char alphabet) {
    alphabet = tolower(alphabet);  // Convert to lowercase to handle both cases

    // Check if the alphabet is a vowel
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' ||
        alphabet == 'o' || alphabet == 'u') {
        return true;
    } else {
        return false;
    }
} 

int main() {
    char input;
    std::cout << "Enter an alphabet: ";
    std::cin >> input;

    if (isVowel(input)) {
        std::cout << input << " is a vowel." << std::endl;
    } else {
        std::cout << input << " is not a vowel." << std::endl;
    }

    return 0;
}
