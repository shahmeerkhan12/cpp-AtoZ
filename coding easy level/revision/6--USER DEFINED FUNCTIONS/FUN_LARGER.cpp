#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
//
int larger(int x, int y);

int main()
{
                                                   // srand(time(0));
                                                   // int x = rand() % 10 + 1;
                                                   // cout<<x;
                                                   // initializing string and calling the functin with passing string as an actual argument
                                                   // string str = "maddam";
                                                   // cout<<"\nThe string "<< str <<" is palindrome (note 1 means yes and 0 means no): "<<isPalidrome(str)<<endl;
                                                   // return 0;
   double num;
   double max;
   int count;
   cout<<"please enter 10 numbers: " << endl;
   cin >> num;
   max = num;
   for (int count = 1; count < 10; count++)
   {
      cin >> max;
      max = larger(max, num);
   }
   cout << "the largest of 10 numbers: "
        << "is: " << max << endl;
        return 0;
} // end main
int larger(int x, int y)
{
   if (x >= y)
      return x;
   else
      return y;
}