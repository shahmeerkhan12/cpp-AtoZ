#include <iostream>
using namespace std;
class circle
{
   // private:
   int length;
   int width;

public:
   double radius; // if the member data was private then accessing this radius was not
                  // outside the class:
                  // defining a data type proteted can only be accessed in the derived classes
   double compute_area()
   {
      return 3.14 * radius;
   }

   // this function will use the private members length and width
   // then i will override it in the derived class and see how to call the base
   // function and the derived class function

   void printValues()
   {
      cout<<endl;
      cout << "Width: " << width << endl
           << "Length: " << length << endl;
      
   }

   circle(){
      length=0;
      width=0;
   }

   circle(int l, int w)
   {
      length = l;
      width = w;
   }

protected:
   double Rad;
   double pi;

   double circumference()
   {
      return 2 * pi * radius;
   }
};

class circum : public circle
{

   int Height;

public:
   circum()
   {
      Height=0;
      Rad=0;
      pi=0;
   };
   circum(int h,int r, int p){
      Height=h;
      Rad=r;
      pi=p;
   };
   double path_of_circle()
   {
      return 2 * pi * Rad;
   }

   // overrding the the base class function printValues
   // by including the only derived class variable Height

   void printValues()

   {
      cout<<endl;
      cout << "call to derived class overridden function" << endl;
      // cout<<"width: "<<width<<endl  //look at these variable they are not accessible
      //<<"length: "<<length<<endl    //but the next we gonna do is call the base class function
      // printValues to print the width and length values
      circle::printValues();
      cout << "Height: " << Height << endl;
   }
};
int main()
{
   circle obj1(3, 5);
   // Accessing the public member data outside of the class \/\/
   obj1.radius = 2.2;
   cout << "The radius is: " << obj1.radius;
   cout << "\nThe Area of the circle is: " << obj1.compute_area();
   // object of the class circum which is publicallly derived from the
   // circle class
   circum obj2(4,2,3);
   obj2.path_of_circle();
   cout << "\nThe circumferece of the circle is: " << obj2.path_of_circle();

   // demonstration of call to overriden and overloaded function
   // how to call the base class function
   // and how to call the derived class function that is overriden
   obj2.circle::printValues(); // call to base class function
   obj2.printValues();         // call to derived class function
   return 0;
}