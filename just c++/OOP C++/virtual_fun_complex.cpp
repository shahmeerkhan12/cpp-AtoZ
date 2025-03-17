#include<iostream>
using namespace std;
class base{
public:
virtual void funct(){ // Virtual function.
cout<<"\n\n\nThis is a base class's funct()";
}};
class derived1 : public base{
public:
void funct(){ //overridden virtual function.
cout<<"\n\n\nThis is a derived1 class's funct()";
}};
class derived2 : public base{
public:
void funct(){ //overridden virtual function.
cout<<"\n\n\nThis is a derived2 class's funct()";
}};
int main()
{
base b;
base *p;
derived1 d1;
derived2 d2;
p=&b;
p->funct(); //The above statement decides which class's function is to be invoked.
p=&d1; // Vlaue of the pointer changes.
p->funct(); //The above statement decides which class's function is to be invoked.
p=&d2; // Again vlaue of the pointer changes.
p->funct(); //The above statement decides which class's function is to be invoked.
return 0;
}
