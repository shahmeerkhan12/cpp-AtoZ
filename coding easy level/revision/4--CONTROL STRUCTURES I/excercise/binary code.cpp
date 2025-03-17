#include <iostream>
#include <bitset>
using namespace std;

int main() {
    string text;

    // Ask the user to input text
    cout << "Enter a text: ";
    getline(cin, text);

    // Loop through each character in the text and display its binary representation
    cout << "Binary representation for the characters in the text:" << endl;
    for (char c : text) {
        cout << c << " : " << bitset<4>(c) << endl;
    }

    return 0;
}
