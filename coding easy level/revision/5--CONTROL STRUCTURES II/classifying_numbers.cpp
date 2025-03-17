#include <iostream>
#include <iomanip>
using namespace std;
const int N = 20;
int main()
{
   int i;
   int number;
   int odds = 0;
   int evens = 0;
   int zeros = 0;
   cout << "please enter 20 numbers positve, negative and zeros" << endl;
   cout << "the number you entered are: " << endl;
   for (int i = 1; i <= N; i++)
   {
      cin >> number;
      cout << number << " ";
      switch (number % 2)
      {
      case 0: /* constant-expression */
         evens++;
         if (number == 0)
            zeros++;
         break;
      case 1:
      case -1:
         odds++;
      } // end switch
   }    // end for loop
   cout << endl;
   cout << "There are " << evens << " evens, "
        << "which includes " << zeros << " zeros."
        << endl;
   cout << "The number of odd numbers is: " << odds
        << endl;

} // end main