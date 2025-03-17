#include<cstring>
#include<iostream>
#include<string>
#include<cctype>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
   ifstream infile;
   ofstream outfile;
   char Filename[50];
   int marks[4];
   cout<<"/ninput file name: "<<endl;
   cin>>Filename;
   infile.open(Filename);
   outfile.open("processed");
   infile>>marks[0];
   while (infile)
   {
    infile>>marks[4];
   }
      outfile.open("pro.");
      outfile<<marks[0];
   return 0;
}
