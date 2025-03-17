// this second program on the telephone digits is actually a second version of the original programta
// that finds the corresponding digit for both lower case and upper case letters using switch statement
#include <iostream>
using namespace std;
int main()
{
   char ch;
   cout << "\nPlease enter an Alphabet to find its corresponding telephon digit: " << endl;
   cin >> ch;
   while (ch != '#')
   {
      cout << "The letter you entered is: "
           << ch << endl;
      cout << "The corresponding digit for "
           << ch << " is: ";
      switch (ch)
      {
      case 'A':
      case 'a': // just a sample one here
      case 'B':
      case 'b':
      case 'C':
      case 'c':
         cout << "1";
         break;
      case 'D':
      case 'E':
      case 'F':
         cout << "2";
         break;
      case 'G':
      case 'H':
      case 'I':
         cout << "3";
         break;
      case 'J':
      case 'K':
      case 'L':
         cout << "4";
         break;
      case 'M':
      case 'N':
      case 'O':
         cout << "5";
         break;
      case 'P':
      case 'Q':
      case 'R':
         cout << "6";
         break;
      case 'S':
      case 'T':
      case 'U':

         cout << "7";
         break;
      case 'V':
      case 'W':
      case 'X':
         cout << "7";
         break;
      case 'Y':
      case 'Z':
      default:
         cout << "Invalid INput:" << endl;

      } // end switch
      cout << "\nEnter another uppercase letter"
           << " to find its corresponding telephone digit";
      cout << endl;
      cout << "Enter # to stop or terminate the program";
      cin >> ch;
      cout << endl;
   } // end while

   return 0;
}
