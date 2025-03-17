#include<iostream>
#include<string>
#include<cctype>
using namespace std;
// some global variables
int t=12;
int N=20;
   // user defined namespace "globalType"
namespace globalType
{
   const double Number=3.14;
   int N=10;
   void printResult();
}
int main()
{ // to access the global variable "t" in main then use :: before the variable t
   ::t=10000;
   // to access the variable with in the main of the namespace globalType then
   globalType::N=2000;
   // also remeber if you want to access a constant value with in the namesapce globaltype then
   // you can just print it or can use it in an expression and cannot modify it
   /*for example ## globalType::N=300 ## will show error because it cannot be modified*/
   // testing string data type operation
   string str1= "hello there";
   cout<<str1;
   cout<<"after manipulation"<<endl;
   str1[6]='T';
   cout<<"\n"<<str1;
 // calling the function printResult of the namespace globalType
   std::cout << "I said that "; // this is calling the fun "cout" of the namespace "std"
   globalType::printResult(); // this is calling the fun "printResult" of the namespace "Globaltype"

   return 0; 
}
//to access the printResult function of the namspace globalType
void globalType::printResult()
{
   cout<<"This is awesome"<<endl;
};