#include <iostream>
using namespace std;
int main()
{

   char ch2;
   cout << "enter values for ch2: ";
   // this statement will print the character coming after the range specified by the integer value:
   cin.ignore(2, 'a');
   cin >> ch2;
  
   cout << "ch2 is: " << ch2<<endl;
} 