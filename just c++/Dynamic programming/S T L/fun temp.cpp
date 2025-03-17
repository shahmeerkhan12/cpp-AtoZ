#include <iostream>
using namespace std;
template <class type>
type larager(type x, type y)
{
   if (x > y)
      return x;
   return y;
}
int main()
{

   cout << "\nThe larger of the x and y is: " << larager('a', 'b') << endl
        << "because x stores the value of a which "
        << "is " << static_cast<int>('a') << " and y "
        << "stores the value of b which is: " << static_cast<int>('b') << endl;
   return 0;
}