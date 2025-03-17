//segmentation fault was encoutered while concatenating the buckets

#include <iostream>
#include <cmath>
using namespace std;//segmentation fault

const int Max = 13;

void bucketSort(float arr[], int n)
{

   // create buckets and initialize to zero
   float buckets[Max][Max] = {0}; // its just a 2D array where each bucket could store
                                  //  upto 10 elements at first index like [0][1], [0][2], [0][3], etc

   // put the original array elements into buckets
   for (int i = 0; i < n; ++i)
   {
      int bucket_index = n * arr[i];
      buckets[bucket_index][i] = arr[i];
   }

   // sort the buckets
   for (size_t i = 0; i < n; i++)
   {
      int bucket_size = 0;
      for (size_t j = 0; j < Max; j++)
      {
         if (buckets[i][j] != 0)
         {
            bucket_size++;
         } // end if

      } // end inner for-loop

      //sorting each bucket by insertion sorts
      for (size_t j = 0; j < bucket_size; j++)
      {
         float key = buckets[i][j];
         int k = j - 1;
         while (k >= 0 && buckets[i][k] > key)
         {
            buckets[i][k + 1] = buckets[i][k];
            k--;
         }
         buckets[i][k + 1] = key;
      }

   } // end Ext for_loop

   // concantenate all buckets into array
   int index = 0;
   for (size_t i = 0; i < n; i++)
   {
      for (size_t j = 0; j < Max; j++)
      {
         if (buckets[i][j] != 0)
         {
            arr[index] = buckets[i][j];
            index++;
         }

      } // end inner loop

   } // end outer looop

} // end bucketsort

int main()
{
   // array to be sorted
   float a[] = {0.31, 0.4, 0.2, 0.1, 0.9, 0.6, 0.5, 0.7, 0.8, 0.32,0.78,0.43,0.56};

   int n = sizeof(a) / sizeof(a[0]);

   // array before bucket sort
   cout << "Original Array: " << endl;
   for (int i = 0; i < n; i++)
   {
      cout << a[i] << " ";
   }
   cout << endl;
   bucketSort(a, n);
   // displaying the sorted array
   cout << "Displaying the sorted array:" << endl;
   for (int i = 0; i < n; i++)
   {
      cout << "a[" << i << "] = " << a[i] << endl;
   }
   return 0;
}