#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   // using a predefined function to do some operation over it
   int a;
   float x = 50.78;
   char ch = 'T';
   a = 8;
   cout << "Square root of a is: "
        << sqrt(a) << endl;
   cout << "The largest whole number is: "
        << floor(a) << endl;
   cout << "The largest whole number that is not greater than x is: " << floor(x) << endl;
   // floor(x) Returns the largest whole
   // number that is not greater than x:
   cout << "The character " << ch << " is lower letter? " << islower(ch);
   return 0;
}