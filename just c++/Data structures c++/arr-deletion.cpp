#include <iostream>
#include <array>
using namespace std;
int main()
{
   int N = 9, P = 3, item, i = P;
   int arr[9] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
   cout << "\n array before deletion is: ";
   for (auto i : arr)
   {
      cout << i << " ";
   }
   // step 1
   item = arr[P];
   // step2
   while (i <= N - 1)
   {
      arr[i] = arr[i + 1];
      i++;
   }
   // step 3
   N -= 1;
   cout << "\n array after deletion from an index P: ";
   for (auto i : arr)
   {
      cout << i << " ";
   }
   return 0;
}