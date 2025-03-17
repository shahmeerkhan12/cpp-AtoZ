#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   auto sum =0;
   auto avg=0;
   int list[10];
   cout << "\nPlease enter your test scores" << endl;
   for (int i = 0; i < 10; i++)
   {
      cin >> list[i];
   }
   cout << "The score each paper is: ";
    for (int x : list)
   { 
      cout << x << " ";
      sum = sum +x;
   }
   cout<<"\nThe total score you made is: "<<sum;
   avg = sum/10;
   cout<<"\nThe Average obtained is: "<<avg<<"%";
   return 0;
}