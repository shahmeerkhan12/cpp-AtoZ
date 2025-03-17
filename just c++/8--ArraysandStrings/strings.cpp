#include <iostream>
#include <string>
using namespace std;
int main()
{
   string str = "bbb";
   string str2 = "aaa";
   //compare funtion returns
   // <0 when the str is ordered before the str2
   // 0 when both the str and str2 are equivalent
   // >0 when the str is ordered after the str2 as in below case
   cout << str.compare(str2) << endl;

   
   if(str.compare(str2)){

      cout << "Same" << endl;
      
   }
}