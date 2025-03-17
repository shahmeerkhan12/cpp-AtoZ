#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   string str = "hello";
   string st = "guys";
   cout << str << setw(6) << st << endl;
   cout << str << setw(7) << st << endl;
   cout << str << setw(8) << st << endl;
   cout << str << setw(9) << st << endl;
   // I can print stars using the setw() function: as follows
   char ch;
   cout << "enter any character";
   cin >> ch;
   cout << setw(10) << ch << endl;
   cout << setw(9) << ch << " " << ch << endl;
   cout << setw(8) << ch << " " << ch << " " << ch << endl;
   cout << setw(7) << ch << " " << ch << " " << ch << " " << ch << endl;
   cout << setw(6) << ch << " " << ch << " " << ch << " " << ch << " " << ch << endl;
}