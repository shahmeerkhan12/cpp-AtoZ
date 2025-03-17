#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
void calculateAvge(ifstream& inp, double& courseAverage);
void printResult(ofstream& oup, string courseId, int groupNo, double avg);
int main()
{
  string courseid1,courseid2;
  double avg1,avg2;
  double avgGroup1, avgGroup2;
  int numOfCourses=0;
  ifstream group1;
  ifstream group2;
  ofstream outp;
  group1.open("group1.txt"); 
  group2.open("group1.txt"); 
  if(!group1 || !group2)
  {
   cout<<"the Files are not opening may be they does not exist:"
   <<"\nthe program terminates... "<<endl;
   return 1;
  }//end if
  outp.open("student.out");
  outp<<fixed<<showpoint;
  outp<<setprecision(2);
  avgGroup1=0.0;
  avgGroup2=0.0;
  outp<<"Course no Group no Course average"<<endl;
  group1>>courseid1;
  group2>>courseid2;
  while (group1 && group2)
  {
   if (courseid1 != courseid2)
   {
      cout<<"Data Error, course id's does'nt match..."<<endl;
      cout<<"program terminates...."<<endl;
      return 1;
   } 
  else
   { 
      calculateAvge(group1,avg1);
      calculateAvge(group2,avg2);
      printResult(outp, courseid1, 1, avg1);
      printResult(outp, courseid2, 2, avg2);
      avgGroup1= avgGroup1 + avg1;
      avgGroup2= avgGroup2 + avg2;
outp<<endl;
numOfCourses++;
   }//end else
   group1>>courseid1;
   group2>>courseid2;
  }//end while
  if (group1 && !group2)
  {
   cout<<"the program ran out of data for group2.txt before group1.txt:"<<endl;
  }
 else if (!group1 && group2)
  {
   cout<<"the program ran out of data for group1.txt before group2.txt:"<<endl;
  }
  else
  {
   outp<<"average for group1 is: "<<avgGroup1/numOfCourses<<endl;
   outp<<"average for group2 is: "<<avgGroup2/numOfCourses<<endl;
  }
  group1.close();
  group2.close();
  outp.close();
  return 0;
}
void calculateAvge(ifstream& inp, double& courseAverage)
{
   int Tscore=0.0;
   int numberofstudents = 0;
   int score;
   inp>>score;
   while (score!=-999)
   {
     Tscore=Tscore+score;
     numberofstudents++;
     inp>>score;
   }//end while
   courseAverage = Tscore/numberofstudents;
}//end calculateaverage function
void printResult(ofstream &outp, string courseId, int groupNo, double avg)
{
   if(groupNo==1){
     outp<<" "<<courseId<<"   ";
   }
   else
   outp<<"       ";
   outp<<setw(8)<<groupNo<<setw(17)<<avg<<endl;
}//end 