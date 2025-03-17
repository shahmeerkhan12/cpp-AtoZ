// A class without constrctors

#include <iostream> /*use of constructors*/
using namespace std;
class ClockType
{
public:
   void setTime(int hours, int minutes, int seconds); // let if we added a constructor that the same parameters a
   void get_time(int &, int &, int &);                // the hours, minutes seconds and we then pass it from the main just like
   void print_time() const;                           // the we pass them to the function setTime() then we can replace these.
   void increment_seconds();
   void increment_minutes();
   void increment_Hours();
   bool equalTime(const ClockType &otherClock) const;
   // constructors
   ClockType()
   {
      hr = 0;
      min = 0;
      sec = 0;
   };

private:
   int hr,
       min,
       sec;
};
void ClockType::setTime(int hours, int minutes, int seconds)
{
   if (0 <= hours && hours < 24)
      hr = hours;
   else
      hr = 0;
   if (0 <= minutes && minutes < 60)
      min = minutes;
   else
      min = 0;
   if (0 <= seconds && seconds < 60)
      sec = seconds;
   else
      min = 0;
}
// ClockType::ClockType(int hours, int minutes, int seconds)
// {
//    if (0 <= hours && hours < 24)
//       hr = hours;
//    else
//       hr = 0;
//    if (0 <= minutes && minutes < 60)
//       min = minutes;
//    else
//       min = 0;
//    if (0 <= seconds && seconds < 60)
//       sec = seconds;
//    else
//       sec = 0;
// }

void ClockType::get_time(int &hours, int &minutes, int &seconds)
{
   hours = hr; // copying the value hr into hours
   minutes = min;
   seconds = sec;
}
void ClockType::print_time() const
{
   if (hr < 10)
   {
      cout << "0";
   }
   cout << hr << ":";
   if (min < 10)
   {
      cout << "0";
   }
   cout << min << ":";
   if (sec < 10)
   {
      cout << "0";
   }
   cout << sec;
}
void ClockType::increment_seconds()
{
   if (sec > 59)
   {
      sec = 0;
      increment_minutes();
   } // end if
}
void ClockType::increment_minutes()
{
   if (min > 59)
   {
      min = 0;
      increment_Hours();
   } // end if
}
void ClockType::increment_Hours()
{
   hr++;
   if (hr > 23)
      hr = 0;
} // endif

bool ClockType::equalTime(const ClockType &otherClock) const
{
   return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
};

int main()
{
   // creating objects
   ClockType myclock;
   ClockType yourclock;
   cout << "The effect of default constructor: ";
   myclock.print_time();
   cout << endl;
   // declaring variables
   int hours;
   int minutes;
   int seconds;
   myclock.setTime(5, 50, 6);
   // printing the myclock time
   cout << "myclock time: ";
   myclock.print_time();
   cout << endl;
   // printing the yourclock time
   yourclock.setTime(5, 50, 6);
   cout << "yourclock time: ";
   yourclock.print_time();
   cout << endl;
   ////
   myclock.get_time(hours, minutes, seconds);
   cout << "------------------------------------" << endl;
   cout << "hours = " << hours
        << ", minutes = " << minutes
        << " and seconds = " << seconds << endl;
   cout << "------------------------------------" << endl;

   // set the yourclock time
   cout << "After getting the time of yourclock: ";
   yourclock.get_time(hours, minutes, seconds);
   cout << endl;
   yourclock.setTime(hours, minutes, seconds);
   yourclock.print_time();
   cout << endl;
   // calling the equaltime function
   cout<<"myclock and yourclock times are ";
   if (myclock.equalTime(yourclock))
   {
      cout << "equal";
   }
   else
   {
      cout << "not equal"; 
   }

   return 0;
}
