#include <iostream>

int main() {
    int number;
    
    // Ask the user to input a number
    std::cout << "Please enter a number between 0 and 36: ";
    std::cin >> number;

    if (number >= 0 && number <= 9) {
        // If the number is between 0 and 9, display the number itself
        std::cout << "You entered: " << number << std::endl;
    } else if (number >= 10 && number <= 35) {
        // If the number is between 10 and 35, display the corresponding letter
        char letter = static_cast<char>('A' + (number - 10));
        std::cout << "You entered: " << letter << std::endl;
    } else {
        // If the number is outside the specified range, display an error message
        std::cout << "Invalid input. Please enter a number between 0 and 36." << std::endl;
    }

    return 0;
}
