#include <iostream>
using namespace std;
int main()
{
   cout << "\n\nplease input a positive integr to find the sum of its indvidual digits:";
   int num;
   cin >> num;
   int temp = num;
   cout << "\n The number you entered is: " << num << endl;
   int i = 0;
   int sum = 0;
   while (num > 0 && (num != -999))
   {
      if (i == 0)
      {
         sum = sum + num % 10;
         num = num / 10;
      }
      else if (i == 1)
      {
         sum = sum - num % 10;
         num = num / 10;
      }
      else if (i == 2)
      {
         sum = sum + num % 10;
         num = num / 10;
      }
      else if (i == 3)
      {
         sum = sum - num % 10;
         num = num / 10;
      }
      else if (i == 4)
      {
         sum = sum + num % 10;
         num = num / 10;
      }
      else if (i == 5)
      {
         sum = sum - num % 10;
         num = num / 10;
      }
      else if (i == 6)
      {
         sum = sum + num % 10;
         num = num / 10;
      }
      else if (i == 7)
      {
         sum = sum - num % 10;
         num = num / 10;
      }
      else if (i == 8)
      {
         sum = sum + num % 10;
         num = num / 10;
      }
     i++;
} // end while
 cout << "The result after addition and substraction opereation on the indvidual digits of number " << temp << " entered is " << sum << endl;
      if (sum % 11 == 0)
      {
         cout << "The number " << temp << " is divisble by 11" << endl;
      }
      else
         cout << "The number " << temp << " is not divisible by 11" << endl;
return 0;
}