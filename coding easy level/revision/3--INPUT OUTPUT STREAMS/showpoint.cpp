#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   double x = 40.0000;
   double y = 9.07465;
   // show point and fixed decimal format test
   cout << showpoint;
   cout << "showpoint";
   cout << "\nx = " << x;
   cout << "\n y = " << y;
   cout << scientific;
   cout << "\n scientific";
   cout << "\n x = " << x;
   cout << "\n y = " << y;
   // fixed
   cout << fixed;
   cout << "\nfixed";
   cout << "\n x = " << x;
   cout << "\n y = " << y;
   // fixed showpoint together
   cout << fixed << showpoint;
   cout <<"\n fixed and showpoint";
   cout << "\n x = " << x;
   cout << "\n y = " << y;

   return 0;
}