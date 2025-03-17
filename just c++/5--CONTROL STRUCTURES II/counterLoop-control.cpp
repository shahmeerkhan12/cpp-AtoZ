#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
   string name;
   int student_numofboxessold, totalnumofboxessold, numofvolunteers, counter;
   double priceofeachbox;
   double averagecostmadebyeachvol;
   cout << fixed << showpoint << setprecision(2);
   cout << "\nenter number of students volunteered and price of each box: " << endl;
   cin >> numofvolunteers >> priceofeachbox;
   totalnumofboxessold = 0;
   counter = 0;
   while (counter < numofvolunteers)
   {
      cout << "\n enter the name of volunteer and number of boxes sold by each student" << endl;
      cin >> name >> student_numofboxessold;
      totalnumofboxessold = totalnumofboxessold + student_numofboxessold;
      counter++;
   }
   cout << "the total number of boxes sold: " << totalnumofboxessold << endl;
   if (counter != 0)
   {
      cout << "\ntotal revenue generated: " << totalnumofboxessold * priceofeachbox << endl;
      cout << "\ncontribution made by each student: " << (totalnumofboxessold * priceofeachbox) / numofvolunteers << endl;
   }
   else
      cout << "no input." << endl;
}