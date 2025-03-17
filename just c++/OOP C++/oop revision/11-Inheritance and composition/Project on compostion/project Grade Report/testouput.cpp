#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   int i;
   cout << "Student Name: "
        << " shahmir khan"
        << " "
        << "turangzai" << endl; // Step 1
   cout << "Student ID: "
        << "23h3j2" << endl; // Step 2
   cout << "Number of courses enrolled: "
        << "3" << endl; // Step 3
   cout << endl;
   cout << left;
   cout << "Course No" << setw(15) << "Course Name"
        << setw(8) << "Credits"
        << setw(6) << "Grade" << endl; // Step 4
   cout << right;
}