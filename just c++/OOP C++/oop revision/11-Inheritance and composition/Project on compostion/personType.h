#include<string>
using namespace std;
class personType
{
private:
//variables to store first  name
   string first_name ;
   //variables to store last name
    string last_name;
public:
//function to set the first and last name
//post_condition:
//first_name=first, last_name=last
   void set_name(string First, string Last);
   //prints the name of the person
   //post condition: displays the name
   void print();
   //returns the firstName 
   string getFirstName();
   //returns the lastName
   string getLastName();
   //constructor with parameters to set the first and last name to default values
   personType(string firstName = " ", string LastName = " ");
};