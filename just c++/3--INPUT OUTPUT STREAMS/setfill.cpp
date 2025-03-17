#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   int x = 15;
   int y = 73;
   cout << "12345678901234567890" << endl;
   cout << "without setfill \n";
   cout << setw(5) << x << setw(5) << y << setw(5) << "hi" << endl;
   // now we are using the setfill function
   cout << "with setfill \n";
   cout << setw(5) << setfill('$') << x << endl;
   cout << setw(5) << setfill('#') << x << endl;
   cout << "\n"
        << left << setw(5) << x << "line testing this"
        << " left justified " << endl;
   cout
       << "\n"
       << right << setw(5) << x << "line testing right justified" << endl;
   cout << setw(5) << x << setw(5) << y << setw(5) << "hi" << endl;
   return 0;
}