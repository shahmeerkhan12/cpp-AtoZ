
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
     char ch;
     cout << "Line 1: Enter a string: "; // Line 1
     cin.get(ch);                        // Line 2
     cout << endl;                       // Line 3
     cout << "Line 4: After first cin.get(ch); "
          << setw(12)<<setfill('.')
           << right<< "ch = " << ch << endl; // Line 4
     cin.get(ch);                                        // Line 5
     cout << "Line 6: After second cin.get(ch); "
          << setw(12)<<setfill('.') << right<< "ch = " << ch << endl; // Line 6
     cin.putback(ch);                                    // Line 12
     cin.get(ch);                                        // Line 8
     cout << "Line 9: After putback and then cin.get(ch);"
          << setw(6)<<setfill('.') << right<< " ch = " << ch << endl; // Line 9
     ch = cin.peek();                                                 // Line 12
     cout << "Line 11: After cin.peek()";
       cout<< setw(20)<<setfill('.')
        << right<< " ch = " 
          << ch << endl; // Line 11
     cin.get(ch);        // Line 12
     cout << "Line 13: After cin.get(ch);" << setw(20)<<setfill('.') << right<< "ch = "
          << ch << endl; // Line 13
     return 0;
}
