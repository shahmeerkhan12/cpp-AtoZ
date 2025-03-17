#include <iostream>
using namespace std;
int main()
{
   int n = 4;
   int m = 4;
   int largest;
   int arr[4][4] = {{1, 1, 1, 1},
                    {4, 5, 5, 2},
                    {4, 6, 6, 2},
                    {3, 3, 3, 2}};
   // we are printing the array in spiral order that is first row, last col, last row, first colom --> so On

   int row_start = 0, row_end = n - 1, col_start = 0, col_end = m - 1;

   
   while (row_start <= row_end && col_start <= col_end)
   {
      // print 1st row
      for (int col = col_start; col <= col_end; col++)
      {
         cout<<arr[row_start][col]<<" ";
      }
      row_start++;

      // Last colum
      for (int row = row_start; row <= row_end; row++)
      {
         cout<<arr[row][col_end]<<" ";
      }
      col_end--;

   //print last row
      for (int col = col_end; col >= row_start; col--)
      {
         cout<<arr[row_end][col]<<" ";  
      }

      row_end--;

   //print first colum
      for(int row=row_end;row >= row_start;row--)
         cout<<arr[row][col_start]<<" ";

      col_start++;

   }//end while
   
}// end main
