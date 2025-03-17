#include<iostream>
#include<cassert>
using namespace std;
int main(){
   //section 1
   /*char alp;
   int a;
   cin>>alp;
   cin>>a;
   cout<<alp<<endl;
   cout<<a;*/

   //section 2
   /* int dividend, divisor, quotient;
   cout<<"enter dividend and then divisor. please put a space between the two. "<<endl;
   cin>>dividend;
   cin>>divisor;
   quotient=dividend/divisor;
   cout<<"quotient is "<<quotient;*/

   //section 3
   int dividend, divisor, quotient;
   cout<<"enter dividend and then divisor. please put a space between the two. "<<endl;
   cin>>dividend;
   cin>>divisor;
   assert(divisor!=0);
   quotient=dividend/divisor;
   cout<<"quotient is "<<quotient;

}