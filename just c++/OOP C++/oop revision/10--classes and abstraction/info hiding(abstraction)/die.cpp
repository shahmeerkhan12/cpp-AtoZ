#include <iostream>
#include <cmath>
#include "die.h"
// definitions of the function declared in the die.h file
die::die()
{
   num = 1;
   srand(time(0));
}
int die::roll()
{
   num = rand() % 6 + 1;
   return num;
}
int die::get_num() const
{
   return num;
}