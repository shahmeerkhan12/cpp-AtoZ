/*Author : Shahmir khan
Demostration of the Do-while Loop
Program : Divisiblity test by 3 and 9*/
#include <iostream>
using namespace std;
int main()
{
   int num, temp, sum = 0;
   cout << "Enter a positve integer: " << endl;
   cin >> num;
   temp = num;
   // do while loop demonstration
   do
   {
      sum = sum + num % 10; // Extracts the last digit and add it to the sum
      num = num / 10;       // Removes the last digit from the num
   } while (num > 0);

   cout << "The sum of the number is: " << sum;
   cout << endl;
   if (sum % 3 == 0)
      cout << "The number is divisible by 3" << endl;
   cout << "The number is not divisible by 3" << endl;
   if (sum % 9 == 0)
      cout << "The number is divisble by 9" << endl;
   cout << "The number is not divisible by 9" << endl;
   return 0;
}