#include <iostream>
#include <string>
#include "personType.h"
using namespace std;
void personType::setName(string First, string Last)
{
   fname = First;
   lname = Last;
}
void personType::print()
{
   cout << "\nEmplyee Name: " << fname << " " << lname;
}
string personType::getFirstName()
{
   return fname;
}
string personType::getLastName()
{
   return lname;
}
personType::personType(string first, string last)
{
   fname = " ";
   lname = " ";
}