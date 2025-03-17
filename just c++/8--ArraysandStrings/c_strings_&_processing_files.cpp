#include <iostream>
#include <fstream>
#include <string>
using namespace std;
unsigned main(int argc, char const *argv[])
{
   ifstream read;
   ofstream print;
   read.open("data.txt");
   // instead of simple open ( print.open("processed") ) we use the following to save the current
   // output at the end of the existing data or information
   print.open("processed",ios::app);
   string subject1;
   // reading subject name and storing in subject1
   int total;
   int score1, score2, score3, score4, score5;
   while (read >> subject1 >> score1 >> score2 >> score3 >> score4 >> score5)
   {
   total = score1 + score2 + score3 + score4 + score5;
   print << "The total score of " << subject1 << " is: "
         << total << " out of 500" << endl;
   }
   read.close();
   print.close();
   return 0;
}
