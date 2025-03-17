#include <iostream> // surround the program in a loop to enable more than one tests
#include <cctype>
#include <string>
using namespace std;
bool isVowel(char);
string rotate(string);
string pigLatin(string);
int main()
{
   string STR;
   cout << "Enter a string" << endl;
   cin >> STR;
   cout << "The pig latin form of " << STR << " is " << pigLatin(STR);
   cout << endl;
   return 0;
}
// function isVowel()
bool isVowel(char ch)
{
   switch (ch)
   {
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
   case 'Y':
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   case 'y':
      return true;
   default:
      return false;
   }
} // end function
// funtion rotate()
string rotate(string pstr)
{
   string::size_type len = pstr.length();
   string rstr;
   rstr = pstr.substr(1, len - 1) + pstr[0];
   return rstr;
}
// function pigLatin
string pigLatin(string pstr)
{
   string::size_type len;
   bool foundVowel;
   string::size_type counter;
   if (isVowel(pstr[0]))
      pstr = pstr + "-way";
   else
   {
      pstr = pstr + "-";
      pstr = rotate(pstr);
      len = pstr.length();
      foundVowel = false;
      for (counter = 1; counter < len - 1; counter++)
      {
         if (isVowel(pstr[0]))
         {
            foundVowel = true;
            break;
         }
         else
         {
            pstr = rotate(pstr);
         }

      } // end for
      if (!foundVowel)
      {
         pstr = pstr.substr(1, len) + "-way";
      }
      else
      {
         pstr = pstr + "ay";
      }

   } // end else
   return pstr;
}