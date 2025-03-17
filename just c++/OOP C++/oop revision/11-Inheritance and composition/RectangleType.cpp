#include<iostream>
using namespace std;
class RectangleType{
   public:
   void setDimension(double l, double w);
   double getLength();
   double getwidth();
   double area();
   double perimeter();
   void print();
   RectangleType();
   RectangleType(double l, double w);
   
   private:
         double length, width;
};

  void RectangleType::setDimension(double l, double w){
   
   length=(l>=0)?length=l:length=0;
   // if (w>=0)
   //    width=w;

   // width=0;
    width=(w>=0)?width=w:width=0;
   }
   double RectangleType::getLength(){
      return length;
   }
   double RectangleType::getwidth(){
      return width;
   }
   double RectangleType::area(){
      return length*width;
   }
   double RectangleType::perimeter(){
      return 2* ( length + width);
   }
   void RectangleType::print(){
      cout<<"Length is: "<<length
      <<", and Width is: "<<width<<endl;
   }
   //defining constructors
   RectangleType::RectangleType(double l, double w)
   {
      setDimension(l,w);
   }
   RectangleType::RectangleType(){
      length=0;
      width=0;
   }

   //class boxType

   class boxType : public RectangleType {

      int height;

      public:

   void setDimension(int l, int w, int h);
   int getHeight() const;
   void print(); 
   
   };

   void boxType::setDimension(int l, int w, int h) {

      RectangleType::setDimension(l,w);

      height=(h>=0)?height=h:height=0; // if_else using ternary statements
   }

   int boxType::getHeight() const {

      return height;

   }

   void boxType::print() {

      RectangleType::print();

      cout<<", Height = "<<height;
   }

//main function
int main(int argc, char const *argv[])
{
   
   RectangleType Small(12.0,3.5);
   Small.print();
   int areaofrecatgle= Small.area();
   cout<<"Area of the Rectangle is: "<<areaofrecatgle<<endl;
   int perimeterofRectangle=Small.perimeter();
   cout<<"Perimeter of Rectangle is: "<<perimeterofRectangle;
   return 0;
}
