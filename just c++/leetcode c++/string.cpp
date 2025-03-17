#include <iostream>
using namespace std;
int main()
{
   string ss = "hello! how are you?";
   cout << "string message is: " << ss;
   cout << "\n " << ss.length();
   // next section
   char ch1, ch2;
   int num;
   cout << "\n enter values for ch1 ch2 and num: \n";
   cin.get(ch1);
   cin.get(ch2);
    // stores the white space as well due to the __get__ function: alongwith the 'cin' .......
   cin >> num;
   cout << "\n ch1 is " << ch1
        << "\n ch2 is " << ch2
        << "\n num is " << num;
}       