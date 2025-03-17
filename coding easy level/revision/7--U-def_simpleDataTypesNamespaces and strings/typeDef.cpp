
/*I am creating my own data type using the typedef statement*/
#include<iostream> 
int main(int argc, char const *argv[])
{
   typedef int Boolean;
   const Boolean True = 1;
   const Boolean False = 0;
   Boolean Flag;
   Flag = True;
   if (1 > 0)
   {
      std::cout << True;
   }

   return 0;
}
