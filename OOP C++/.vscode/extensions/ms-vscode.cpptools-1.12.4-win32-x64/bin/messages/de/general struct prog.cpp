#include<iostream>
using namespace std;
struct student
{
    string firstname;
    string lastname;
    char grade;
    int total;
    int obtained;
};
int main()
{
student student1;
student student2;
student2=student1;
cout<<"Enter the required information :\n";
cout<<"First Name: \n";
cin>>student1.firstname;
cout<<"Last Name: \n";
cin>>student1.lastname;
cout<<"Grade : \n";
cin>>student1.grade;
cout<<"total marks: \n";
cin>>student1.total;
cout<<"obtained marks: \n";
cin>>student1.obtained;
cout<<"your information was arranged as:\n"
<<"first name___ "<<student1.firstname<<"\n"
<<"last name___ "<<student1.lastname<<"\n"
<<"grade___ "<<student1.grade<<"\n"
<<"total marks___ "<< student1.total<<"\n"
<<"obtained marks___ "<< student1.obtained
<<"\nthank you for your cooperation!"<<"\n";

}
