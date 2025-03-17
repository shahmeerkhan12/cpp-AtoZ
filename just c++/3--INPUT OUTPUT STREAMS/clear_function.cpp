#include <iostream>
#include <string>
using namespace std;
int main()
{
   string name;
   int age;
   double height;
   cout << "Enter the name, age, and height: ";
   cin >> name >> age >> height;
   cout << "\n name: " << name
        << "\n age: " << age
        << "\n height: " << height << endl;
   cin.clear();
   cin.ignore(200,'\n');
   cout << "Enter the name, age, and height: ";
   cin >> name >> age >> height;
   cout << "\n name: " << name
        << "\n age: " << age
        << "\n height: " << height << endl;
   return 0;
}
