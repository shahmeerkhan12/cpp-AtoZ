// testing constructor call Hierarchy
// derived class constructor definition
// further included the function overriding
// can calculate the volume and area of a rectangle
#include <iostream>
using namespace std;
class rectangletype
{
   double length, width;
   double area;

public:
   // constructor
   rectangletype(int l, int w)
   {
      if (l > 0)
      {
         length = l;
      }
      else
         length = 0;

      if (w > 0)
      {
         width = w;
      }
      else
         width = 0;
   }

   void displayArea()
   {
      area = length * width;
      cout << "Rectangle with length and width " << length << ", " << width << " have";
      cout << " area : ";
      cout << area << "\n";
   }
   // function to return the area of the recatangle
   int getArea()
   {
      return length * width;
   }
};

// derived class definition
class boxtype : public rectangletype
{

   // let this class have an extra varible called height used for some calculations
   // and the it is in the public section
   int height;
   // constructor to initialize the variable height
   // constructor with parameters
public:
// NOTE : In the header of the constructor boxtype we invoked the constructor of the base class
// First the constructor of the base class will be executed and then the derived class....
   boxtype(int l, int w, int h) : rectangletype(l, w)
   {
      if (h >= 0)
      {
         height = h;
      }  
      else
      {
         h = 0;
      }
   }
   // overriding the display function of the base class so that it can
   //  calculate the volume of the a box
   void displayVolume()
   {
      cout << "the volume of the box is: " << getArea() * height;
   }
};

int main()
{
   boxtype B1(7, 8, 9); // for volume calculation
   B1.displayVolume();  // it works fine
   cout << endl;
   boxtype CalculateArea(7, 8, 9); // for area calculation
   CalculateArea.displayArea();

   //what if there is a function let's say: print, in the base class and it was overrided by the derived class
   // then how can i make a call to the base class

   // int area=CalculateArea.rectangletype::getArea(); 
   // cout<<"base class Area function "<<area;
}
