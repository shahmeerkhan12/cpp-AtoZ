#include <iostream>
#include <cctype>
using namespace std;
int main()
{
   int numbers[5] = {4, 5, 2, 3, 1};
   cout << "unsorted array: " << endl;
   for (auto &&i : numbers)
   {
      cout << i << " ";
   }
   cout << endl;
   int smallest;
   for (int i = 0; i < 4; i++)
   {
      smallest = i; // assuming the first number is smallest
      for (int j = i + 1; j < 5; j++)
      {
         if (numbers[j] < numbers[smallest])
         {
            smallest = j;
         }
      }
      int temp=numbers[i];
      numbers[i] = numbers[smallest];
      numbers[smallest]=temp;
   }
   cout<<"sorted array: "<<endl;
   for (size_t i = 0; i < 5; i++)
   {
      cout<<numbers[i]<<" ";
   }
   

   return 0;
}