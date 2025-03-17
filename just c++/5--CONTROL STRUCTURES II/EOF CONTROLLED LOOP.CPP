/*An eof controlled loop that reads data from an output file when it reaches the end
of the file the loop terminates by using an eof function*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
   string firstname, lastname;
   int testscore, sum = 0, count = 0;
   char grade = ' ';
   // stream variables
   ifstream infile;
   ofstream outfile;
   // opening input file
   infile.open("prog.txt");
   // check condition
   if (!infile)
   {
      cout << "cannot open input file. the program terminates" << endl;
      return 1;
   }
   // open out file
   outfile.open("prog.out");
   outfile << fixed << showpoint << setprecision(2);
   infile >> firstname >> lastname;
   infile >> testscore;
   while (infile)
   {
      sum = sum + testscore;
      count++;
      // to determine the grade
      switch (testscore / 10)
      {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
         grade = 'F';
         break;
      case 6:
         grade = 'E';
         break;
      case 7:
         grade = 'D';
         break;
      case 8:
         grade = 'C';
         break;
      case 9:
         grade = 'B';
         break;
      case 10:
         grade = 'A';
         break;
      default:
         cout << "invalid score" << endl;
      } // end switch

      outfile << left << setw(12) << firstname
              << setw(12) << lastname << right << setw(4)
              << testscore << setw(4) << grade << endl;
      infile >> firstname >> lastname;
      infile >> testscore;
   } // end while
   outfile << endl;
   //   int total_score = count * 100;
   if (count != 0)
   {
      outfile << "Class total Average average score = " << sum / count << endl;
      // Below step is created by me inorder to show the percentage of the class: If total score
      //  each time is 100 for each student then,
      // outfile << total_score << endl;
      // outfile << sum / total_score;
      // outfile << "Average percentage of the class  = " << "%" << endl;
   }
   else
      outfile << "no data found. " << endl;

   infile.close();
   outfile.close();
   return 0;
}