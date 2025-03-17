#include <iostream>
using namespace std;
int main()
{
   int x=23, y=2, max;
   max = (x > y) ? x : y;
   cout << "max num between " << x << " and " << y << " is " << max;
   return 0;
}