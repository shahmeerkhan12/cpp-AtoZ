#include <iostream>
using namespace std;
int main()
{
   int num, sum=0, temp;// in this case we didn't used the temp variable because
   // taken the num and displayed before any change
   cout << " Please enter a digit:";
   cin >> num;
   cout << "\nThe number is: " << num << endl;
   cout << "\n The sum of the indvidual digits of the number " << num << " is; ";
   if (num > 0)
   {
      do
      {
         sum = sum + num % 10;
         num = num / 10;

      } while (num != 0);
   }
   cout<<sum;
  cout<<endl;
   long i=28;
   cout<<i%2<<endl;
   cout<<i/2<<endl;
   
}