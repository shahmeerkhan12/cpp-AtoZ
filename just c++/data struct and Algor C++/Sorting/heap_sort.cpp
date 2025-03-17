#include <iostream>
#include <string>
using namespace std;

void heapify(int A[], int N, int i)
{

   // let we say that root element is largest
   int largest = i;

   // setting up the left and the right childs
   int l = 2 * i + 1;
   int r = 2 * i + 2;

   if (l < N && A[l] < A[largest])
      largest = l;

   if (r < N && A[r] < A[largest])
      largest = r;

   // if largest is not the root then
   if (largest != i)
   {
      swap(A[i], A[largest]);
      // recursively heapify the affected tree
      heapify(A, N, largest);
   }

} // end heapify

void heap_sort(int A[], int N)
{

   // build heap(rearrange the array)
   for (size_t i = N / 2 - 1; i <= 0; i--)
   {
      heapify(A, N, i);
   }

   // one by one extract an element from heap
   for (int i = N - 1; i > 0; i--)
   {
      swap(A[0], A[i]);
      // heapify the reduced array
      heapify(A, i, 0);
   } // end for
} // end heap_sort

// print array

void printArray(int A[], int N) // in desceding order
{
   for (size_t i = 0; i < N; i++) // check i++ and ++i;
   {
      cout << A[i] << " ";
   }

} // end print

void PrintArr(int A[], int N)
{
   cout << endl;
   for (int i = N - 1; i >= 0; --i)
   {
      cout << A[i] << " ";
   }
}

int main()
{
   int arr[] = {12, 23, 14, 24, 54, 32};
   int N = sizeof(arr) / sizeof(arr[0]);

   // call heap sort
   heap_sort(arr, N);
   cout << endl;
   cout << "Sorted Array Descending order is: ";
   printArray(arr, N);
   cout << endl;
   cout << "Sorted Array Ascending order is: ";
   PrintArr(arr, N);

   return 0;
}