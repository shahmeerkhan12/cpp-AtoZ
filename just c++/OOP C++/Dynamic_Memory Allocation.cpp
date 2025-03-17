#include <iostream>
using namespace std;
int main()
{
   int *pt;
   pt = new int(20);                // dynamically allocating the memory to an 'int' type:
   *pt +=20; 
   cout << "the integer is " << *pt; // displaying the value stored in the memory:
   delete pt;
}