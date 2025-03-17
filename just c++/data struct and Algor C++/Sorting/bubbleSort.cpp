//bubble sort Algorithm
#include <iostream>
using namespace std;
int main()
{
   int i, j, pass, temp = 0;
   int a[10] = {12, 21, 34, 2, 3, 4, 5, 3, 45, 56};
   cout << "The unsorted list: ";
   for (int i = 0; i < 10; i++)
   {
      cout << a[i] << " ";
   }
   cout << endl;
   cout << "Performing the bubble sort Algorithm ono the given Array:" << endl;
   for (int i = 0; i < 10; i++)
   {
      for (int j = i + 1; j < 10; j++)
      {
         if (a[j] < a[i])
         {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;

         } // end if

      } // end inner forloop

      pass++;
   } // end outer forloop
   cout << "The sorted list is: ";
   for (int i = 0; i < 10; i++)
   {
      cout << a[i] << " ";
   }
   cout << "\nNumber of passes performed while swapping are " << pass << endl;
   return 0;
} // end main