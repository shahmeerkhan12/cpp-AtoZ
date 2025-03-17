#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int firstUniqChar(string s)
{  
   int size=s.size()-1;
   int index = -1;
   for (int i = 0; i < size - 1; i++)
   {
      int current_index = i;

      int j = i + 1;
      while (j <size - 1)
      {
         if (s[j] != s[current_index] && (j == size- 1))
         {
            index = current_index; 
            break;
         }
      }
   }
   return index;
}
   int main()
   {
      string str = "leetcode";
      int index = firstUniqChar(str);
      cout << index;
   }