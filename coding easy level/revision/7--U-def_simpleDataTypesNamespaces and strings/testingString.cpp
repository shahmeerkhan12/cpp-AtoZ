#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()
{
   string str1;
str1="RashFord";                                                 //line 2
   cout << "Line 2: Size of \"" << str1 << "\" = "
<< static_cast<unsigned int> (str1.size())                         // to know the size
<< endl; 
   return 0;
}
