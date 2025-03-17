#include <iostream>
using namespace std;
int main()
{
   cout << "program to add odd and even numbers seprately:" << endl;
   int num;
   int even_sum = 0;
   int odd_sum = 0;
   cout << "please enter an integer type value to find its sum: ";
   cin >> num;
   while (num)
   {
      if (num % 2 == 0)
         even_sum += num;
         else
      odd_sum += num;
      cout<<"\nif you want to exit the program then input Q or q: ";
      if (num=='q' || num== 'Q')
         break;
      cout << "\nplease enter another number to find its sum: ";
      cin >> num;
   }
   // display even_sum and odd_sum
   cout << "even_sum = " << even_sum << endl;
   cout << "odd_sum = " << odd_sum << endl;
   return 0;
}