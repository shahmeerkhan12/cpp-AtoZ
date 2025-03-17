#include <iostream>
using namespace std;
int main()
{
   int age;
   int legalAge;
   legalAge = 20;
   age = 19;
   legalAge = (age <= 20);

   cout << "\nage is = __" << age<<endl;
   cout << "\nlegalAge is = __" << legalAge<<"\n";
}