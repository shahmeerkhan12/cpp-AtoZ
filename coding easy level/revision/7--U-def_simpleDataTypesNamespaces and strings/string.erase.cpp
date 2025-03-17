#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()
{ //works fine
 string str="MIR";
      string mystring ="SHAHMIRKHAN";
   //mystring.erase(3,4);
 cout<<mystring.find(str)<<endl;
 cout<<mystring.find(str,2);
   cout<<endl<<mystring<<endl;
   return 0;
}