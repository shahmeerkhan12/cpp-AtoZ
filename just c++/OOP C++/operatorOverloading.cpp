#include <iostream>
using namespace std; 
class Addition
{
private:
   int length, width;

public:
   Addition()
   {
      length = width = 0;
   }
   void inputbox()
   {
      cout << "enter value of length: ";
      cin >> length;
      cout << "enter value of width: ";
      cin >> width;
   }
   void show()
   {
      cout << "Length =" << length << endl;
      cout << "Width =" << width << endl;
   }
   Addition operator+(Addition t)
   {
      t.length = length + t.length;
      t.width = width + t.width;
      return t;
   }
};
int main()
{
   Addition obj1;
   Addition obj2;
   Addition obj3;
   obj1.inputbox();
   obj2.inputbox();
   obj3 = obj1 + obj2;
   obj1.show();
   obj2.show();
   cout << "\nAfter adding the contents of objects the values are: " << endl;
   obj3.show();
  
   return 0;
}
