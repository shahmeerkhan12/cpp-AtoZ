#include <iostream>
#include "DateOfBirth.h"
#include <string>
using namespace std;

void DateOfBirth::setDate(int month, int day, int year)
{
   if (1 <= year)
   {
      dyear = year;
   }
   else
      year = 2000;
   if (1 <= month >= 12)
   {
      dmonth = month;
   }
   else
      month = 1;
   if (1 <= day <= 31)
   {
      dDay = day;
   }
   else
      dDay = 1;
}
int DateOfBirth::getMonth()
{

   return dmonth;
}
int DateOfBirth::getDay()
{
   return dDay;
}
int DateOfBirth::getYear()
{
   return dyear;
}
void DateOfBirth::printDate()
{
   cout << dmonth << "-" << dDay << "-" << dyear;
}
DateOfBirth::DateOfBirth()
{
   dmonth = 1;
   dDay = 1;
   dyear = 1990;
}
// constructor with paramteres
DateOfBirth::DateOfBirth(int month, int day, int year)
{
   setDate(year, month, day);
}
