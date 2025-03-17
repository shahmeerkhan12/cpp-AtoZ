#include <iostream>
#include <array>
using namespace std;
int main()
{
   /*
   int n;
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
   cout << "the array is: ";
   for (auto i : arr)
   {
      cout << i << " ";
      n++;
   }
   cout << "\n the length of array is: " << n;
   */

 
   array<int,5> arr{ 1, 2, 3, 4, 5 };
   //Using the size() function from STL
   cout<<"\nThe length of the given Array is: "<<arr.size();
   return 0;
}
  