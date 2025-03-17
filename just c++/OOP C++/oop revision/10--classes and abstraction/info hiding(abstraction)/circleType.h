class circleType
{
private:
   double radius;

public:
   void setRadius(double r);
   // sets the radius
   double getRadius();
   // return the radius
   double area();
   // Function to return the area of a circle.
   // Postcondition: Area is calculated and returned.
   double circumference();
   // Function to return the circumference of a circle.
   // Postcondition: Circumference is calculated and returned.
   circleType(double r = 0);

   // Constructor with a default parameter.
   // Radius is set according to the parameter.
   // The default value of the radius is 0.0;
   // Postcondition: radius = r;
};
