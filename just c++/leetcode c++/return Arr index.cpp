/*program to check whether a given value is present
in the Array, if present display the index*/
#include <iostream>
using namespace std;
int main()
{
   int A[4] = {2, 7, 11, 15};
   int count = 0, max, value = 11;
   max = end(A) - begin(A);
   cout << "\nthe size of array is: " << max << endl;
   while (count <= max - 1)
   {
      if (A[count] == value)
         cout << "the index which have value 11 is: " << count << endl;
      else
         count = count;
      count++;
   }
   return 0;
}