#include <iostream>
#include<string>
#include <iomanip>
using namespace std;

int main()
{
   int count;
   string str="123456789";
   for(auto count: str)
   {
      cout<< count << " ";
      if (count )
      {
         /* code */
      }
      
      count++;
   }
   return 0;
}