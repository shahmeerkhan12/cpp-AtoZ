#include<iostream>
using namespace std;
int main(){
   int x=10;
   int *p;
   p=&x;
   cout<<"effect of statement: $p  "<<&p<<endl;
   cout<<"effect of statement: p  "<<p<<endl;
   cout<<"effect of statement: *p  "<<*p<<endl;
   return 0;
}