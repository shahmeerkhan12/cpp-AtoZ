#include<iostream>
#include<fstream>
using namespace std;
int main()
{

}
void calculateAvg(ifstream& group1, double& avg)
{
 double TotalScore = 0.0;
 int score;
 int Students=0;
 group1>>score;
 while (score!=-999)
 {
  TotalScore=TotalScore+score;
  Students++;
  group1>>score;
 }
  avg=TotalScore/Students;
}
void printR()