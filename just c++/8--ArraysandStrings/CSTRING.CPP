#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
   // char name[30];
   // cout<<"Enter your name ";
   // cin.get(name,30);//will store the number of characters specified by the number
   // cout<<name;       // 30 into the string, it stops reading at the newline character
   
   // demonstrating an example in which two lines of input should be stored in str1 and str2
   // with the help of another string which is discard
   char str1[26];
   char str2[26];
   char discard;
   // suppose the input
   /*
   summer is warm.
   winter will be cold.
   */
  cout<<"\nplease input the two strings for str1 and str2"<<endl;
  cin.get(str1,26);
  cin.get(discard);
  cin.get(str2,26);
  // now to output the strings to know what they store 
   cout<<"string 1 is: "<<str1<<endl<<"string 2 is: "<<str2<<endl;
   return 0;
}