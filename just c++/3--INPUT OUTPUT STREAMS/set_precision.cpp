#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ // formating output as fixed decimal format
   cout << fixed;
   // disabling the fixed decimal format, so that the output will be showed exactly as given by the programmer
   cout.unsetf(ios::fixed);
   double d = 9.3438;
   double a = 3.010986, b = 3.14, c = 4.4;
   cout << "\n number d is " << d;
   cout << "\n number a is " << a;
   cout << "\n number b is " << b;
   cout << "\n number c is " << c;
}