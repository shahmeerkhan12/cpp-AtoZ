#include<iostream>
using namespace std;
class demo
{
   int a;
   public:
   void set(int x)
   {
    a=x;
   }
   demo sum(demo obj1,demo obj2)
   {
      demo temp;
      temp.a=obj1.a+obj2;
      return temp;
   }
   void disp()
   {
     cout<<"the value of a = "<<a;  
   }
};
int main()
{
   demo d1;
   demo d2;
   demo d3;
   d1.set(10);
   d2.set(20);
   d3.sum(d1,d2);
   d1.disp();
   d2.disp();
   d3.disp();
}