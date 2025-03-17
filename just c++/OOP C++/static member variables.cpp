#include<iostream>
using namespace std;
class a
{
   private:
   static int id;    // we cannot initalize the static member variables drectly with in
   int i;            // the class  
   public:
   a()
   {
      i=++id;
      cout<<"constructor called"<<i<<"times \n";  
   }
};
int a::id=0;  // initializing the static member variables outside the class 
int main()    // AS c++ iso forbids us to initalize the static member variables
{           // with in the class
   a a1;
   a a2;
   a a3;
}