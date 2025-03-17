//2D array example
// initialization Traversal Searching Printing2D_array etc
#include <iostream>
using namespace std;
int main( )
{
   int n = 4;
   int m = 4;
   int largest;
   int arr[4][4] = { {1, 2, 3, 5},
                          {4, 5, 6, 4},
                          {7, 8, 9, 7},
                          {1, 2, 3, 9} 
                          }; // initialization
  //traversing the array
   for (int row = 0; row < n; row++) // iterating over rows
   {
      for (int col = 0; col < m; col++) // iterating over columns
      {
         cout << arr[row][col] << "  "; // printing the whole array
      }

      cout << endl; // jumping to the next line i.e. printing a single row in a single line
   }

   // Let find the sum of each row in array
   // cout << "\n";
   // for (size_t row = 0; row < n; row++)
   // {
   //    int sum = 0;
   //    for (size_t col = 0; col < m; col++)
   //    {
   //       sum = sum + arr[row][col];
   //    }
   //    cout << "The sum of row " << row++ << " array is: "
   //         << sum;
   //    cout << endl;
   // }//end sum of each row

   // largest element in each row by the following set of code
   // iterate over each row and find the largest element in the row
   // also display it.
   // for (size_t row = 0; row < n; row++)
   // {
   //    largest = arr[row][0];
   //    for (size_t col = 1; col < m; col++)
   //    {
   //       if (arr[row][0] < arr[row][col])
   //       {
   //          largest = arr[row][col];
   //       }
   //    }
   //    cout << "\nThe largest element in row " << row + 1 << " is: " << largest;
   // }

   // search for an element

   cout<<"\n Which element do you want to search: ";
   int element_to_search;
   cin>>element_to_search;

   bool flag = false;
      for (size_t i = 0; i < n; i++)
      {
         for (size_t j = 0; j < m; j++)
         {
            if(arr[i][j]==element_to_search)
            {
               cout<<i<<" "<<j<<endl;
               flag=true;
               break;
            
            }
         }
         if(flag)
         {
            break;
         }
      } // end search for an element
      
      if(flag)
      {
         cout<<"Element Exist";
      }
      else{
                  cout<<"Element donot Exist";
      }
      

}//end main
  

   // similary we can find the largest element of the array

   //  the total sum of the array

   //  the total sum of a single column



// similary we can find the largest element of the 2darray
// void largest(int arr[4][3])
// {
//     int largest_element;
//    for (size_t i = 0; i < 3; i++)
//    {
    
//       for (size_t j = 0; j < 3; j++)
//       {
//          largest_element=[i][j];
//          if (arr[0][j]<arr[i][j])
//          {
//             largest_element = arr[i][j];
//          }
         
//       }
      
//    }