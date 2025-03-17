// program to show inline function
#include <iostream>
using namespace std;
class show
{
private:
   int x, y;

public:
   show(int a, int b) 
   {
      x = a;
      y = b;
   }
   int sum(); // making this function show:
};

inline int show::sum() // definition of the fuction
{
   return x + y;
}
int main()
{
   int a = 20;
   int b = 34;
   show obj1(a,b); //parameterized constructor method 1
   show obj2((2+3),(4+5)); // parameterized constructor method 2
   // calll the sum function (inline function)
   cout << "The sum of x and y is equal to: " << obj1.sum();
   cout << endl;
   cout << "The sum of x and y is equal to: " << obj2.sum();

   return 0;
}