#include <iostream>
#include "circleType.h"
// set radius
void circleType::setRadius(double r)
{
   if (r >= 0)
   {
      radius = r;
   }
   else
      radius = 0;
}
double circleType::getRadius()
{
   return radius;
}
double circleType::area()
{
   return 3.14 * radius * radius;
}
double circleType::circumference()
{
   return 2 * 3.14 * radius;
}
circleType::circleType(double r)
{
   setRadius(r);
}