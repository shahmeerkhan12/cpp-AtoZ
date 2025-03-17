#include <iostream>
using namespace std;
int main()
{
   int IniArray[50];
   int size = sizeof(IniArray) / sizeof(*IniArray);
   cout << "the size of array is: " << size << endl;
   for (int i = 0; i < size; i++)
   {
      if (i < 25)
      {
         IniArray[i] = i * i; /* code */
      }
      else
         IniArray[i] = i * i * i;
   }
   for (int i = 0; i < size; i++)
   {
      if (i % 10 == 0)
      {
         cout << endl;
      }
      //    cout << IniArray[i] << ", ";
      //    /* code */
      // }
      // if (i % 10 != 0)
      // {
      //    cout << IniArray[i] << ", ";
      //    /* code */
      // }
      cout << IniArray[i] << ", ";//second way to do that
   }
   

   return 0;
}