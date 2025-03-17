#include<iostream>
using namespace std;
class Base          //Abstract base class
{
 public:
 virtual void show() = 0;     //Pure Virtual Function
};
class Derived:public Base
{
 public:
 void show()
 { cout << "Implementation of Virtual Function in Derived class"; }
};
int main()
{// just to understand
   Base b;   //Compile Time Error
 Base *b;
 Derived d;
 b = &d;
 b->show();
}
