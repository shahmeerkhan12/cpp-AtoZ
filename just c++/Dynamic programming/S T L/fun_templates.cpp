/*Author:...............:shahmir khan
program:...............:function templates usage*/
#include <iostream>
using namespace std;
template <class type>
type larger(type one, type two);
int main()
{
   int x = 10, y = 9;
   cout << "the largest among x and y is: " << larger(x, y) << endl;
   char first='A',last='a';
   cout<<"the largest char among A and a is: "<<larger(first,last)<<endl;
   //casting operator
   cout<<static_cast<int> ('A')<<endl;
   cout<<static_cast<int> ('a')<<endl;
   return 0;
}
template <class type>
type larger(type one, type two)
{
   if (one > two)
      return one;
   return two;
}