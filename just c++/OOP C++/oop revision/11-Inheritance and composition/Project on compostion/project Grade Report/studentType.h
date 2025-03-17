#ifndef H_studentType
#define H_studentType

#include <iostream>
#include <string>
# include "courseType.h"
#include "personType.h"
using namespace std;
class studentType : public personType
{
   private:
   void sortCourses();
   // func to sort courses
   // post_condition:
   //                 the array coursesEnrolled is sorted
   //                 for each course the corresponding grade is stored
   //                 in the array courseGrades; therefore
   //                 when the courses in the array courses
   //                 is sorted the corresponding grades are also adjusted
   int sId;                       // variable to store the student ID
   int numberOfCourses;           // variable to store the number of courses
   bool isTuitionPaid;            // variable to indicate whether the tuition is paid
   courseType coursesEnrolled[6]; // array to store the courses
   char coursesGrade[6];          // array to store the course grades
public:
   void setInfo(string fname, string lName, int ID,
                int nOfCourses, bool isTPaid,
                courseType courses[], char cGrades[]);
   // Function to set the student's information.
   // Postcondition: The member variables are set
   //  according to the parameters.
   void print(ostream &outF, double tuitionRate);
   // Function to print the student's grade report.
   // If the member variable isTuitionPaid is true, the grades
   // are shown; otherwise, three stars are printed. If the
   // actual parameter corresponding to outF is the object
   // cout, then the output is shown on the standard output
   // device. If the actual parameter corresponding to outF
   // is an ofstream object, say outFile, then the output
   // goes to the file specified by outFile.
   studentType();
   // default constructor
   // member variables are initialized
   int getHoursEnrolled();
   // func to return the number of credit hours a student is enrolled
   // post_condition:
   //                 the number of credit hours are calculated and returned
   double getGpa();
   // func to return the Grade point Avg
   // post_condition:
   //                 the GPA is calculated and returned
   double billingAmount(double tutionRate);
   // func to return the tuition fees
   // post_condition:
   //                 the tuition fee is calculated and returned


};
#endif
