#include<iostream>
using namespace std;
class base
{
 public:
     virtual void fun()
   {
    cout<<"\n\n\nbase class function called:\n";
   }
};
   class der1
   {
      public:
      virtual void fun()
      {
       cout<<"\n\n\nder 1 class function called:\n";
      }
   };
   class der2
   {
      public:
      void fun()
      {
       cout<<"\n\n\nder 2 class function called:\n";
      }
   };
   int main()
   {  
      base b;
      base *p;
      p=&b;
      p->fun(); //calling first function
      der1 d1;//der1 object
      der2 d2;//der2 object
      //calling der2 object
     return 0;
   }