#include <iostream>
#include <string>
#include "personType.h"
using namespace std;
void personType::setName(string First, string Last)
{
  fName = First;
   lName = Last;
}
void personType::print()
{
   cout << "\nEmplyee Name: " <<fName << " " << lName;
}

string personType::getFirstName()
{
   return fName;
}
string personType::getLastName()
{
   return lName;
}
personType::personType(string first, string last)
{
  fName = first;
   lName = last;
}