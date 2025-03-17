#include <iostream>
using namespace std;

int main() {
    string text;

    // Ask the user to input text
    cout << "Enter a text: ";
    getline(cin, text);

    // Loop through each character in the text and display its ASCII code
    cout << "ASCII codes for the characters in the text:" << endl;
    for (char c : text) {
        cout << c << " : " << static_cast<int>(c) << endl;
    }

    return 0;
}
