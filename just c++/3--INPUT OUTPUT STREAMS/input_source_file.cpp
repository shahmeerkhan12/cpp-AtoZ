#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
        ifstream infile;
        ofstream outfile;
        double test1, test2, test3, test4, test5;
        double avg;
        string firstname;
        string lastname;
        cout << "processing Data  " << endl;
        infile.open("new");
        outfile.open("avgtest.txt");
        infile >> firstname >> lastname;
        outfile << "student name: " << firstname << " " << lastname << endl;
        infile >> test1 >> test2 >> test3 >> test4 >> test5;
        outfile << "Test scores" << setw(6) << test1 << setw(6) << test2
                << setw(6) << test3 << setw(6) << test4 << setw(6) << test5 << endl;
        avg = (test1 + test2 + test3 + test4 + test5) / 5.0;
        outfile << "Average test score:" << setw(6) << avg << endl;
        infile.close();
        outfile.close();
        return 0;
}