#include <iostream>
#include <cctype>
#include <cmath>
#include <iomanip>
using namespace std;
double mean(int list[], int size);
void deviation(int list[], double x);
int main()
{
   cout << setprecision(3); // just to rewise the old concept learnt in chap# 03(input/ouput)streams
   int list[5];
   int count = 5;
   cout << "\nPlease input the 5 digits to be processed: ";
   for (int i = 0; i < count; i++)
   {
      cin >> list[i];
   }
   cout << "\nThe list elements are: ";
   for (auto &&i : list)
   {
      cout << i << " ";
   }
   cout << endl;
   cout << "\nThe mean of the numbers is: " << mean(list, 5) << endl;
   // now the second call to the function to find standard deviation
   deviation(list, mean(list, 5)); // function mean as parameter to the fun deviation
   return 0;
}
double mean(int list[], int size)
{
   double x = 0.0;
   int total = 0;
   double mean = 0.0;
   for (int i = 0; i < size; i++)
   {
      total = total + list[i];
   }
   // find the mean(average)

   mean = total / 5;
   return mean;
}
void deviation(int list[], double x)
{
   // initialize some variables that help you ahcieve your goal
   double sum = 0;
   double total = 0.0;
   double stand_deviation = 0.0;

   for (int i = 0; i < 5; i++)
   {
      sum = (list[i] * list[i]) - (2 * list[i] * x) + (x * x);
   }
   // dividing the sum by 5

   total = sum / 5;

   // calculating the total deviation of the number

   stand_deviation = sqrt(total);

   // displying the total devieation of the given five numbers

   cout << "\n The total standard deviation of these numbers: " << stand_deviation;
}