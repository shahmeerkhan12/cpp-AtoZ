#include <iostream>
using namespace std;
void insertionSort(int A[])
{
   int count = 4; //length of arr
   int j = 0; // help previous element iteration
   int key;
   for (int i = 1; i < count; i++)
   {
      key = A[i];
      j = i - 1;
      while (j >= 0 && A[j] > key)
      {
         A[j + 1] = A[j];
         j = j - 1;
      }
      A[j+1] = key;
   }
}
int main()
{
   int Arr[4] = {4, 3, 2, 1};
   insertionSort(Arr);
   for (int i=0;i<4;i++)
   {
      cout << Arr[i] << " ";
   }

   return 0;
}