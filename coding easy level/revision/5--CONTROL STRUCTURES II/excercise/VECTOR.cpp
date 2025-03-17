#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{
 for (int i = 0; i < v.size(); i++)
 {
   cout<<v[i]<<" ";
 }
 
}
int main()
{
  vector<int> vec; 
  int size,element;
  cout<<" Enter the size of the vector: "<<endl;
  cin>>size;
  for (int i = 0; i < size; i++)
  {
   cout<<"enter an element to add to the vector: ";
   cin>>element;
   vec.push_back(element);
  }
  display(vec);
  return 0;
  
}