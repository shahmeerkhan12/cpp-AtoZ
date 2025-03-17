#include <iostream>
#include <string>
using namespace std;
int main()
{
   string strVar = "a";

   while (strVar.empty())
   {
      string str1 = "SSSS1";
      cout << str1 << endl;
      // Another string operation
      // we will take input from user and store it in str2, by using getline function
      string str2;
      getline(cin, str2);
      cout << str2 << endl;
      // test 2
      cout << "str2.at(1), returns character at index 1 in the str2" << endl;
      cout << str2.at(1) << endl;
      // a string can hold characters upto,
      cout << string::npos<< " is the maximum value string can hold";

      string str3 = "AAAAA";
      cout << "\nstr3 before append operation: " << str3;
      str3.append(3, 'b');
      cout << "\nstr3 after append operation: " << str3;
      // append str1 at the end of str3
      cout << "Appends str1 at the end of str3" << endl;
      str3.append(str1);
      cout << " \n " << str3;
      // str.length()
      cout<<"\n"<<str3.length();
      // string.insert(pos,n,ch)
      cout<<"\n"<< str3.insert(3,6,'n');//inserts 6 copies after 3rd postion in str3
   } // end while

   return 0;
} // end main