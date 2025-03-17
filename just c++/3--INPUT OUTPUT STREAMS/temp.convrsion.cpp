#include <iostream>
using namespace std;
int main()
{
   int farht;
   double celcius;
   cout << "enter temperature in farenheit  ";
   cin >> farht;
   cout << endl;
   celcius =static_cast<int> (5.0 / 9.0 * (farht - 32.0));
   cout << farht << " degree F = " << celcius << " degree c" << endl;
   return 0;
}