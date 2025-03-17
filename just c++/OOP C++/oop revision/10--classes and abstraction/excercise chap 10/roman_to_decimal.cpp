#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class RomanTodecimal
{

public:
   static int ConversionType;
   int romanToDecimal(char roman);
   int romanToDecimal(const string &roman);
   void DisplayChoice();
   RomanTodecimal(){
       // default constructor
   };
};
// choice function
void RomanTodecimal::DisplayChoice()
{
   cout << "Please Select "
        << "\n 1 for Decimal to Roman "
        << "\n 2 for Roman to decimal " << endl;
   // Function to convert roman numberal to decimal
}
int RomanTodecimal::romanToDecimal(const string &roman)
{
   int result = 0;
   for (int i = 0; i < roman.size(); ++i)
   {
      if (i > 0 && romanToDecimal(roman[i]) > romanToDecimal(roman[i - 1]))
      {
         result += romanToDecimal(roman[i]) - 2 * romanToDecimal(roman[i - 1]);
      }
      else
      {
         result += romanToDecimal(roman[i]);
      } // end else
   }    // end for
   return result;
} // end fun
int RomanTodecimal::romanToDecimal(char roman)
{
   switch (roman)
   {
   case 'I':
      return 1;
   case 'V':
      return 5;
   case 'X':
      return 10;
   case 'L':
      return 50;
   case 'C':
      return 100;
   case 'D':
      return 500;
   case 'M':
      return 1000;
   default:
      return 0;
   } // end switch
} // end fun
/*class decimal to roman*/
class DecimalToRoman : public RomanTodecimal
{
public:
   // This function will convert the Dec into roman and return it
   const std::string decimalToRomanFun(int decimal);
};
const std::string DecimalToRoman::decimalToRomanFun(int decimal)
{
   std::string roman = "";
   const int decimalvalues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
   const char *RomanNumerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
   // i will help us to compare the decimal value with the array decimal values till the end
   for (int i = 0; i < sizeof(decimalvalues) / sizeof(decimalvalues[0]); ++i)
   {
      // an internal while loop to compare the decimal value with the decimalvalues[] and find its numeral equivalent from RomanNumeral[]
      while (decimal >= decimalvalues[i])
      {
         roman += RomanNumerals[i];
         // also update the decimal by removing the number whose RomanNumral has been written
         decimal -= decimalvalues[i];
      } // end while

   } // end for

   return roman;
}
int main()
{

   DecimalToRoman RN1; // declare object of class RomanToDecimal
   RN1.DisplayChoice();
   cin >> RomanTodecimal::ConversionType;
   while (RomanTodecimal::ConversionType != 99)
   {

      if (RomanTodecimal::ConversionType == 1)
      {

         int decimal;
         cout << "Please enter a Decimal number to find its roman Equivalent: ";
         cin >> decimal;
         RN1.romanToDecimal(decimal);                                                 // passing the decimal number to the function:
         string roman = RN1.decimalToRomanFun(decimal);                               // assigining the value returned to the roman
         cout << "\nThe Roman equivalent of " << decimal << " is: " << roman << endl; // displaying the roman equivalent
      }
      else if (RomanTodecimal::ConversionType == 2)
      {

         string roman;
         cout << "Please enter a roman numeral to find its decimal Equivalent: ";
         cin >> roman;
         RN1.romanToDecimal(roman);                                                     // passing the roma  numeral to the function:
         int decimal = RN1.romanToDecimal(roman);                                       // assigining the value returned to the decimal
         cout << "\nThe Decimal equivalent of " << roman << " is: " << decimal << endl; // displaying the decimal equivalent
      }
      RN1.DisplayChoice();
      cout << "Or Enter 99 to exit.." << endl;
      cin >> RomanTodecimal::ConversionType;
   }

   return 0;
}