// program to roll a pair of dice
// prvious Record: appeared in chap: 6(user defined functions)
#include <iostream>
#include "die.h"
using namespace std;
int main()
{
   int targetNum = 7;
   die die1;
   die die2;
   int sum = 0;
   do
   {
      int i = 1;
      die1.roll();
      die2.roll();
      int num1 = die1.get_num();
      int num2 = die2.get_num();
      sum = num1 + num2;
      if (sum == targetNum)
      {
         cout << "The TargetNumber is obtained by the Sum of"
              << "rolling die 1 and die 2 " << i << " times";
              cout<<"\n die 1= "<<die1.get_num()
              <<"\n die 2= "<<die2.get_num()<<endl;
         break;
      }
      i++;
   } while (sum != targetNum);
   cout << "\nThe program Terminates:>>>";
}