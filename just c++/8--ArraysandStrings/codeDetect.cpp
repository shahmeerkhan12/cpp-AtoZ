#include <iomanip>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
const int Max_Code_Size = 260;

void readcode(ifstream &infile, int &length, int list[], bool &lenCodeOK);
void compCode(ifstream &infile, ofstream &outfile, const int list[], int length);

int main()
{
   int codeArray[Max_Code_Size];
   int codelength;
   bool lengthCodeOk;
   ifstream incode;
   ofstream outcode;
   char inputfile[51];
   char outputfile[51];
   cout << "Enter the input file name";
   cin >> inputfile;
   cout << endl;
   incode.open(inputfile);
   if (!incode)
   {
      cout << "cannot open output file"
           << endl;
      return 1;
   }
   cout << "Enter the output file name";
   cin >> outputfile;

   outcode.open(outputfile);

   // calling the function read code
   readcode(incode, codelength, codeArray, lengthCodeOk);
   if (lengthCodeOk)
   {
      compCode(incode, outcode, codeArray, codelength);
   }
   else
      cout << "Length of the secret code must be "
           << " <= " << Max_Code_Size << endl;
      incode.close();
      outcode.close();
   return 0;
}
void readcode(ifstream &infile, int &length, int list[], bool &lenCodeOK)
{
   int count;
   lenCodeOK = true;
   infile >> length;
   if (length > Max_Code_Size)
   {
      lenCodeOK = false;
      return;
   }
   for (count = 0; count < length; count++)
   {
      infile >> list[count];
   }
}
void compCode(ifstream &infile, ofstream &outfile, const int list[], int length)
{
   int length2, digit, count;
   bool codeOk;
   codeOk = true;
   infile >> length2;
   if (length != length2)
   {
      cout << "The original code and its copy are not of the same length" << endl;
   }
   outfile << "code digit       code digit copy" << endl;

   for (count = 0; count < length2; count++)
   {
      infile >> digit;
      outfile << setw(5) << list[count] << setw(17) << digit;
      if (digit != list[count])
      {
         outfile << "Code digits are not the same"
                 << endl;
         codeOk = false;
      }
      else
         outfile << endl;
   }
   if (codeOk)
   {
      outfile << "message trasmitted successfully" << endl;
   }
   else{
      outfile << "Error in trasmission. Resend the message" << endl;
   }

}