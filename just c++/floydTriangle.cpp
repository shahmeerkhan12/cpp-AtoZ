/*author: Shahmir Khan*/
#include <iostream>
using namespace std;
int main()
{
   int cell, height;
   // Enter the height of triangle
   cout << "Enter the height of triangle" << endl;
   cin >> height;
   // set the cell to 1
   cell = 1;
   // now start printing the floyd triangle
   for (int i = 0; i < height; i++)
   {
      for (int j = 0; j <= i; j++)
      {
         cout << cell<<" ";
         cell++;
      }
      cout << endl;
   }
   return 0;
}