#include<iostream>
#include<cctype>
#include<cmath>
using namespace std;
int main()
{
   int num=-7;
   int num2=99.88;
   cout<<"absolute value of -7 is: "<<abs(num)<<endl;
   cout<<"the floor value of 99.88 is: "<<floor(num2)<<endl;
   cout<<"square root of "<<99.88<<" is "<<sqrt(num2)<<endl;
   char ch='A';
   cout<<"is character "<<ch<<" uppercase "<<isupper(ch)<<endl;
   cout<<"is character "<<ch<<" lowercase "<<islower(ch)<<endl;
   // to turn to its upper case 
   cout<<"the uppecase of a "<<static_cast<char>(toupper('a'))<<endl; 
   return 0;
}