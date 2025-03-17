#include <iostream>
using namespace std;
int main()
{
   int dividend, divisor, quotient;
   try
   {
      cout << "enter dividend" << endl;
      cin >> dividend;
      cout << "enter divisor" << endl;
      cin >> divisor;
      if (divisor == 0)
         throw 0;
      quotient = dividend / divisor;
      static cast<float>
      cout << "the quotient is = " << quotient << "\n";
   }
   catch (int)
   {
      cout << "the divisor is zero" << endl;
   }
   return 0;
}