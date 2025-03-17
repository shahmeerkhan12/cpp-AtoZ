#include<iostream>
using namespace std;
class DummyClass{
   
   int x,y;
   public:
   DummyClass(int dx, int dy);
   void print(){
      cout<<"x="<<x<<" and y="<<y;
   }
};
DummyClass::DummyClass(int dx, int dy)
{
   x=dx;
   y=dy;
}
int main()
{
   DummyClass d1;// shows error b/c when there is constructor with parameters and the
   //constructor is not included in the class then this declaration of the class is
   //illegal:
   DummyClass d2(4,3);
   d1.print();
   cout<<endl;
   d2.print();
}
