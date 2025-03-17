#include <iostream>
#include <iomanip>
#include "circleType.h"
using namespace std;
int main()
{
   cout << fixed << showpoint << setprecision(2);
   circleType circle1(10.0);
   double radius;
   cout << "Circle-radius: " << circle1.getRadius();
   cout << ", area: " << circle1.area();
   cout << ", circumference: " << circle1.circumference();
}