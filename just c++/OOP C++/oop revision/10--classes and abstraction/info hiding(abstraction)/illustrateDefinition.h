class illustrate
{
private:
   int x;
   // private static variable
   static int y;

public:
   // public static member variable
   static int count;
   // public static memberFunctions

   //Function to print values of x,y and count
   void print() const;
   //Function to set the value of x
   void setX(int a);
 // funciton to increment the value of y
   static void incrementY();
  // constructor to set the value of x:
   //  postcondition: x=a (if no value is specified for a then x=0)
   illustrate(int a = 0); 
};