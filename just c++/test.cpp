#include <iostream>
#include <cctype>
using namespace std;
int main()
{
   int smallest = 1;
   int count = 5;
   for (int i = 0; i < count; i++)
      if (i < smallest)
         cout << "Printing " << i << endl;

   return 0;
}