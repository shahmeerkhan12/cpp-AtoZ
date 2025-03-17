#include <iostream>
using namespace std;
void SelectionSort(int list[], int len);
int main()
{
   int list[8] = {12, 32, 2, 7, 82, 76, 45, 32};
   int len = 8;
   cout << "\nThe Array before the selection sort is: ";
   for (int i : list)
      cout << i << " ";
   SelectionSort(list, len);
   cout << "\nAfter sorting the list elements are: ";
   for (int i = 0; i < len - 1; i++)
   {
      cout << list[i] << " ";
   }

   return 0;
}
void SelectionSort(int list[], int length)
{
   int index, smallestIndex, location, temp;
   for (index = 0; index < length; index++)
   {
      smallestIndex = index;
      for (location = index + 1; location < length; location++)
      {
         // step a
         if (list[location] < list[smallestIndex])
         {
            smallestIndex = location;
         }
         // step b
         temp = list[smallestIndex];        // stores the element list[1] in temp
         list[smallestIndex] = list[index]; // stores the element list[0] at list[1]
         list[index] = temp;                // stores the element at list[1] in list[0]
      }
   }
}
