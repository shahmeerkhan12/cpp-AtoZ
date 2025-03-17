#include<iostream>
#include<string.h>
#include<string>
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
   //ClockType(int hours, int minutes, int seconds);

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
// ClockType::ClockType(string name,int hours, int minutes, int seconds)
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
   ++hr;
   if (hr > 23)
      hr = 0;
} // endif

bool ClockType::equalTime(const ClockType &otherClock) const
{
   return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
};

// class arrival:public class ClockType
// {

// public:
//    arrival(/* args */);
//    ~arrival();
//    //member functions
//    // void getname(){
//    //    cout<<"please enter your name: ";
//    //    cin>>name;
//    // }

// };

// arrival::arrival(/* args */)
// {
// }

// arrival::~arrival()
// {
// }

int main()
{
   ClockType clock[10];
   clock[1].setTime(1,23,32);
   clock[2].setTime(2,23,32);
   clock[3].setTime(3,23,32);
   clock[4].setTime(4,23,32);
   clock[5].setTime(5,23,32);
   clock[6].setTime(10,23,32);
   clock[7].setTime(11,23,32);
   clock[8].setTime(12,23,32);
   clock[9].setTime(21,23,32);
   clock[10].setTime(13,23,32);
  for (int i = 1; i < 11; i++)
  {
   cout<<"Employ"<<i<<" arrivalTime: ";
   clock[i].print_time();
   cout<<endl;
  }
  
}