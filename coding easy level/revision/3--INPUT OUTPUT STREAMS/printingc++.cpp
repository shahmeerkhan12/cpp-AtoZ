#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   int number;
   cout << "please enter a number b/w 0 and 10 \n";
   cin >> number;
   // 10 times
   cout << number << number<<number << number << number << number << number << number << number << number << endl;
   //
   cout << number << number  << setw(20) << number << number << setw(17) << number << number << endl;
   cout << number << number  << setw(20) << number << number << setw(17) << number << number << endl;
   //line # 3
   cout << number << number  << setw(13)<<number<<number << number << number
   <<number<<number << number << number<<number<<number << number << number<<number<<number << number << number<<setw(3)
   << number<<number << number << number <<number<<number << number<<number<<number << number << number<<number<<number 
   << number << number << number << endl;
   //change above change result
   cout << number << number  << setw(20) << number << number << setw(17) << number << number << endl;
   cout << number << number  << setw(20) << number << number << setw(17) << number << number << endl;
   //
   cout <<number<< number << number  << number << number << number << number << number << number << number << endl;
}