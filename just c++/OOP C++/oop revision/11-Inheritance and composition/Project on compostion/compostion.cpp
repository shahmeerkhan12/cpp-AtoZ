// program to demonstrate the use of composition
#include <iostream>
#include <string>
#include "personType.h"
#include "DateOfBirth.h"
using namespace std;
// class personalInfo
class personalInfo
{
private:
   personType name;
   DateOfBirth bDay;
   int personID;
public:
   void setPersonalInfo(string first, string last, int month, int day, int year, int ID);
   void printPersonalInfo();
   personalInfo(string first, string last, int month, int day, int year, int Id) : name(first, last), bDay(month, day, year)
   {
      personID = Id;
   }
   // personalInfo::personalInfo(string first, string last, int month, int day, int year, int ID) : name(first, last), bDay(month, day, year);
};
void personalInfo::setPersonalInfo(string first, string last, int month, int day, int year, int ID)
{
   name.set_name(first, last);
   bDay.setDate(month, day, year);
   personID = ID;
}

// personalInfo::personalInfo(string first, string last, int month, int day, int year, int ID) : name(first, last), bDay(month, day, year)
// {
//    personID = ID;
// }

void personalInfo::printPersonalInfo()
{
   name.print();
   cout << endl;
   cout << "Date of Birth: ";
   bDay.printDate();
   cout << endl;
   cout << "Personal ID: " << personID;
}

int main()
{
   cout << endl;
   personalInfo Person1("Ahmad", "Ali", 3, 20, 2000, 199876987);
   Person1.printPersonalInfo();

   cout << endl;

   personalInfo Person2("Shahab", "Ahmad", 1, 04, 2010, 199576987);
   Person2.printPersonalInfo();

   cout << endl;
}