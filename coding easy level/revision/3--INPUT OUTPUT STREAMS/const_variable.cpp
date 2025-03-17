#include <iostream>
#include <string>
using namespace std;
int main()
{
   // A const variable named as pi is assigned 3.14
   // but i have written data type as "integer" while declaring
   // and i want that it should display the whole value 3.14
   // so i am using a 'cast operator' get the whole value.
   /* const int pi = static_cast<float>(3.14f);
    cout << "pi is = " << static_cast<float>(3.14) << endl;
    const int SPD_LIGHT = 300000000;
    cout << "speed of light is = " << SPD_LIGHT << "(meter/second)" << endl;
    int a = 10;
    // previous value is overwritten:
    a = 20;
    cout << "a is = " << a << endl;*/

   // practicing string opearations
   string first;
   string last;
   cout << "Please enter string values for the first name, last name separated by spaces respectively\n";
   cin >> first >> last;
   cout << "\n"
        << "your name is :";
        cout<< first<<" "<< last;
}