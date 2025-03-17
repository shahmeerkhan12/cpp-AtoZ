class DateOfBirth
{
private:
   // stores the year
   int dyear;
   // stores the month
   int dmonth;
   // stores the day
   int dDay;

public:
   // sets the date of birth according to the parameters
   void setDate(int month, int day, int year);
   // returns the month
   int getMonth();
   // returns the day

   int getDay();
   // returns the year

   int getYear();
   // prints the  DOB
   void printDate();
   // default constructor
   DateOfBirth();
   // constructor with parametes
   DateOfBirth(int month, int day, int year);
};