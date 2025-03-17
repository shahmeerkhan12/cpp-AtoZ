#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string letters_to_digits( string input_string)
{
   string letter_to_digit = "22233344455566677778889999";
   string digits = ""; // initialized to nothing:
   int count = 0;

   for (char ch : input_string)
   {
      if (isalpha(ch) && count < 7)
      {
         char upper_ch = toupper(ch);
         digits += letter_to_digit[upper_ch - 'A'];
         count++;
      }
   }

   if (digits.length() > 3)
   {
      digits.insert(3, "-");
   }

   return digits;
}

int main()
{
   while (true)
   {
      string input_string;
      cout << "Enter a telephone number expressed in letters (or 'q' to quit): ";
      getline(cin, input_string);

      if (input_string == "q" || input_string == "Q")
      {
         break;
      }

      string digits = letters_to_digits(input_string);
      cout << "The telephone number in digits is: " << digits << endl;
   }

   return 0;
}
