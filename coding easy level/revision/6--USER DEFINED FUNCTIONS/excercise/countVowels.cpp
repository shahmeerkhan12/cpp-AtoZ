#include <iostream>
#include <cctype>
using namespace std;
int countVowels(const string &input)
{
   int NoOfVowels = 0;
   for (char ch : input)
   {
      char lowercasech = tolower(ch);
      if (lowercasech == 'a' || lowercasech == 'e' || lowercasech == 'i' || lowercasech == 'o' || lowercasech == 'u')
      {
         NoOfVowels++;
      }
   }
   return NoOfVowels;
}
int main()
{
   string input;
   cout << "Enter a stream of character: " << endl;
   cin >> input;
   int vowels = countVowels(input);
   cout << "\nThe number of vowels is the string are: " << vowels;
   return 0;
}