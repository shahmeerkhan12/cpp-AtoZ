#include <string>
#include <iomanip>
#include "courseType.h"
using namespace std;
// remember to use name space std;
// becuse if not used then every input or out command and string keywords also generates error
void courseType::setCourseInfo(string cName, string cNo, int credits)
{
   courseName = cName;
   courseNo = cNo;
   courseCredits = credits;
} // end setCourseInf
void courseType::print(ostream &outF)
{
   outF << left;
   outF << setw(8) << courseNo << "   ";
   outF << setw(15) << courseName;
   outF << right;
   outF << setw(3) << courseCredits << "   ";
}
int courseType:: getCredits()
{
   return courseCredits;
}
string courseType:: getCourseNumber()
{
   return courseNo;
}
string courseType:: getCourseName()
{
   return courseName;
}
courseType::courseType(string cName, string cNo, int credits)
{
   courseName = cName;
   courseNo = cNo;
   courseCredits = credits;
}
