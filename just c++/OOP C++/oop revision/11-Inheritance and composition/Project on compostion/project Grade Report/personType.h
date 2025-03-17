#ifndef H_personType
#define H_personType
#include<string>
using namespace std;
class personType
{
public:
//function to set the first and last name
//post_condition:
//fname=first, lname=last
   void setName(string First, string Last);
   //prints the name of the person
   //post condition: displays the name
   void print();
   //returns the firstName 
   string getFirstName();
   //returns the lname
   string getLastName();
   //constructor with parameters to set the first and last name to default values
   personType(string firstName = " ", string lname = " ");

private:
//variables to store first  name
   string fname ;
   //variables to store last name
    string lname;
};
#endif