#include <iostream>
#include <climits>
using namespace std;
// void displaySortedArray(int []);
void Merge(int[], int p, int mid, int r);
void mergeSort(int A[], int p, int r);

void Merge(int A[], int p, int mid, int r)
{
   int n1 = mid - p + 1;
   int n2 = r - mid;

   int Left[n1 + 1];
   int Right[n2 + 1];

   for (int i = 0; i < n1; i++)
   {
      Left[i] = A[p + i];
   }
   for (int j = 0; j < n2; j++)
   {
      Right[j] = A[mid + 1 + j];
   }

   Left[n1] = INT_MAX; // C++ HEADER FILE "CLIMITS" POSITVE INIFINITE INTEGER VALUES
   Right[n2] = INT_MAX;

   int i = 0;
   int j = 0;

   for (int k = p; k <= r; k++)
   {
      if (Left[i] <= Right[j])
      {
         A[k] = Left[i];
         i++;
      }
      else
      {
         A[k] = Right[j];
         j++;
      }
   }
}
// Display the sorted array here
//  displaySortedArray(A) ;
//
// void displaySortedArray(int A[])
// {
//    for (int i = 0; i <= 10; i++)
//    {
//       cout << A[i] << " ";
//    }
//    cout << endl;
// }

void mergeSort(int A[], int p, int r)
{
   if (p < r)
   {
      int mid = p + (r - p) / 2;
      mergeSort(A, p, mid);
      mergeSort(A, mid + 1, r);
      Merge(A, p, mid, r);
   }
}

int main()
{
   int UnsortedArray[10];
   cout << "Please enter an array of 10 elements to be sorted: " << endl;
   for (int i = 0; i < 10; i++)
   {
      cin >> UnsortedArray[i];
   }

   cout << "Your Array: ";
   for (int i = 0; i < 10; i++)
   {
      cout << UnsortedArray[i] << " ";
   }
   cout << endl;

   int size = 10;
   int FirstPointer = 0;
   int lastPointer = size - 1;

   cout << "Here we go, the array is sorted: " << endl;
   mergeSort(UnsortedArray, FirstPointer, lastPointer);
   for (int i = 0; i < 10; i++)
   {
      cout << UnsortedArray[i] << " ";
   }

   return 0;
}
