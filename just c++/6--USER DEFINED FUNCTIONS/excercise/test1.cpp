#include <iostream>
#include <cmath>
using namespace std;
int main()
{cout<<" The values are: "
"<<\nstatic_cast<char>(toupper('$')) = " <<static_cast<char>(toupper('$'))<<endl
 <<"static_cast<char>(toupper(33))= "<<static_cast<char>(33)<<endl
 <<"static_cast<char>(toupper('#'))= "<<static_cast<char>(toupper('#'))<<endl
  <<"static_cast<int>(toupper('3'))= "<<static_cast<int>(toupper('3'))<<endl
 <<"static_cast<char>(toupper('d'))= "<<static_cast<char>(toupper('d'))<<endl;
 // test 2
 cout<<"abs(12) = "<<abs(12)<<endl;
 cout<<"abs(-12) = "<<abs(-12)<<endl;//reuturns the absolute value
 cout<<"pow(4.0,2.5)= "<<pow(4.0,2.5)<<endl;//calculates power
 cout<<"fabs(24.45)= "<<fabs(24.45)<<endl;
 cout<<"fabs(12)= "<<fabs(12)<<endl;  
 cout<<"floor(36.27)= "<<floor(36.27)<<endl;//returns the floor value of double expression
 cout<<"ceil(18.3)= "<<ceil(18.3);//returns the highest possible value 
 return 0; 

}