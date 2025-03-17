#include <iostream>
#define NDEBUG
#include <cassert>
using namespace std;
int main()
{
   int num=486;
   int denumenator=10;
   double quotient;
   //cout << "Enter  num, denumenator" << endl;
   //cin >> num, denumenator;
   assert(denumenator);
   quotient = num / denumenator;
   cout << "the quotient is:" <<quotient;
   return 0;
}
