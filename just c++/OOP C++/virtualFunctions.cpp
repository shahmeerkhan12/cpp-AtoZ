#include<iostream>
using namespace std;
class A
{
   int a;
   public:
   A()
   {
      a=1;
   }
    void show()
   {
      cout<<"a = "<<a;
   }
};
class B:public A
{
   int b;
   public:
   B()
   {
      b=2;
   }
   virtual void show()
   {
      cout<<"b = "<<b;
   }
};
int main()
{
   A *pA;
   B b;
   pA=&b;
   pA->show();
}