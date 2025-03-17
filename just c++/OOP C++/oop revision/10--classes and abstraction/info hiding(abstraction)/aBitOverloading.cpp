#include <iostream>
#include <string>
using namespace std;
class bagtype
{
private:
   string style;
   double heightofbag;
   /* data */
public:
   bagtype(string colour, double height);
   ~bagtype();
   // function to overload
   bagtype assign(bagtype &temp)
   {
      style = temp.style;
      heightofbag = temp.heightofbag;
   }
};

bagtype::bagtype(string colour, double height)
{
   style = colour;
   heightofbag = height;
}

bagtype::~bagtype()
{
}
int main()
{
   bagtype tempbag("black", 3.4);
   bagtype newbag(tempbag);
   newbag.assign(tempbag); // a bit overloading(passing the values of one object to another)
   // throgh the use of function"assign"
}