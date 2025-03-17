#include<iostream>
#include<iomanip>
using namespace std;
struct node
{
int data;
struct node *next;
};
int main()
{
int x,choice;
node *head,*temp,*newnode;
head=0;
do
{
newnode=new node;
cout<<"Enter the value to store in link list:";
cin>>x;
newnode->data=x;
newnode->next=0;
if(head==0)
{
head=temp=newnode;
}
else
{
temp->next=newnode;
temp=newnode;
}
cout<<"Do you want to create an other node in linked list:Press 0 for no and 1 for yes:"<<endl;
cin>>choice;
}
while(choice);
cout<<"/nYour Linked list data and its addresses are: "<<endl;
temp=head;
while(temp!=0)
{
cout<<setw(5)<<temp->data<<setw(18)<<temp<<endl;
temp=temp->next;
}
return 0;
}
