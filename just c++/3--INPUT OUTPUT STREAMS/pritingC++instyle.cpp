#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   char ch;
   cout << "Enter any character" << endl;
   cin >> ch;
   cout << "\n\n";
   cout << "         " << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << endl;
   cout << "         " << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << endl;
   cout << "         " << ch << ch << setw(29) << ch << ch << setw(34) << ch << ch << endl;
   cout << "         "  << ch << ch << setw(29) << ch << ch << setw(34) << ch << ch << endl;
   cout << "         " << ch << ch << setw(29) << ch << ch << setw(34) << ch << ch << endl;
   cout << "         " << ch << ch << setw(20) << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << setw(15)
        << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << endl;
   cout << "         " << ch << ch << setw(20) << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << setw(15)
        << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << endl;
   cout << "         " << ch << ch << setw(29) << ch << ch << setw(34) << ch << ch << endl;
   cout << "         " << ch << ch << setw(29) << ch << ch << setw(34) << ch << ch << endl;
   cout << "         " << ch << ch << setw(29) << ch << ch << setw(34) << ch << ch << endl;
   cout << "         " << ch << ch << setw(29) << ch << ch << setw(34) << ch << ch << endl;
   cout << "         " << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << endl;
   cout << "         " << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << endl;

   return 0;
}