#include <iostream>
#include <cctype>
#include <string>
using namespace std;
string letter_to_digits(string input_string)
{
   string letter_to_num = "22233344455566677778889999";
   string digit = " ";
   int count = 0;
   for (char ch : input_string)
   {
      if (isalpha(ch) && count < 7)
      {
         char upper_ch = toupper(ch);
         digit += letter_to_num[upper_ch - 'A'];
         count++;
      } // end if
   }    // end for loop
   if (digit.length() > 3)
      digit.insert(3, "-");
   return digit;
}
int main()
{
   while (true)
   {
      string input_string;
      cout << "\nEnter a string of telephone numbers in letter form to turn it into digits:" << endl;
      getline(cin, input_string);
      if (input_string == "q" || input_string == "Q")
         break;

      string digits = letter_to_digits(input_string);
      cout << "The telephone digits of the letter form is: " << digits;

   } // end while

   return 0;
} // end main