// A program to perform insertion and traversing on an array:
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   char allGrades[8] = {'a', 'b', 'c', 'a', 'b', 'c', 'a', 'b'};
   int a_total = 0;
   int count = 8;
   cout<<"The array elements are: ";
   for (int i = 0; i <= count; i++)
   {
      cout << setw(5) << allGrades[i] ;
      if (allGrades[i] == 'a')
         a_total = a_total + 1;
   }
   cout << "\nthe character a is present: " << a_total << " times in the charater Array";
   return 0;
}