/*
Author Shahmir Khan
Program To Determine the FIBONACCI SEQUENCE
using while-conter_controlled loops.
*/
#include <iostream>
using namespace std;
int main()
{
   // declaring variables
   int prev1, prev2, current, Nth_fibonacci;
   // loop control variable
   int counter;
   cout << "enter the numbers for the first and second fibonacci sequence " << endl;
   cin >> prev1 >> prev2;
   cout << "the number are: " << prev1 << " " << prev2 << endl;
   cout << "enter the position of the desired fibonacci number to find" << endl;
   cin >> Nth_fibonacci;
   cout << "we will find the nuber at positon: " << Nth_fibonacci << endl;
   // finding and displaying the fibonacci sequence number
   if (Nth_fibonacci == prev1)
   {
      current = prev1;
      cout << "the fiboncci number was found to be: " << current << endl;
   }
   else if (Nth_fibonacci == prev2)
   {
      current = prev2;
      cout << "the fiboncci number was found to be: " << current << endl;
   }
   else
      cout << "we are one step away to find the number: " << endl;
   // using loop to find the number  
   /*
   counter = 3;
   while (counter <= Nth_fibonacci)
   {
      current = prev1 + prev2;
      prev1 = prev2;
      prev2 = current;
      counter++;
   }
   */
  //equivalent for loop
  for(counter=3;counter<=Nth_fibonacci;counter++)
  {
   current=prev1+prev2;
   prev1=prev2;
   prev2=current;
   counter++;
  }


   // displaying the fibnacci number
   cout << "The fibonacci number at position " << Nth_fibonacci << " is " << current << endl;
   return 0;
}