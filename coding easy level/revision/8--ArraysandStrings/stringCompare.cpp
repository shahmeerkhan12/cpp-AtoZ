#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
   char list1[] = {"The patient was died before the doctor came"};
   char list2[] = {"Near the church farther from God"};
   if (strcmp(list1, list2)) // the condition checks for whether list one is greater than two
   // the if statement body executes because the condition returns 1 in this case
   {
      cout << "true" << endl;
      cout << (strcmp(list1, list2));
   }
   int var = 0;
   if (var) // the condition is false because zero means false
   {
      cout << "\n TEST";
   }

   return 0;
}