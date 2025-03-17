// Algorithm insertion //
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   // declaring variables
   int n = 5, p, item = 9;
   int counter = n;
   // to use size() function declare and initialize array in the following way
   array<int, 8> arr{4, 5, 6, 7, 8};
   // length before insertion
   cout << "length before insertion: " << n << endl;
   // showing the array before insertion
   cout<<"\n array before insertion is: ";
   for (auto i : arr)
   {
      cout << i << " ";
   }
   if (counter == arr.size())
   {
      cout << "\n the item cannot be inserted: overflow " << endl;
   }
   else
   { 
      arr[counter] = item;
      //counter +=1 ;
   }
  
   cout << "\narray after insertion is: ";
   for (auto i : arr)
   {
      cout << i << " ";
   }
   // increment the length of array
   n += 1;
   return 0;
}