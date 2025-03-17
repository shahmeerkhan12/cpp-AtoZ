#include <iostream>
#include <bitset>
using namespace std;

int main()
{
   string text;

   // Ask the user to input text
   cout << "Enter a text: ";
   getline(cin, text);

   // Display the input text
   cout << "Input Text: " << text << endl;

   // Display the binary representation of the text as a whole in a single line
   cout << "Binary representation of the text: "<<text<<" "<<endl;
   for (char c : text)
   {
      cout << bitset<8>(c);
   }
   cout << endl;

   return 0;
}